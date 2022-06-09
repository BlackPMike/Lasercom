#include "Users.h"
#include "MyForm.h"
#include <string>
#include "Order.h"
#include "Program.h"
#include <iostream>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace System::Threading::Tasks;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;

int USERTYPE = 0;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	LasercomStorage::Users form;
	Application::Run(% form);
}

System::Void LasercomStorage::Users::Users_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source = T:\\DataBase1.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();
	String^ query = "SELECT * FROM [Users]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();


	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка подключения к БД!", "Лазерком");
	}
	else {

		while (dbReader->Read()) {
			comboBox1->Items->Add(dbReader["UserName"]);   //Добавление пользователей
			dataGridView1->Rows->Add(dbReader["Userid"], dbReader["UserName"], dbReader["Password"], dbReader["UserType"]);
		}
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

				return System::Void();
				break;
			}
			if (i == 2) 
			{
				comboBox1->Text = line;
			}

		}
		sr->Close();

		

		return System::Void();
	}
	dbReader->Close();
	dbConnection->Close();
}


System::Void LasercomStorage::Users::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	int UserType = -1;
	int  j =-1;
	if (textBox1->Text == dataGridView1[2, comboBox1->SelectedIndex]->Value->ToString()) {
		String^ fileName = "Buff.txt";  
		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->WriteLine(dataGridView1[0, comboBox1->SelectedIndex]->Value); //Запись User ID и User Type
		sw->WriteLine(dataGridView1[3, comboBox1->SelectedIndex]->Value);
		sw->Write(dataGridView1[1, comboBox1->SelectedIndex]->Value);
		sw->Close();
		UserType = Convert::ToInt32(dataGridView1[3, comboBox1->SelectedIndex]->Value->ToString());
		j = UserType / 10;
		switch (j)
		{
		case 4:   //Склад
		{
			Users::Hide();
			LasercomStorage::MyForm^ f1 = gcnew MyForm();
			f1->Show();
			break;
		}
		case 0:   //Склад
		{
			Users::Hide();
			LasercomStorage::MyForm^ f1 = gcnew MyForm();
			f1->Show();
			break;
		}
		case  1:   //Менеджеры
		{
			Users::Hide();
			LasercomStorage::Order^ f2 = gcnew Order();
			f2->Show();
			break;
		}

		}

	}
	else MessageBox::Show("Пароль не правильный!", "Лазерком");
	return System::Void();
}

System::Void LasercomStorage::Users::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->UseSystemPasswordChar = true;
	return System::Void();
}

System::Void LasercomStorage::Users::Users_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void LasercomStorage::Users::textBox1_Enter(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = nullptr;
	return System::Void();
}
