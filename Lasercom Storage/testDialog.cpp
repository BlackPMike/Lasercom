#include "testDialog.h"
#include "MyForm.h"

int mod(int mods,int rest)
{
  static   int nMode;
  if (rest == 0)
  {
      nMode = nMode + mods;
      return nMode;
  }
    
    if (rest == 1)
    {
        nMode = 0;
    }
}
int prov(int curr, int rest)
{
    static int nStatic;
    switch (rest)
    {
    case 0:
    {
        nStatic = nStatic + curr;
        return nStatic;
    }
    break;
    case 1:
    {
        nStatic = 0;
        return nStatic;
    }
    break;
    case 2:
    {

        return nStatic;
    }
    break;
    }
}
System::Void LasercomStorage::testDialog::textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (mod(0,0) == 0)
    {
        return System::Void();
    }
    else
    {
        int i = 0;
        int j = 0;
        int s = 0;
        i = prov(0, 0);
        if ((textBox3->Text == "-") || (String::IsNullOrEmpty(textBox3->Text)) || (textBox3->Text == "0"))
        {
            j = 0;
            i = prov(0,2);
        }
        else
        {
            j = Convert::ToInt32(textBox3->Text);
        }
        s = i + j;
        textBox2->Text = Convert::ToString(s);
        if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text))
        {
            button1->Enabled = false;
        }
        else
        {
            button1->Enabled = true;
        }

        return System::Void();
    }
}

System::Void LasercomStorage::testDialog::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (mod(0,0) == 0)
    {
        if (String::IsNullOrEmpty(textBox1->Text)) 
        {
            button1->Enabled = false;
        }
        else
        {
            button1->Enabled = true;
        }
    }
    else
    {
        if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text))
        {
            button1->Enabled = false;
        }
        else
        {
            button1->Enabled = true;
        }
    }


    return System::Void();
}

System::Void LasercomStorage::testDialog::testDialog_Load(System::Object^ sender, System::EventArgs^ e)
{
    textBox3->Select();
    
    mod(0,1);
    prov(0,1);
    if (String::IsNullOrEmpty(textBox2->Text))
    {
        mod(0,0);
        textBox2->Visible = false;
        textBox3->Visible = false;
        label2->Visible = false;
        label3->Visible = false;
        button1->Location = Point(12, 60);
        button2->Location = Point(147, 60);
        LasercomStorage::testDialog::Size = System::Drawing::Size(277, 130);
    }
    if (textBox2->Text->Length != 0)
    {
        mod(1,0);
        prov(Convert::ToInt32(textBox2->Text),0);
    }
  
    return System::Void();
}

System::Void LasercomStorage::testDialog::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    mod(0, 1);
    prov(0, 1);
    return System::Void();
}

System::Void LasercomStorage::testDialog::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    mod(0, 1);
    prov(0, 1);
    return System::Void();
}




