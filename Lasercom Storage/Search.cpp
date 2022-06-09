#include "Search.h"
#include "MyForm.h"
#include "Program.h"

System::Void LasercomStorage::Search::Search_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void LasercomStorage::Search::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	LasercomStorage::MyForm^ f9 = gcnew MyForm();
	//MyForm::Sod->Text = textBox1->Text;
	//f9->Sod->Text = textBox1->Text;
	//System::Void LasercomStorage::MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
	//f9->button1->Click(sender, e);
	//f9->button1_Click(sender, e);
	return System::Void();
}
