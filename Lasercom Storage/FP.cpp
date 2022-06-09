#include "FP.h"
#include "MyForm.h"
#include "Users.h"


System::Void LasercomStorage::FP::FP_Load(System::Object^ sender, System::EventArgs^ e)
{
	button1->Enabled = false;
	return System::Void();
}

System::Void LasercomStorage::FP::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox2->Text->IsNullOrEmpty(textBox2->Text)) || (textBox3->Text->IsNullOrEmpty(textBox3->Text)))
	{
		button1->Enabled = false;
	}
	else
		button1->Enabled = true;
	return System::Void();
}

System::Void LasercomStorage::FP::textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox2->Text->IsNullOrEmpty(textBox2->Text)) || (textBox3->Text->IsNullOrEmpty(textBox3->Text)))
	{
		button1->Enabled = false;
	}
	else
		button1->Enabled = true;
	return System::Void();
}

System::Void LasercomStorage::FP::textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if ((e->KeyChar.IsDigit(e->KeyChar)) || (e->KeyChar.IsControl(e->KeyChar)))
	{
		e->Handled = false;
		return System::Void();
	}
	else
	{
		e->Handled = true;
	}
	return System::Void();
}

System::Void LasercomStorage::FP::textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if ((e->KeyChar.IsDigit(e->KeyChar)) || (e->KeyChar.IsControl(e->KeyChar)))
	{
		e->Handled = false;
		return System::Void();
	}
	else
	{
		e->Handled = true;
	}
	return System::Void();
}
