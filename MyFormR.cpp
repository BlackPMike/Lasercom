#include "MyForm.h"
#include "Order.h"
#include "Users.h"
#include "Search.h"
#include "testDialog.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace System::Threading::Tasks;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading::Tasks;



//	MessageBox::Show("Empty!", "Îøèáêà!");
int TryToParse(String^ value)
{
	Int32 number;
	Double number1;
	bool result = Int32::TryParse(value, number);
	if (result) {
		return 1;
	}
	else {
		if (value == nullptr)
		{
			value = "";
		}
		result = Double::TryParse(value, number1);
		if (result) {
			return 1;
		}
		else
		return 0;
	}
}

String^ point(String^ a)
{
	a->Replace("&", ",");
	return a;
}
	String^ DB(String^ a)
	{
		a = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source = T:\\DataBase1.mdb";
		return(a);
	}
	String^ TB(String^ b)
	{
		b = "Provider = Microsoft.Jet.OLEDB.4.0; Data Source = T:\\TehtranN.mdb";
		return(b);
	}
	int showstat(int curr, int stat)
	{
		switch (stat) {
			static int nStatic;
		case 0: //записываем
		{
			nStatic = curr;
			return nStatic;
		}
		break;
		case 1: //узнаем
		{

			return nStatic;
		}
		break;
		case 2: //обнуляем
		{
			nStatic = 0;
			return nStatic;
		}
		break;
		}

	}
	void colorselections(int min, String^ value, DataGridView^ grid, int mod)
	{
		if (mod == 0) // целые листы
		{
			for (int j = 0; j < grid->Rows->Count - 1; j++)
			{
				if (Convert::ToInt32(grid->Rows[j]->Cells[5]->Value->ToString()) < 10 && (grid->Rows[j]->Cells[1]->Value->ToString() == "1_ХК")
				||(Convert::ToInt32(grid->Rows[j]->Cells[5]->Value->ToString()) < 4 && (grid->Rows[j]->Cells[1]->Value->ToString() == "2_ГК")))
				{
					grid->Rows[j]->Cells[0]->Style->BackColor = Color::Red;
				}
				
			}
		}
		if (mod == 3) //трубы
		{
			for (int j = 0; j < grid->Rows->Count - 1; j++)
			{
				grid->Rows[j]->Cells[1]->Style->BackColor = Color::Red;
			}
		}
	}

	void repaint(DataGridView^ grid)
	{	
			for (int j = 0; j < grid->Rows->Count - 1; j++)
			{
				grid->Rows[j]->DefaultCellStyle->BackColor = Color::White;
				if (j % 2 == 0)
				{
					grid->Rows[j]->DefaultCellStyle->BackColor = Color::Lavender;
				}
			}
	}

	void sqlreader(String^ Sql, OleDbDataAdapter^ dataAd, ComboBox^ combobox, String^ DataBase, String^ Collumn)
	{
		String^ SelectedDB = DataBase;
		dataAd->SelectCommand->CommandText = Sql;
		dataAd->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
		auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
		Connection->Open();
		auto Command = gcnew Data::OleDb::OleDbCommand(Sql, Connection);
		auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
		while (Reader->Read()) { combobox->Items->Add(Reader[Collumn]); }
		Reader->Close();
		Connection->Close();
	}

	String^ SQLquery(int numquert)
	{
		String^ query;
		OleDbConnection^ dbConnection = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source = T:\\DataBase1.mdb");
		dbConnection->Open();
		OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
		dbComand->ExecuteNonQuery();
		return "s";
	}

	System::Void LasercomStorage::MyForm::dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) //обновление
	{
		int jornal = 0;
		OleDbCommand^ dbComand;
		int i = 0;
		int Pos = 0;
		int key;
		Pos = dataGridView1->CurrentCell->RowIndex;
		if (dataGridView1->CurrentCell->Value == "Не выбран")
		{
			return System::Void();
		}
		String^ Osnov;
		String^ SelectedTable;
		String^ DataBase;
		String^ SelectedDB;
		String^ query; // Запрос на обновление 
		String^ query1; // Запрос на проверку уникальности 
		String^ query2; // Запрос на внесение 
		String^ query3; // Добавление в жэу
		String^ query4; // Запрос на внесение 
		String^ query5; // Запрос на макс кол-во 
		String^ LastChangesDate = DateTime::Now.ToString();
		i = toolStripComboBox1->SelectedIndex;

		switch (i) {
		case 0: //целые
		{
			String^ SShID = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
			String^ MtID = dataGridView1->Rows[Pos]->Cells[1]->Value->ToString();
			String^ SShThick = dataGridView1->Rows[Pos]->Cells[2]->Value->ToString();
			String^ SShWidth = dataGridView1->Rows[Pos]->Cells[3]->Value->ToString();
			String^ SShLength = dataGridView1->Rows[Pos]->Cells[4]->Value->ToString();
			String^ SShCount = dataGridView1->Rows[Pos]->Cells[5]->Value->ToString();
			//PosSheet(Pos);
			SelectedTable = "StoreSheet";
			SelectedDB = TB(DataBase);
			query = "UPDATE [" + SelectedTable + "] SET MtID  = '" + MtID + "', SShThick = '" + SShThick + "', SShWidth = " + SShWidth + ", SShLength = " + SShLength + ", SShCount= " + SShCount + ", SShDateModify='" + LastChangesDate + "' WHERE SShID  = '" + SShID + "'";
			query1 = "SELECT * FROM [" + SelectedTable + "] WHERE SShID  = '" + SShID + "'";
			query2 = "INSERT INTO [" + SelectedTable + "] (SShID,MtID,SShThick,SShWidth,SShLength,SShCount,SShDateModify)  VALUES ('" + SShID + "', 'НЕ ВЫБРАН', NULL, NULL, NULL, NULL ,'" + LastChangesDate + "')";
		}
		break;
		case 1:  //до
		{
			String^ SScID = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
			String^ MtID = dataGridView1->Rows[Pos]->Cells[1]->Value->ToString();
			String^ SScThick = dataGridView1->Rows[Pos]->Cells[2]->Value->ToString();
			String^ SScSizeX = dataGridView1->Rows[Pos]->Cells[4]->Value->ToString();
			String^ SScSizeY = dataGridView1->Rows[Pos]->Cells[3]->Value->ToString();
			String^ SScCount = dataGridView1->Rows[Pos]->Cells[5]->Value->ToString();
			SelectedTable = "StoreScrap";
			SelectedDB = TB(DataBase);
			query = "UPDATE [" + SelectedTable + "] SET MtID  = '" + MtID + "', SScThick  = '" + SScThick + "', SScSizeX = " + SScSizeX + ", SScSizeY = " + SScSizeY + ", SScCount= " + SScCount + ", SScDateModify='" + LastChangesDate + "' WHERE SScID  = '" + SScID + "'";
			query1 = "SELECT * FROM [" + SelectedTable + "] WHERE SScID ='" + SScID + "'";
			query2 = "INSERT INTO [" + SelectedTable + "] (SScID,MtID,SScThick,SScSizeX,SScSizeY,SScCount,SScDateModify)  VALUES ('" + SScID + "', 'НЕ ВЫБРАН', NULL, NULL, NULL, NULL ,'" + LastChangesDate + "')";
		}
		break;
		case 2: //труба
		{
			String^ TubeName = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
			String^ TMt = dataGridView1->Rows[Pos]->Cells[1]->Value->ToString();
			String^ NumberTube = dataGridView1->Rows[Pos]->Cells[2]->Value->ToString();
			String^ UserTube = UserNameT->Text;
			SelectedTable = "Tube";
			SelectedDB = DB(DataBase);
			query = "UPDATE [" + SelectedTable + "] SET Tmt='" + TMt + "', NumberTube = " + NumberTube + ", LastChangesDate='" + LastChangesDate + "', UserTube='" + UserTube + "' WHERE TubeName='" + TubeName + "'";
			query1 = "SELECT * FROM [" + SelectedTable + "] WHERE TubeName='" + TubeName + "'";
			query2 = "INSERT INTO [" + SelectedTable + "] (TubeName,Tmt,NumberTube,LastChangesDate,UserTube)  VALUES ('" + TubeName + "', NULL , NULL ,'" + LastChangesDate + "', '" + UserTube + "' )";
		}
		break;
		case 3: //труба отходы
		{
			String^ TubeRName = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
			String^ TRMt = dataGridView1->Rows[Pos]->Cells[1]->Value->ToString();
			String^ NumberTubeR = dataGridView1->Rows[Pos]->Cells[2]->Value->ToString();
			String^ LenghtTubeR = dataGridView1->Rows[Pos]->Cells[3]->Value->ToString();
			String^ UserTubeRest = UserNameT->Text;
			SelectedTable = "TubeRest";
			SelectedDB = DB(DataBase);
			query = "UPDATE [" + SelectedTable + "] SET TRMt='" + TRMt + "', NumberTubeR = " + NumberTubeR + ", LenghtTubeR = '" + LenghtTubeR + "', LastChangesDateR='" + LastChangesDate + "', UserTubeRest='" + UserTubeRest + "' WHERE TubeRName='" + TubeRName + "'";
			query1 = "SELECT * FROM [" + SelectedTable + "] WHERE TubeRName='" + TubeRName + "'";
			query2 = "INSERT INTO [" + SelectedTable + "] (TubeRName,TRMt,NumberTubeR,LenghtTubeR,LastChangesDateR,UserTubeRest)  VALUES ('" + TubeRName + "', NULL , NULL , NULL,'" + LastChangesDate + "', '" + UserTubeRest + "')";
		}
		break;
		case 4: //метизы
		{

			String^ MetName = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
			String^ MetNumber = dataGridView1->Rows[Pos]->Cells[1]->Value->ToString();
			String^ UserMetiz = UserNameT->Text;
			SelectedTable = "Metiz";
			SelectedDB = DB(DataBase);
			query = "UPDATE [" + SelectedTable + "] SET MetNumber =" + MetNumber + ", LastChangesDateM='" + LastChangesDate + "',UserMetiz='" + UserMetiz + "' WHERE MetName = '" + MetName + "'";
			query1 = "SELECT * FROM [" + SelectedTable + "] WHERE MetName ='" + MetName + "'";
			query2 = "INSERT INTO [" + SelectedTable + "] (MetName,MetNumber,LastChangesDateM,UserMetiz)  VALUES ('" + MetName + "', NULL ,'" + LastChangesDate + "','" + UserMetiz + "')"; //Метизы изменить что бы не было пустых полей

			query5 = "SELECT MAX (JMetKey) FROM [JIEM]";
		}
		break;
		case 5: //метизыжурнал
		{
			return System::Void();
		}
		break;


		}


		OleDbConnection^ dbConnection = gcnew OleDbConnection(SelectedDB);
		dbConnection->Open();
		dbComand = gcnew OleDbCommand(query1, dbConnection);
		auto Reader = dbComand->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
		if (Reader->Read() != 1)
		{
			dbComand = gcnew OleDbCommand(query2, dbConnection);
			dbComand->ExecuteNonQuery();
			Reader->Close();
			dbConnection->Close();
			repaint(dataGridView1);
			switch (i) {     //Цикл (Добавление в последнюю строку )
			case 0: //целые
			{
				dataGridView1->Rows[Pos]->Cells[6]->Value = LastChangesDate;
			}
			break;
			case 1: //ДО
			{
				dataGridView1->Rows[Pos]->Cells[6]->Value = LastChangesDate;
			}
			break;
			case 2: //Трубы целые
			{
				dataGridView1->Rows[Pos]->Cells[3]->Value = LastChangesDate;
				dataGridView1->Rows[Pos]->Cells[4]->Value = UserNameT->Text;
			}
			break;
			case 3: //Трубы ДО
			{
				dataGridView1->Rows[Pos]->Cells[4]->Value = LastChangesDate;
				dataGridView1->Rows[Pos]->Cells[5]->Value = UserNameT->Text;
			}
			break;
			case 4: //Метизы
			{
				dataGridView1->Rows[Pos]->Cells[2]->Value = LastChangesDate;
				dataGridView1->Rows[Pos]->Cells[3]->Value = UserNameT->Text;
			}
			break;
			case 5: //Метизы жэурнал
			{
				return System::Void();
			}
			break;
			}
			return System::Void();
		}
		for (int s = 0; s < dataGridView1->ColumnCount-1; s++)
		{
			if (String::IsNullOrEmpty(dataGridView1->Rows[Pos]->Cells[s]->Value->ToString())) //не вносить пока ID не заполнено 
			{
				
				Reader->Close();
				dbConnection->Close();
				return System::Void();
			}
		}

		if (i == 4)
		{

			if ((Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString()) > 0) && (showstat(0, 1) == 1))
			{
				LasercomStorage::testDialog^ f1 = gcnew testDialog();
				if (f1->ShowDialog(this) == ::DialogResult::OK)
				{
					Osnov = f1->textBox1->Text;
				}
				else
				{
					dataGridView1->Rows[Pos]->Cells[1]->Value = showstat(0, 3);
					jornal = 0;
					f1->Close();
					return System::Void();
				}
				dbComand = gcnew OleDbCommand(query5, dbConnection);
				key = Convert::ToInt32(dbComand->ExecuteScalar());
				key++;
				String^ MetName = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
				String^ MetNumber = dataGridView1->Rows[Pos]->Cells[1]->Value->ToString();
				String^ UserJIEM = UserNameT->Text;
				query3 = "INSERT INTO [JIEM] (JMetKey,JMetName,JMetNumber,JMetOperation,JMetComment,JmetLastChangesDate,UserJIEM)  VALUES (" + key + ",'" + MetName + "'," + MetNumber + " ,'Приход' , '" + Osnov + "' , '" + LastChangesDate + "', '" + UserJIEM + "')";
				dbComand = gcnew OleDbCommand(query3, dbConnection);
				dbComand->ExecuteNonQuery();
				showstat(0, 2);
			}
			if (jornal == 0)
			{

			}
		}
		
		dbComand = gcnew OleDbCommand(query, dbConnection);
		dbComand->ExecuteNonQuery();
		Reader->Close();
		dbConnection->Close();
		dataGridView1->Update();
		toolStripComboBox1_SelectedIndexChanged(sender, e);
		repaint(dataGridView1);
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::dataGridView1_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) //удаление

	{
		repaint(dataGridView1);
		int Pos = dataGridView1->CurrentCell->RowIndex;
		String^ id = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
		String^ DataBase;
		String^ TehBase;
		String^ SelectedDB;
		String^ SelectedTable;
		String^ query;
		String^ query4;
		String^ query5;
		String^ LastChangesDate = DateTime::Now.ToString();
		int i = toolStripComboBox1->SelectedIndex;
		switch (i) {
		case 0: //целые
		{
			SelectedTable = "StoreSheet";
			SelectedDB = TB(TehBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE SShID = '" + id + "'";
		}
		break;
		case 1:  //до
		{
			SelectedTable = "StoreScrap";
			SelectedDB = TB(TehBase);
			query = "DELETE FROM [" + SelectedTable + "]WHERE SScID = '" + id + "'";
		}
		break;
		case 2: //труба
		{
			SelectedTable = "Tube";
			SelectedDB = DB(DataBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE TubeName = '" + id + "'";
		}
		break;
		case 3: //труба отход
		{
			SelectedTable = "TubeRest";
			SelectedDB = DB(DataBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE TubeRName = '" + id + "'";
		}
		break;
		case 4: //метизы
		{
			SelectedTable = "Metiz";
			SelectedDB = DB(DataBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE MetName = '" + id + "'";
			query5 = "SELECT MAX (JMetKey) FROM [JIEM]";
		}
		break;


		}

		OleDbConnection^ dbConnection = gcnew OleDbConnection(SelectedDB);
		dbConnection->Open();
		OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
		dbComand->ExecuteNonQuery();
		if (i == 4)
		{
			String^ Osnov;
			String^ MetName = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
			String^ MetNumbers = Convert::ToString(0 - Convert::ToInt32(dataGridView1->Rows[Pos]->Cells[1]->Value));
			dbComand = gcnew OleDbCommand(query5, dbConnection);
			int key = Convert::ToInt32(dbComand->ExecuteScalar());
			key++;
			LasercomStorage::testDialog^ f1 = gcnew testDialog();
			if (f1->ShowDialog(this) == ::DialogResult::OK)
			{
				Osnov = f1->textBox1->Text;
			}
			else
			{
				dataGridView1->Rows[Pos]->Cells[1]->Value = showstat(0, 3);
				f1->Close();
				return System::Void();
			}
			showstat(0, 0);
			String^ UserJIEM = UserNameT->Text;
			query4 = "INSERT INTO [JIEM] (JMetKey,JMetName,JMetNumber,JMetOperation,JMetComment,JmetLastChangesDate,UserJIEM)  VALUES (" + key + ",'" + MetName + "'," + MetNumbers + " , 'Расход' ,  '" + Osnov + "', '" + LastChangesDate + "', '" + UserJIEM + "')";
			OleDbCommand^ dbComand = gcnew OleDbCommand(query4, dbConnection);
			dbComand->ExecuteNonQuery();
		}

		dbConnection->Close();
		repaint(dataGridView1);
		return System::Void();
	}


	System::Void LasercomStorage::MyForm::toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) //вывод в datagrid
	{
		comboBox1->Items->Clear();
		comboBox2->Items->Clear();
		comboBox1->Text = "";
		comboBox2->Text = "";

	
		dataSet1->Clear();
		bindingNavigator1->Update();
		int i = 0;
		String^ DataBase;
		String^ SelectedTable;
		String^ SelectedDB;
		i = toolStripComboBox1->SelectedIndex;
		switch (i) {
		case 0: //целые
		{
			groupBox1->Height = 129;
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			comboBox1->Visible = true;
			comboBox2->Visible = true;
			comboBox3->Visible = true;
			textBox1->Visible = true;
			SelectedTable = "StoreSheet";
			SelectedDB = TB(DataBase);
			String^ UnTh = "SELECT DISTINCT MtID FROM " + SelectedTable;
			String^ UnMt = "SELECT DISTINCT SShThick FROM " + SelectedTable;
			String^ SQL = "SELECT * FROM " + SelectedTable; //Запрос
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SShID"], Reader["MtID"], Reader["SShThick"], Reader["SShWidth"], Reader["SShLength"], Reader["SShCount"], Reader["SShDateModify"]); }
			Command = gcnew Data::OleDb::OleDbCommand(UnTh, Connection);
			Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { comboBox1->Items->Add(Reader["MtID"]); }
			Command = gcnew Data::OleDb::OleDbCommand(UnMt, Connection);
			Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { comboBox2->Items->Add(Reader["SShThick"]); }
			Reader->Close();
			Connection->Close();
			
		}
		break;
		case 1:  //до
		{
			groupBox1->Height = 129;
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			comboBox1->Visible = true;
			comboBox2->Visible = true;
			comboBox3->Visible = true;
			textBox1->Visible = true;
			SelectedTable = "StoreScrap";
			SelectedDB = TB(DataBase);
			String^ UnTh = "SELECT DISTINCT MtID FROM " + SelectedTable;
			String^ UnMt = "SELECT DISTINCT SScThick FROM " + SelectedTable;
			String^ SQL = "SELECT * FROM " + SelectedTable + " WHERE SScCount > " + 0; //Запрос
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SScID"], Reader["MtID"], Reader["SScThick"], Reader["SScSizeY"], Reader["SScSizeX"], Reader["SScCount"], Reader["SScDateModify"]); }
			Command = gcnew Data::OleDb::OleDbCommand(UnTh, Connection);
			Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { comboBox1->Items->Add(Reader["MtID"]); }
			Command = gcnew Data::OleDb::OleDbCommand(UnMt, Connection);
			Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { comboBox2->Items->Add(Reader["SScThick"]); }
			Reader->Close();
			Connection->Close();
		}
		break;
		case 2: //труба
		{
			groupBox1->Height = 129;
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = false;
			label4->Visible = true;
			comboBox1->Visible = true;
			comboBox2->Visible = false;
			comboBox3->Visible = true;
			textBox1->Visible = true;
			SelectedTable = "Tube";
			SelectedDB = DB(DataBase);
			String^ UnMt = "SELECT DISTINCT TMt FROM " + SelectedTable;
			String^ SQL = "SELECT * FROM " + SelectedTable; //Запрос
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeName"], Reader["TMt"], Reader["NumberTube"], Reader["LastChangesDate"], Reader["UserTube"]); }
			Command = gcnew Data::OleDb::OleDbCommand(UnMt, Connection);
			Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { comboBox1->Items->Add(Reader["TMt"]); }
			Reader->Close();
			Connection->Close();
		}
		break;
		case 3: //Трубы отход
		{
			groupBox1->Height = 129;
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = false;
			label4->Visible = true;
			comboBox1->Visible = true;
			comboBox2->Visible = false;
			comboBox3->Visible = true;
			textBox1->Visible = true;
			SelectedTable = "TubeRest";
			SelectedDB = DB(DataBase);
			String^ UnMt = "SELECT DISTINCT TRMt FROM " + SelectedTable;
			String^ SQL = "SELECT * FROM " + SelectedTable; //Запрос
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeRName"], Reader["TRMt"], Reader["NumberTubeR"], Reader["LenghtTubeR"], Reader["LastChangesDateR"], Reader["UserTubeRest"]); }
			Command = gcnew Data::OleDb::OleDbCommand(UnMt, Connection);
			Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { comboBox1->Items->Add(Reader["TRMt"]); }
			Reader->Close();
			Connection->Close();
		}
		break;
		case 4: //метизы
		{
			groupBox1->Height = 72;
			label1->Visible = true;
			label2->Visible = false;
			label3->Visible = false;
			label4->Visible = true;
			comboBox1->Visible = false;
			comboBox2->Visible = false;
			comboBox3->Visible = true;
			textBox1->Visible = true;
			SelectedTable = "Metiz";
			SelectedDB = DB(DataBase);
			String^ SQL = "SELECT * FROM " + SelectedTable; //Запрос
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["MetName"], Reader["MetNumber"], Reader["LastChangesDateM"], Reader["UserMetiz"]); }
			Reader->Close();
			Connection->Close();
		}
		break;


		}
	
		int j = 0;
		bindingNavigator1->Update();
		dataGridView1->Update();
		bindingSource1->DataSource = dataSet1;
		bindingSource1->DataMember = SelectedTable;
		bindingNavigator1->BindingSource = bindingSource1;
		dataGridView1->DataSource = bindingSource1;
		for (j; j < dataGridView1->ColumnCount; j++)
		{
			dataGridView1->Columns[j]->DisplayIndex = j;
		}
		comboBox3->Items->Clear();
		for (int coll = 0; coll < dataGridView1->ColumnCount; coll++)
		{
			
			comboBox3->Items->Add(dataSet1->Tables[SelectedTable]->Columns[coll]->ColumnName);
			if (coll == dataGridView1->ColumnCount - 1)
			{
				comboBox3->Text = dataSet1->Tables[SelectedTable]->Columns[0]->ColumnName;
			}
		}
		if (textBox1->Text != "")
		{
			comboBox3->SelectedIndex = 0;
			textBox1_TextChanged(sender, e);
		}
		repaint(dataGridView1);
		return System::Void();

	}






	System::Void LasercomStorage::MyForm::dataGridView1_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e)
	{
		int i = toolStripComboBox1->SelectedIndex;
		String^ DataBase;
		String^ SelectedDB;
		int s = toolStripComboBox1->SelectedIndex;
		if (dataGridView1->CurrentCell->ColumnIndex == 1)
		{
			if (i == 0 || i == 1)
			{
				DataGridViewComboBoxCell^ ComboTextCell = gcnew DataGridViewComboBoxCell();
				ComboTextCell->Items->Clear();
				ComboTextCell->Items->Add("Не выбран");
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT DISTINCT MtID FROM [StoreScrap]";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { ComboTextCell->Items->Add(Reader["MtID"]); }
				Reader->Close();
				Connection->Close();
				int i = Convert::ToInt32(dataGridView1->CurrentCell->ColumnIndex);
				int j = Convert::ToInt32(dataGridView1->CurrentCell->RowIndex);
				dataGridView1[i, j] = ComboTextCell;
			}
			if (i == 2 || i == 3)
			{
				DataGridViewComboBoxCell^ ComboTextCell = gcnew DataGridViewComboBoxCell();
				ComboTextCell->Items->Clear();
				ComboTextCell->Items->Add("Не выбран");
				SelectedDB = DB(DataBase);
				String^ SQL = "SELECT DISTINCT MtTubeName FROM [MtTube]";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { ComboTextCell->Items->Add(Reader["MtTubeName"]); }
				Reader->Close();
				Connection->Close();
				int i = Convert::ToInt32(dataGridView1->CurrentCell->ColumnIndex);
				int j = Convert::ToInt32(dataGridView1->CurrentCell->RowIndex);
				dataGridView1[i, j] = ComboTextCell;
			}


		}
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::dataGridView1_DataError(System::Object^ sender, System::Windows::Forms::DataGridViewDataErrorEventArgs^ e)
	{

		return System::Void();
	}

	System::Void LasercomStorage::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		int usertype = 0;
		System::IO::StreamReader^ sr;
		bool doneReading;
		if (doneReading) return;
		if (sr == nullptr) sr = gcnew System::IO::StreamReader("Buff.txt");

		for (int i = 0; i < 3; i++)
		{

			String^ line = sr->ReadLine();
			if (line == nullptr)
			{
				doneReading = true;
				sr->Close();
				break;
			}
			if (i == 1)
			{
				usertype = Convert::ToInt32(line);
			}
			if (usertype != 40)
			{
				dataGridView1->ReadOnly = true;
				toolStripButton1->Visible = false;
			}
			else
			{
				dataGridView1->ReadOnly = false;
				toolStripButton1->Visible = true;
			}
			if (i == 2) // Менеджер
			{
				LasercomStorage::MyForm::Text = "Лазерком склад  " + line;
				UserNameT->Text = line;
			}

		}
		sr->Close();
		//LasercomStorage::MyForm::Location::
		//MyForm::Width
		groupBox1->Location = Point(MyForm::Width-357, 50);
		dataGridView1->Width = MyForm::Width - 377;
		dataGridView1->Height = MyForm::Height - 80;
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) //удаление крестиком
	{
		int Pos = dataGridView1->CurrentCell->RowIndex;
		String^ id = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
		String^ DataBase;
		String^ TehBase;
		String^ SelectedDB;
		String^ SelectedTable;
		String^ query;
		String^ query4;
		String^ query5;
		String^ LastChangesDate = DateTime::Now.ToString();
		int i = toolStripComboBox1->SelectedIndex;
		switch (i) {
		case 0: //целые
		{
			SelectedTable = "StoreSheet";
			SelectedDB = TB(TehBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE SShID = '" + id + "'";
		}
		break;
		case 1:  //до
		{
			SelectedTable = "StoreScrap";
			SelectedDB = TB(TehBase);
			query = "DELETE FROM [" + SelectedTable + "]WHERE SScID = '" + id + "'";
		}
		break;
		case 2: //труба
		{
			SelectedTable = "Tube";
			SelectedDB = DB(DataBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE TubeName = '" + id + "'";
		}
		break;
		case 3: //труба отход
		{
			SelectedTable = "TubeRest";
			SelectedDB = DB(DataBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE TubeRName = '" + id + "'";
		}
		break;
		case 4: //метизы
		{
			SelectedTable = "Metiz";
			SelectedDB = DB(DataBase);
			query = "DELETE FROM [" + SelectedTable + "] WHERE MetName = '" + id + "'";
			query5 = "SELECT MAX (JMetKey) FROM [JIEM]";
		}
		break;


		}

		OleDbConnection^ dbConnection = gcnew OleDbConnection(SelectedDB);
		dbConnection->Open();
		OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
		dbComand->ExecuteNonQuery();
		dataGridView1->Update();
		if (i == 4)
		{
			String^ Osnov;
			String^ MetName = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
			String^ MetNumbers = Convert::ToString(0 - Convert::ToInt32(dataGridView1->Rows[Pos]->Cells[1]->Value));
			dbComand = gcnew OleDbCommand(query5, dbConnection);
			int key = Convert::ToInt32(dbComand->ExecuteScalar());
			key++;
			LasercomStorage::testDialog^ f1 = gcnew testDialog();
			if (f1->ShowDialog(this) == ::DialogResult::OK)
			{
				Osnov = f1->textBox1->Text;
			}
			else
			{
				dataGridView1->Rows[Pos]->Cells[1]->Value = showstat(0, 3);
				f1->Close();
				return System::Void();
			}
			showstat(0, 0);
			query4 = "INSERT INTO [JIEM] (JMetKey,JMetName,JMetNumber,JMetOperation,JMetComment,JmetLastChangesDate)  VALUES (" + key + ",'" + MetName + "'," + MetNumbers + " , 'Расход' ,  '" + Osnov + "', '" + LastChangesDate + "')";
			OleDbCommand^ dbComand = gcnew OleDbCommand(query4, dbConnection);
			dbComand->ExecuteNonQuery();
		}
		dataGridView1->Rows->RemoveAt(Pos);
		dbConnection->Close();
		repaint(dataGridView1);
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::toolStripButton2_Click_1(System::Object^ sender, System::EventArgs^ e) //смена пользователя
	{
		MyForm::Hide();
		LasercomStorage::Users^ f1 = gcnew Users();
		f1->Show();

		return System::Void();
	}

	System::Void LasercomStorage::MyForm::MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	{
		Application::Exit();
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e)  //ЖУрнал метизов
	{
		if (toolStripComboBox1->Enabled == false)
		{
			textBox1->Text = "";
			toolStripComboBox1->Items->Remove("Журнал метизов");
			toolStripComboBox1->Enabled = true;
			toolStripComboBox1->SelectedItem = "Метизы";
			LasercomStorage::MyForm::toolStripComboBox1_SelectedIndexChanged(sender, e);
			return System::Void();

		}
		toolStripComboBox1->Enabled = false;
		toolStripComboBox1->Items->Add("Журнал метизов");
		toolStripComboBox1->SelectedIndex = 5;
		dataSet1->Clear();
		bindingNavigator1->Update();
		int i = 0;
		String^ DataBase;
		String^ SelectedTable;
		String^ SelectedDB;
		SelectedTable = "JIEM";
		SelectedDB = DB(DataBase);
		String^ SQL = "SELECT * FROM " + SelectedTable; //Запрос
		oleDbDataAdapter1->SelectCommand->CommandText = SQL;
		oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
		auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
		Connection->Open();
		auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
		auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
		while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["JMetName"], Reader["JMetNumber"], Reader["JMetOperation"], Reader["JMetComment"], Reader["JmetLastChangesDate"], Reader["UserJIEM"]); }
		Reader->Close();
		Connection->Close();
		int j = 0;
		bindingNavigator1->Update();
		dataGridView1->Update();
		bindingSource1->DataSource = dataSet1;
		bindingSource1->DataMember = SelectedTable;
		bindingNavigator1->BindingSource = bindingSource1;
		dataGridView1->DataSource = bindingSource1;
		for (j; j < dataGridView1->ColumnCount; j++)
		{
			dataGridView1->Columns[j]->DisplayIndex = j;
		}
		repaint(dataGridView1);
		comboBox3->Items->Clear();
		for (int coll = 0; coll < dataGridView1->ColumnCount; coll++)
		{
			comboBox3->Items->Add(dataSet1->Tables["JIEM"]->Columns[coll]->ColumnName);
		}
		if (textBox1->Text != "")
		{
			comboBox3->SelectedIndex = 0;
			textBox1_TextChanged(sender, e);
		}
		comboBox3->Text = dataSet1->Tables["JIEM"]->Columns[0]->ColumnName;


		return System::Void();
	}

	System::Void LasercomStorage::MyForm::dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e) //начало изменения ячейки
	{

		String^ LastChangesDate = DateTime::Now.ToString();
		String^ osnovanie;
		String^ razn;
		String^ posle;
		Valperv = dataGridView1->CurrentCell->Value->ToString();
		int Pos = dataGridView1->CurrentCell->RowIndex;
		if (toolStripComboBox1->SelectedIndex == 4 && dataGridView1->CurrentCell->ColumnIndex == 1)
		{
			if (String::IsNullOrEmpty(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString()))
			{
				//Val = nullptr;
				showstat(1, 0);
			}
			else
			{
				LasercomStorage::testDialog^ f1 = gcnew testDialog();
				f1->textBox2->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
				if (f1->ShowDialog(this) == ::DialogResult::OK)
				{

					String^ query;
					String^ MetName = dataGridView1->Rows[Pos]->Cells[0]->Value->ToString();
					String^ query5 = "SELECT MAX (JMetKey) FROM [JIEM]";
					String^ UserJIEM = UserNameT->Text;
					OleDbConnection^ dbConnection = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source =  T:\\DataBase1.mdb");
					dbConnection->Open();
					OleDbCommand^ dbComand = gcnew OleDbCommand(query5, dbConnection);
					int key = Convert::ToInt32(dbComand->ExecuteScalar());
					key++;
					osnovanie = f1->textBox1->Text;
					razn = f1->textBox3->Text;
					posle = f1->textBox2->Text;
					if (Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString()) > Convert::ToInt32(posle))
					{
						query = "INSERT INTO [JIEM] (JMetKey,JMetName,JMetNumber,JMetOperation,JMetComment,JmetLastChangesDate,UserJIEM)  VALUES (" + key + ",'" + MetName + "'," + razn + " , 'Расход' ,  '" + osnovanie + "', '" + LastChangesDate + "', '" + UserJIEM + "')";
					}
					if (Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString()) < Convert::ToInt32(posle))
					{
						query = "INSERT INTO [JIEM] (JMetKey,JMetName,JMetNumber,JMetOperation,JMetComment,JmetLastChangesDate,UserJIEM)  VALUES (" + key + ",'" + MetName + "'," + razn + " , 'Приход' ,  '" + osnovanie + "', '" + LastChangesDate + "', '" + UserJIEM + "')";
					}
					if (Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString()) == Convert::ToInt32(posle))
					{
						return System::Void();
					}

					dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value = posle;

					OleDbCommand^ dbComand1 = gcnew OleDbCommand(query, dbConnection);
					dbComand1->ExecuteNonQuery();
					showstat(0, 2);
					dataGridView1->ClearSelection();
				}
				else
				{
					return System::Void();
				}


			}
		}
		else
		{
			return System::Void();
		}
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::dataGridView1_CellMouseUp(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Right)
		{

			Int32 number = 0;
			dataGridView1->ClearSelection();
			int i = e->ColumnIndex;
			int j = e->RowIndex;
			dataGridView1->Rows[e->RowIndex]->Cells[i]->Selected = true;
			DataGridViewCell^ cell = this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex];
			dataGridView1->CurrentCell = cell;
			if (TryToParse(dataGridView1->Rows[e->RowIndex]->Cells[i]->Value->ToString()) == 1)
			{
				большеToolStripMenuItem->Visible = true;
				большеИлиРавноToolStripMenuItem->Visible = true;
				меньшеToolStripMenuItem->Visible = true;
				меньшеИлиРавноToolStripMenuItem->Visible = true;
				диапазонToolStripMenuItem->Visible = true;
			}
			if (TryToParse(dataGridView1->Rows[e->RowIndex]->Cells[i]->Value->ToString()) == 0)
			{
		
			большеToolStripMenuItem->Visible = false;
			большеИлиРавноToolStripMenuItem->Visible = false;
			меньшеToolStripMenuItem->Visible = false;
			меньшеИлиРавноToolStripMenuItem->Visible = false;
			диапазонToolStripMenuItem->Visible = false;
	     	}
			contextMenuStrip1->Show(System::Windows::Forms::Control::Cursor->Position);
	
		}

		return System::Void();
	}

	System::Void LasercomStorage::MyForm::найтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // по по правой кнопки мышки
	{
		int rc = dataGridView1->Rows->Count - 1;
		String^ value = dataGridView1->CurrentCell->Value->ToString();
		for (int i = 0; i < rc; i++)
		{
			if (dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value->ToString() != value)
			{
				dataGridView1->Rows->RemoveAt(i);
				rc --;
				i = -1;
			}
		}	
		repaint(dataGridView1);
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::убратьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int rc = dataGridView1->Rows->Count - 1;
		String^ value = dataGridView1->CurrentCell->Value->ToString();
		for (int i = 0; i < rc; i++)
		{
			if (dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value->ToString() == value)
			{
				
				dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
			}
		}
		DataGridViewCell^ cell = nullptr;
		dataGridView1->CurrentCell = cell;
		for (int j = 0; j < rc; j++)
		{
			if (dataGridView1->Rows[j]->Cells[1]->Style->BackColor == Color::Red)
			{
				dataGridView1->Rows->RemoveAt(j);
				rc--;
				j = -1;
			}
		}
		repaint(dataGridView1);
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::большеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		int rc = dataGridView1->Rows->Count - 1;
		double value = Convert::ToDouble(dataGridView1->CurrentCell->Value->ToString());
		for (int i = 0; i < rc; i++)
		{
			if (Convert::ToDouble(dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value->ToString()) <= value)
			{

				dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
			}
		}
		DataGridViewCell^ cell = nullptr;
		dataGridView1->CurrentCell = cell;
		for (int j = 0; j < rc; j++)
		{
			if (dataGridView1->Rows[j]->Cells[1]->Style->BackColor == Color::Red)
			{
				dataGridView1->Rows->RemoveAt(j);
				rc--;
				j = -1;
			}
		}
		repaint(dataGridView1);
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::большеИлиРавноToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int rc = dataGridView1->Rows->Count - 1;
		double value = Convert::ToDouble(dataGridView1->CurrentCell->Value); //возможэно single
		for (int i = 0; i < rc; i++)
		{
			if (Convert::ToDouble(dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value) < value)
			{
				dataGridView1->Rows->RemoveAt(i);
				rc--;
				i = -1;
			}
		}
		repaint(dataGridView1);
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::меньшеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{	
			int rc = dataGridView1->Rows->Count - 1;
			double value = Convert::ToDouble(dataGridView1->CurrentCell->Value);
			for (int i = 0; i < rc; i++)
			{
				if (Convert::ToDouble(dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value) >= value)
				{

					dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
				}
			}
			DataGridViewCell^ cell = nullptr;
			dataGridView1->CurrentCell = cell;
			for (int j = 0; j < rc; j++)
			{
				if (dataGridView1->Rows[j]->Cells[1]->Style->BackColor == Color::Red)
				{
					dataGridView1->Rows->RemoveAt(j);
					rc--;
					j = -1;
				}
			}
			repaint(dataGridView1);
			return System::Void();
			
	}

	System::Void LasercomStorage::MyForm::меньшеИлиРавноToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int rc = dataGridView1->Rows->Count - 1;
		double value = Convert::ToDouble(dataGridView1->CurrentCell->Value);
		for (int i = 0; i < rc; i++)
		{
			if (Convert::ToDouble(dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value) > value)
			{
				dataGridView1->Rows->RemoveAt(i);
				rc--;
				i = -1;
			}
		}
		repaint(dataGridView1);
		return System::Void();
	}
	System::Void LasercomStorage::MyForm::найтиToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) //Диапазон
	{
		int rc = dataGridView1->Rows->Count - 1;
		double value1 = Convert::ToDouble(toolStripTextBox2->Text);
		double value2 = Convert::ToDouble(toolStripTextBox3->Text);
		for (int i = 0; i < rc; i++)
		{
			if ((Convert::ToDouble(dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value) < value1) ||
				(Convert::ToDouble(dataGridView1->Rows[i]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value) > value2))
			{

				dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
			}
		}
		DataGridViewCell^ cell = nullptr;
		dataGridView1->CurrentCell = cell;
		for (int j = 0; j < rc; j++)
		{
			if (dataGridView1->Rows[j]->Cells[1]->Style->BackColor == Color::Red)
			{
				dataGridView1->Rows->RemoveAt(j);
				rc--;
				j = -1;
			}
		}
		toolStripTextBox2->Text = "От";
		toolStripTextBox3->Text = "До";
		repaint(dataGridView1);
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::toolStripTextBox3_Enter(System::Object^ sender, System::EventArgs^ e)
	{
		toolStripTextBox3->Clear();
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::toolStripTextBox2_Enter(System::Object^ sender, System::EventArgs^ e)
	{
		toolStripTextBox2->Clear();
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::toolStripTextBox2_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
	{
		MessageBox::Show("Лазерком", "Проаеряю");
		if (isdigit(Convert::ToInt32(toolStripTextBox2->Text)) == 0)
		{
			MessageBox::Show("Лазерком", "Неправильное значение");
		}
		return System::Void();
	}



	System::Void LasercomStorage::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) // содержит
	{
		comboBox2->Items->Clear();
		comboBox1->Items->Clear();
		comboBox2->Text = "";
		comboBox1->Text = "";
		if (comboBox3->SelectedIndex == -1)
		{
			comboBox3->SelectedIndex = 1;
		}
		dataSet1->Clear();
		String^ DataBase;
		String^ SelectedTable;
		String^ SelectedDB;
		int i = toolStripComboBox1->SelectedIndex;
		String^ Search = textBox1->Text;
		String^ Coll;
		switch (i) {
		case 0: //целые
		{
			SelectedTable = "StoreSheet";
			Coll = dataSet1->Tables[SelectedTable]->Columns[comboBox3->SelectedIndex]->Caption->ToString();
			SelectedDB = TB(DataBase);
			String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE " + Coll + " LIKE '%" + Search + "%'";
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SShID"], Reader["MtID"], Reader["SShThick"], Reader["SShWidth"], Reader["SShLength"], Reader["SShCount"], Reader["SShDateModify"]); }
			Reader->Close();
		}
		break;
		case 1:  //до
		{
			SelectedTable = "StoreScrap";
			Coll = dataSet1->Tables[SelectedTable]->Columns[comboBox3->SelectedIndex]->Caption->ToString();
			SelectedDB = TB(DataBase);
			String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE " + Coll + " LIKE '%" + Search + "%'";
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SScID"], Reader["MtID"], Reader["SScThick"], Reader["SScSizeX"], Reader["SScSizeY"], Reader["SScCount"], Reader["SScDateModify"]); }
			Reader->Close();
		}
		break;
		case 2: //труба
		{

			SelectedTable = "Tube";
			Coll = dataSet1->Tables[SelectedTable]->Columns[comboBox3->SelectedIndex]->Caption->ToString();
			SelectedDB = DB(DataBase);
			String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE " + Coll + " LIKE '%" + Search + "%'";
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeName"], Reader["TMt"], Reader["NumberTube"], Reader["LastChangesDate"]); }
			Reader->Close();
		}
		break;
		case 3: //труба отходы
		{

			SelectedTable = "TubeRest";
			Coll = dataSet1->Tables[SelectedTable]->Columns[comboBox3->SelectedIndex]->Caption->ToString();
			SelectedDB = DB(DataBase);
			String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE " + Coll + " LIKE '%" + Search + "%'";
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeRName"], Reader["TRMt"], Reader["NumberTubeR"], Reader["LenghtTubeR"], Reader["LastChangesDateR"]); }
			Reader->Close();
		}
		break;
		case 4: //метизы
		{
			SelectedTable = "Metiz";
			Coll = dataSet1->Tables[SelectedTable]->Columns[comboBox3->SelectedIndex]->Caption->ToString();
			SelectedDB = DB(DataBase);
			String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE " + Coll + " LIKE '%" + Search + "%'";
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["MetName"], Reader["MetNumber"], Reader["LastChangesDateM"], Reader["UserMetiz"]); }
			Reader->Close();
		}
		break;
		case 5: //метизы журнал
		{
			SelectedTable = "JIEM";
			Coll = dataSet1->Tables[SelectedTable]->Columns[comboBox3->SelectedIndex]->Caption->ToString();
			SelectedDB = DB(DataBase);
			String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE " + Coll + " LIKE '%" + Search + "%'";
			oleDbDataAdapter1->SelectCommand->CommandText = SQL;
			oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
			Connection->Open();
			auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
			auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
			while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["JMetName"], Reader["JMetNumber"], Reader["JMetOperation"], Reader["JMetComment"], Reader["JmetLastChangesDate"], Reader["UserJIEM"]); }
			Reader->Close();
		}
		break;


		}
		bindingSource1->DataSource = dataSet1;
		bindingSource1->DataMember = SelectedTable;
		bindingNavigator1->BindingSource = bindingSource1;
		bindingNavigator1->Update();
		dataGridView1->DataSource = bindingSource1;
		repaint(dataGridView1);
		return System::Void();
	}


	System::Void LasercomStorage::MyForm::dataGridView1_Sorted(System::Object^ sender, System::EventArgs^ e)
	{
		repaint(dataGridView1);
		return System::Void();
	}



	System::Void LasercomStorage::MyForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{

		if (comboBox2->Text == "")
		{
			dataSet1->Clear();
			String^ DataBase;
			String^ SelectedTable;
			String^ SelectedDB;
			int i = toolStripComboBox1->SelectedIndex;
			String^ Search = comboBox1->Text;
			String^ Coll;
			switch (i) {
			case 0: //целые
			{
				SelectedTable = "StoreSheet";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE MtID = '" + Search + "'";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SShID"], Reader["MtID"], Reader["SShThick"], Reader["SShWidth"], Reader["SShLength"], Reader["SShCount"], Reader["SShDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 1:  //до
			{
				SelectedTable = "StoreScrap";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE MtID = '" + Search + "'";
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SScID"], Reader["MtID"], Reader["SScThick"], Reader["SScSizeX"], Reader["SScSizeY"], Reader["SScCount"], Reader["SScDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 2: //труба
			{

				SelectedTable = "Tube";
				SelectedDB = DB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE TMt = '" + Search + "'";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeName"], Reader["TMt"], Reader["NumberTube"], Reader["LastChangesDate"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 3: //труба отходы
			{

				SelectedTable = "TubeRest";
				SelectedDB = DB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE TRMt = '" + Search + "'";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeRName"], Reader["TRMt"], Reader["NumberTubeR"], Reader["LenghtTubeR"], Reader["LastChangesDateR"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 4: //метизы
			{
				return System::Void();
			}
			break;


			}
			bindingSource1->DataSource = dataSet1;
			bindingSource1->DataMember = SelectedTable;
			bindingNavigator1->BindingSource = bindingSource1;
			bindingNavigator1->Update();
			dataGridView1->DataSource = bindingSource1;
			repaint(dataGridView1);
		}
		if (comboBox2->Text != "")
		{
			dataSet1->Clear();
			String^ DataBase;
			String^ SelectedTable;
			String^ SelectedDB;
			int i = toolStripComboBox1->SelectedIndex;
			String^ Search = comboBox1->Text;
			String^ Search2 = comboBox2->Text;
			String^ Coll;
			switch (i) {
			case 0: //целые
			{
				SelectedTable = "StoreSheet";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE MtID = '" + Search + "' AND SShThick = "  + Search2->Replace(",", ".") + "";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SShID"], Reader["MtID"], Reader["SShThick"], Reader["SShWidth"], Reader["SShLength"], Reader["SShCount"], Reader["SShDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 1:  //до
			{
				SelectedTable = "StoreScrap";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE MtID = '" + Search + "' AND SScThick = " + Search2->Replace(", ", ".") + "";
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SScID"], Reader["MtID"], Reader["SScThick"], Reader["SScSizeX"], Reader["SScSizeY"], Reader["SScCount"], Reader["SScDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 2: //труба
			{

				SelectedTable = "Tube";
				SelectedDB = DB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE TMt = '" + Search + "'";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeName"], Reader["TMt"], Reader["NumberTube"], Reader["LastChangesDate"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 3: //труба отходы
			{

				SelectedTable = "TubeRest";
				SelectedDB = DB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE TRMt = '" + Search + "'";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["TubeRName"], Reader["TRMt"], Reader["NumberTubeR"], Reader["LenghtTubeR"], Reader["LastChangesDateR"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 4: //метизы
			{
				return System::Void();
			}
			break;


			}
			bindingSource1->DataSource = dataSet1;
			bindingSource1->DataMember = SelectedTable;
			bindingNavigator1->BindingSource = bindingSource1;
			bindingNavigator1->Update();
			dataGridView1->DataSource = bindingSource1;
			repaint(dataGridView1);
			return System::Void();
		}
	}

	System::Void LasercomStorage::MyForm::comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox1->Text == "")
		{
			dataSet1->Clear();
			String^ DataBase;
			String^ SelectedTable;
			String^ SelectedDB;
			int i = toolStripComboBox1->SelectedIndex;
			String^ Search = comboBox2->Text;
			String^ Coll;
			switch (i) {
			case 0: //целые
			{
				SelectedTable = "StoreSheet";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE SShThick = " + Search->Replace(",", ".") + "";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SShID"], Reader["MtID"], Reader["SShThick"], Reader["SShWidth"], Reader["SShLength"], Reader["SShCount"], Reader["SShDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 1:  //до
			{
				SelectedTable = "StoreScrap";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE SScThick = " + Search->Replace(",", ".") + "";
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SScID"], Reader["MtID"], Reader["SScThick"], Reader["SScSizeX"], Reader["SScSizeY"], Reader["SScCount"], Reader["SScDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 2: //труба
			{

				return System::Void();
			}
			break;
			case 3: //труба отходы
			{

				return System::Void();
			}
			break;
			case 4: //метизы
			{
				return System::Void();
			}
			break;


			}
			bindingSource1->DataSource = dataSet1;
			bindingSource1->DataMember = SelectedTable;
			bindingNavigator1->BindingSource = bindingSource1;
			bindingNavigator1->Update();
			dataGridView1->DataSource = bindingSource1;
			repaint(dataGridView1);
		}
		if (comboBox1->Text != "")
		{
			dataSet1->Clear();
			String^ DataBase;
			String^ SelectedTable;
			String^ SelectedDB;
			int i = toolStripComboBox1->SelectedIndex;
			String^ Search = comboBox1->Text;
			String^ Search2 = comboBox2->Text;
			String^ Coll;
			switch (i) {
			case 0: //целые
			{
				SelectedTable = "StoreSheet";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE MtID = '" + Search + "' AND SShThick =  " + Search2->Replace(",", ".") + "";
				oleDbDataAdapter1->SelectCommand->CommandText = SQL;
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SShID"], Reader["MtID"], Reader["SShThick"], Reader["SShWidth"], Reader["SShLength"], Reader["SShCount"], Reader["SShDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 1:  //до
			{
				SelectedTable = "StoreScrap";
				SelectedDB = TB(DataBase);
				String^ SQL = "SELECT * FROM [" + SelectedTable + "] WHERE MtID = '" + Search + "' AND SScThick = " + Search2->Replace(",", ".") + "";
				oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				auto Connection = gcnew Data::OleDb::OleDbConnection(SelectedDB);
				Connection->Open();
				auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
				auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);
				while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["SScID"], Reader["MtID"], Reader["SScThick"], Reader["SScSizeX"], Reader["SScSizeY"], Reader["SScCount"], Reader["SScDateModify"]); }
				Reader->Close();
				Connection->Close();
			}
			break;
			case 2: //труба
			{

				return System::Void();
			}
			break;
			case 3: //труба отходы
			{

				return System::Void();
			}
			break;
			case 4: //метизы
			{
				return System::Void();
			}
			break;


			}
			bindingSource1->DataSource = dataSet1;
			bindingSource1->DataMember = SelectedTable;
			bindingNavigator1->BindingSource = bindingSource1;
			bindingNavigator1->Update();
			dataGridView1->DataSource = bindingSource1;
			repaint(dataGridView1);
			return System::Void();
		}
	}

	System::Void LasercomStorage::MyForm::dataGridView1_RowEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		toolStripButton1->Enabled = true;
		return System::Void();
	}

	System::Void LasercomStorage::MyForm::dataGridView1_RowLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		toolStripButton1->Enabled = false;
		return System::Void();
	}
















  