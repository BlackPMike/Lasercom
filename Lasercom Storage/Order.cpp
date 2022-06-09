#include "Order.h"
#include "MyForm.h"
#include "Users.h"
#include <iostream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace System::Threading::Tasks;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;

String^ oDB(String^ a)
{
	a = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=T:\\DataBase1.mdb";
	return(a);
}
String^ oTB(String^ b)
{
	b = "Provider = Microsoft.Jet.OLEDB.4.0; Data Source = T:\\боевая\\TehtranN.mdb";
	return(b);
}


System::Void LasercomStorage::Order::Order_Load(System::Object^ sender, System::EventArgs^ e)
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
		if (i == 1) // UserID
		{

			//toolStripTextBox1->Text = line;
			usertype = Convert::ToInt32(line);
	
		}
		if (i == 2) // Менеджер
		{
			toolStripTextBox1->Text = line;
			//usertype = Convert::ToInt32(line);
		}
		//toolStripTextBox1->Text = line;
		
	}
	sr->Close();
	String^ DataBase;
	//String^ TehBase;
	String^ SelectedTable;
	SelectedTable = "Order";
	String^ SelectedDB;
	String^ SQL = "SELECT * FROM ["+ SelectedTable +"] WHERE UserID =" + usertype  ; //Запрос
	oleDbDataAdapter1->SelectCommand->CommandText = SQL;
	oleDbDataAdapter1->SelectCommand->Connection = gcnew Data::OleDb::OleDbConnection(oDB(SelectedDB));
	auto Connection = gcnew Data::OleDb::OleDbConnection(oDB(SelectedDB));
	Connection->Open();
	auto Command = gcnew Data::OleDb::OleDbCommand(SQL, Connection);
	auto Reader = Command->ExecuteReader(System::Data::CommandBehavior::CloseConnection);

	while (Reader->Read()) { dataSet1->Tables[SelectedTable]->Rows->Add(Reader["IDOrder"], Reader["OrderCustomer"], Reader["UserID"], Reader["OrderCreate"], Reader["OrderDeadline"]); }
	Reader->Close();
	Connection->Close();

	bindingSource1->DataSource = dataSet1;
	bindingSource1->DataMember = SelectedTable;
	bindingNavigator1->BindingSource = bindingSource1;
	bindingNavigator1->Update();
	dataGridView1->DataSource = bindingSource1;
	return System::Void();

}

System::Void LasercomStorage::Order::dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) // Обновление
{
	String^ SelectedTable;
	String^ DataBase;
	String^ SelectedDB;
	String^ query; // Запрос на обновление 
	String^ query1; // Запрос на проверку уникальности 
	String^ query2; // Запрос на внесение 
	String^ LastChangesDate = DateTime::Now.ToString();

	return System::Void();
}
