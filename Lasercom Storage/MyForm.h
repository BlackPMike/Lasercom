#pragma once
#include "testDialog.h"
#include "MyForm.h"
#include "Search.h"
namespace LasercomStorage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —‚Ó‰Í‡ ‰Îˇ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ‰Ó·‡‚¸ÚÂ ÍÓ‰ ÍÓÌÒÚÛÍÚÓ‡
			//
		}

	protected:
		/// <summary>
		/// ŒÒ‚Ó·Ó‰ËÚ¸ ‚ÒÂ ËÒÔÓÎ¸ÁÛÂÏ˚Â ÂÒÛÒ˚.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    public: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
    protected:

    protected:

    private: System::Data::OleDb::OleDbCommand^ oleDbInsertCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbUpdateCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbDeleteCommand1;
    public: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;
    private:




    private: System::Windows::Forms::BindingNavigator^ bindingNavigator1;

    private: System::Windows::Forms::ToolStripLabel^ bindingNavigatorCountItem;

    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveFirstItem;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMovePreviousItem;
    private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator;
    private: System::Windows::Forms::ToolStripTextBox^ bindingNavigatorPositionItem;
    private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator1;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveNextItem;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveLastItem;
    private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator2;
    private: System::Windows::Forms::BindingSource^ bindingSource1;



















    private: System::Data::OleDb::OleDbCommand^ oleDbCommand1;

    private:


    private:


    private:

    private:



    public: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;

    public:












    private:

    private:

    private:

    private:



    private: System::Data::DataColumn^ MetNumber;
    private: System::Data::DataColumn^ MetName;
    public:
    private:








private: System::Data::DataTable^ dataTable4;


private: System::Data::DataColumn^ NumberTube;
private: System::Data::DataColumn^ TMt;
private: System::Data::DataColumn^ TubeName;


public: System::Data::DataTable^ Tube;
private:
private: System::Data::DataColumn^ SShCount;
public:
private: System::Data::DataColumn^ SShLenght;
private: System::Data::DataColumn^ SShWidth;
private: System::Data::DataColumn^ SShThick;
private: System::Data::DataColumn^ MtID;
private: System::Data::DataColumn^ SShID;
private: System::Data::DataTable^ dataTable2;
private: System::Data::DataColumn^ SScCount;

private: System::Data::DataColumn^ SScSizeX;
private: System::Data::DataColumn^ SScSizeY;
private: System::Data::DataColumn^ SScThick;



private: System::Data::DataColumn^ dataColumn2;
private: System::Data::DataColumn^ SScID;
public: System::Data::DataTable^ dataTable1;
private:


private: System::Data::DataTable^ dataTable3;
private: System::Data::DataColumn^ TubeRName;
private: System::Data::DataColumn^ TRMt;
private: System::Data::DataColumn^ NumberTubeR;
private: System::Data::DataColumn^ LenghtTubeR;
private: System::Data::DataColumn^ LastChangesDate;
private: System::Data::DataColumn^ LastChangesDateR;
private: System::Data::DataColumn^ SScDateModify;
private: System::Data::DataColumn^ SShDateModify;
private: System::Data::DataColumn^ LastChangesDateM;
private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
public: System::Data::DataSet^ dataSet1;
private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
private: System::Windows::Forms::ToolStripButton^ toolStripButton3;

private: System::Data::DataTable^ dataTable5;
private: System::Data::DataColumn^ JMetName;
private: System::Data::DataColumn^ JMetNumber;
private: System::Data::DataColumn^ JMetOperation;
private: System::Data::DataColumn^ JMetComment;
private: System::Data::DataColumn^ JmetLastChangesData;

private:

private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ Ì‡ÈÚËToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Û·‡Ú¸ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ·ÓÎ¸¯ÂToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÏÂÌ¸¯ÂToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ‰Ë‡Ô‡ÁÓÌToolStripMenuItem;
public: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
private:

private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox3;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^ Ì‡ÈÚËToolStripMenuItem1;

private: System::Windows::Forms::GroupBox^ groupBox1;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;


private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::ComboBox^ comboBox1;
public: System::Windows::Forms::TextBox^ UserNameT;
private: System::Data::DataColumn^ UserMetiz;
public:
private: System::Data::DataColumn^ UserTube;
private: System::Data::DataColumn^ UserTubeRest;
private: System::Data::DataColumn^ UserJIEM;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::ComboBox^ comboBox3;
public: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::TextBox^ textBox2;

private: System::Data::DataTable^ dataTable6;
private: System::Data::DataColumn^ ZakName;





private: System::Data::DataColumn^ dataColumn1;
private: System::Data::DataColumn^ dataColumn3;
private: System::Data::DataColumn^ dataColumn4;
private: System::Data::DataColumn^ dataColumn5;
private: System::Data::DataSet^ dataSet2;
private: System::Data::DataTable^ dataTable7;
private: System::Data::DataColumn^ dataColumn6;

private: System::Data::DataColumn^ dataColumn8;
private: System::Data::DataColumn^ dataColumn9;
private: System::Data::DataColumn^ dataColumn10;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::BindingSource^ bindingSource2;
private: System::Windows::Forms::ToolStripMenuItem^ ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem;
private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;
private: System::Data::OleDb::OleDbConnection^ oleDbConnection2;
private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter2;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
private: System::Windows::Forms::ToolStripMenuItem^ Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem;




















public:

public:

private:

private:











private:



















public:
private:
public:





    private:



















    private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Œ·ˇÁ‡ÚÂÎ¸Ì‡ˇ ÔÂÂÏÂÌÌ‡ˇ ÍÓÌÒÚÛÍÚÓ‡.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “Â·ÛÂÏ˚È ÏÂÚÓ‰ ‰Îˇ ÔÓ‰‰ÂÊÍË ÍÓÌÒÚÛÍÚÓ‡ ó ÌÂ ËÁÏÂÌˇÈÚÂ 
		/// ÒÓ‰ÂÊËÏÓÂ ˝ÚÓ„Ó ÏÂÚÓ‰‡ Ò ÔÓÏÓ˘¸˛ Â‰‡ÍÚÓ‡ ÍÓ‰‡.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
            this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
            this->oleDbCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
            this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
            this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
            this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
            this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
            this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
            this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
            this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
            this->MetNumber = (gcnew System::Data::DataColumn());
            this->MetName = (gcnew System::Data::DataColumn());
            this->dataTable4 = (gcnew System::Data::DataTable());
            this->LastChangesDateM = (gcnew System::Data::DataColumn());
            this->UserMetiz = (gcnew System::Data::DataColumn());
            this->NumberTube = (gcnew System::Data::DataColumn());
            this->TMt = (gcnew System::Data::DataColumn());
            this->TubeName = (gcnew System::Data::DataColumn());
            this->Tube = (gcnew System::Data::DataTable());
            this->LastChangesDate = (gcnew System::Data::DataColumn());
            this->UserTube = (gcnew System::Data::DataColumn());
            this->SShCount = (gcnew System::Data::DataColumn());
            this->SShLenght = (gcnew System::Data::DataColumn());
            this->SShWidth = (gcnew System::Data::DataColumn());
            this->SShThick = (gcnew System::Data::DataColumn());
            this->MtID = (gcnew System::Data::DataColumn());
            this->SShID = (gcnew System::Data::DataColumn());
            this->dataTable2 = (gcnew System::Data::DataTable());
            this->SShDateModify = (gcnew System::Data::DataColumn());
            this->SScCount = (gcnew System::Data::DataColumn());
            this->SScSizeX = (gcnew System::Data::DataColumn());
            this->SScSizeY = (gcnew System::Data::DataColumn());
            this->SScThick = (gcnew System::Data::DataColumn());
            this->dataColumn2 = (gcnew System::Data::DataColumn());
            this->SScID = (gcnew System::Data::DataColumn());
            this->dataTable1 = (gcnew System::Data::DataTable());
            this->SScDateModify = (gcnew System::Data::DataColumn());
            this->dataSet1 = (gcnew System::Data::DataSet());
            this->dataTable3 = (gcnew System::Data::DataTable());
            this->TubeRName = (gcnew System::Data::DataColumn());
            this->TRMt = (gcnew System::Data::DataColumn());
            this->NumberTubeR = (gcnew System::Data::DataColumn());
            this->LenghtTubeR = (gcnew System::Data::DataColumn());
            this->LastChangesDateR = (gcnew System::Data::DataColumn());
            this->UserTubeRest = (gcnew System::Data::DataColumn());
            this->dataTable5 = (gcnew System::Data::DataTable());
            this->JMetName = (gcnew System::Data::DataColumn());
            this->JMetNumber = (gcnew System::Data::DataColumn());
            this->JMetOperation = (gcnew System::Data::DataColumn());
            this->JMetComment = (gcnew System::Data::DataColumn());
            this->JmetLastChangesData = (gcnew System::Data::DataColumn());
            this->UserJIEM = (gcnew System::Data::DataColumn());
            this->dataTable6 = (gcnew System::Data::DataTable());
            this->ZakName = (gcnew System::Data::DataColumn());
            this->dataColumn1 = (gcnew System::Data::DataColumn());
            this->dataColumn3 = (gcnew System::Data::DataColumn());
            this->dataColumn4 = (gcnew System::Data::DataColumn());
            this->dataColumn5 = (gcnew System::Data::DataColumn());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->Ì‡ÈÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Û·‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->·ÓÎ¸¯ÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÏÂÌ¸¯ÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‰Ë‡Ô‡ÁÓÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
            this->toolStripTextBox3 = (gcnew System::Windows::Forms::ToolStripTextBox());
            this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->Ì‡ÈÚËToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->UserNameT = (gcnew System::Windows::Forms::TextBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->dataSet2 = (gcnew System::Data::DataSet());
            this->dataTable7 = (gcnew System::Data::DataTable());
            this->dataColumn6 = (gcnew System::Data::DataColumn());
            this->dataColumn8 = (gcnew System::Data::DataColumn());
            this->dataColumn9 = (gcnew System::Data::DataColumn());
            this->dataColumn10 = (gcnew System::Data::DataColumn());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
            this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbConnection2 = (gcnew System::Data::OleDb::OleDbConnection());
            this->oleDbDataAdapter2 = (gcnew System::Data::OleDb::OleDbDataAdapter());
            this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
            this->bindingNavigator1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tube))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable6))->BeginInit();
            this->contextMenuStrip1->SuspendLayout();
            this->groupBox1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
            this->contextMenuStrip2->SuspendLayout();
            this->SuspendLayout();
            // 
            // oleDbInsertCommand1
            // 
            this->oleDbInsertCommand1->CommandText = resources->GetString(L"oleDbInsertCommand1.CommandText");
            this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
            this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(17) {
                (gcnew System::Data::OleDb::OleDbParameter(L"SScID",
                    System::Data::OleDb::OleDbType::VarWChar, 0, L"SScID")), (gcnew System::Data::OleDb::OleDbParameter(L"MtID", System::Data::OleDb::OleDbType::VarWChar,
                        0, L"MtID")), (gcnew System::Data::OleDb::OleDbParameter(L"SScThick", System::Data::OleDb::OleDbType::Single, 0, L"SScThick")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"SScSizeX", System::Data::OleDb::OleDbType::Single, 0, L"SScSizeX")), (gcnew System::Data::OleDb::OleDbParameter(L"SScSizeY",
                        System::Data::OleDb::OleDbType::Single, 0, L"SScSizeY")), (gcnew System::Data::OleDb::OleDbParameter(L"SScGeometry", System::Data::OleDb::OleDbType::LongVarBinary,
                            0, L"SScGeometry")), (gcnew System::Data::OleDb::OleDbParameter(L"SScCount", System::Data::OleDb::OleDbType::SmallInt, 0,
                                L"SScCount")), (gcnew System::Data::OleDb::OleDbParameter(L"SScFromTask", System::Data::OleDb::OleDbType::VarWChar, 0, L"SScFromTask")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"SScFromSheet", System::Data::OleDb::OleDbType::VarWChar, 0, L"SScFromSheet")), (gcnew System::Data::OleDb::OleDbParameter(L"SScFromPiece",
                        System::Data::OleDb::OleDbType::VarWChar, 0, L"SScFromPiece")), (gcnew System::Data::OleDb::OleDbParameter(L"SScPreView",
                            System::Data::OleDb::OleDbType::LongVarBinary, 0, L"SScPreView")), (gcnew System::Data::OleDb::OleDbParameter(L"SScDateCreate",
                                System::Data::OleDb::OleDbType::Date, 0, L"SScDateCreate")), (gcnew System::Data::OleDb::OleDbParameter(L"UsrID", System::Data::OleDb::OleDbType::Integer,
                                    0, L"UsrID")), (gcnew System::Data::OleDb::OleDbParameter(L"SScDateModify", System::Data::OleDb::OleDbType::Date, 0, L"SScDateModify")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"SScArea", System::Data::OleDb::OleDbType::Single, 0, L"SScArea")), (gcnew System::Data::OleDb::OleDbParameter(L"SScMass",
                        System::Data::OleDb::OleDbType::Single, 0, L"SScMass")), (gcnew System::Data::OleDb::OleDbParameter(L"SScCost", System::Data::OleDb::OleDbType::Single,
                            0, L"SScCost"))
            });
            // 
            // oleDbUpdateCommand1
            // 
            this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
            this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
            this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(46) {
                (gcnew System::Data::OleDb::OleDbParameter(L"SScID",
                    System::Data::OleDb::OleDbType::VarWChar, 0, L"SScID")), (gcnew System::Data::OleDb::OleDbParameter(L"MtID", System::Data::OleDb::OleDbType::VarWChar,
                        0, L"MtID")), (gcnew System::Data::OleDb::OleDbParameter(L"SScThick", System::Data::OleDb::OleDbType::Single, 0, L"SScThick")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"SScSizeX", System::Data::OleDb::OleDbType::Single, 0, L"SScSizeX")), (gcnew System::Data::OleDb::OleDbParameter(L"SScSizeY",
                        System::Data::OleDb::OleDbType::Single, 0, L"SScSizeY")), (gcnew System::Data::OleDb::OleDbParameter(L"SScGeometry", System::Data::OleDb::OleDbType::LongVarBinary,
                            0, L"SScGeometry")), (gcnew System::Data::OleDb::OleDbParameter(L"SScCount", System::Data::OleDb::OleDbType::SmallInt, 0,
                                L"SScCount")), (gcnew System::Data::OleDb::OleDbParameter(L"SScFromTask", System::Data::OleDb::OleDbType::VarWChar, 0, L"SScFromTask")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"SScFromSheet", System::Data::OleDb::OleDbType::VarWChar, 0, L"SScFromSheet")), (gcnew System::Data::OleDb::OleDbParameter(L"SScFromPiece",
                        System::Data::OleDb::OleDbType::VarWChar, 0, L"SScFromPiece")), (gcnew System::Data::OleDb::OleDbParameter(L"SScPreView",
                            System::Data::OleDb::OleDbType::LongVarBinary, 0, L"SScPreView")), (gcnew System::Data::OleDb::OleDbParameter(L"SScDateCreate",
                                System::Data::OleDb::OleDbType::Date, 0, L"SScDateCreate")), (gcnew System::Data::OleDb::OleDbParameter(L"UsrID", System::Data::OleDb::OleDbType::Integer,
                                    0, L"UsrID")), (gcnew System::Data::OleDb::OleDbParameter(L"SScDateModify", System::Data::OleDb::OleDbType::Date, 0, L"SScDateModify")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"SScArea", System::Data::OleDb::OleDbType::Single, 0, L"SScArea")), (gcnew System::Data::OleDb::OleDbParameter(L"SScMass",
                        System::Data::OleDb::OleDbType::Single, 0, L"SScMass")), (gcnew System::Data::OleDb::OleDbParameter(L"SScCost", System::Data::OleDb::OleDbType::Single,
                            0, L"SScCost")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScID", System::Data::OleDb::OleDbType::VarWChar,
                                0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScID",
                                System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_MtID", System::Data::OleDb::OleDbType::Integer,
                                    0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"MtID", System::Data::DataRowVersion::Original,
                                    true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_MtID", System::Data::OleDb::OleDbType::VarWChar, 0,
                                        System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"MtID", System::Data::DataRowVersion::Original,
                                        nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScThick", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
                                            static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScThick", System::Data::DataRowVersion::Original, true, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScThick", System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input,
                        false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScThick", System::Data::DataRowVersion::Original, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScSizeX", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
                        static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScSizeX", System::Data::DataRowVersion::Original, true, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScSizeX", System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input,
                        false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScSizeX", System::Data::DataRowVersion::Original, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScSizeY", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
                        static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScSizeY", System::Data::DataRowVersion::Original, true, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScSizeY", System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input,
                        false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScSizeY", System::Data::DataRowVersion::Original, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScCount", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
                        static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScCount", System::Data::DataRowVersion::Original, true, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScCount", System::Data::OleDb::OleDbType::SmallInt, 0, System::Data::ParameterDirection::Input,
                        false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScCount", System::Data::DataRowVersion::Original, nullptr)),
                    (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScFromTask", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
                        static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScFromTask", System::Data::DataRowVersion::Original, true,
                        nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScFromTask", System::Data::OleDb::OleDbType::VarWChar,
                            0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScFromTask",
                            System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScFromSheet", System::Data::OleDb::OleDbType::Integer,
                                0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SScFromSheet",
                                System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScFromSheet",
                                    System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                    static_cast<System::Byte>(0), L"SScFromSheet", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScFromPiece",
                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                        L"SScFromPiece", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScFromPiece",
                                            System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                            static_cast<System::Byte>(0), L"SScFromPiece", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScDateCreate",
                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                L"SScDateCreate", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScDateCreate",
                                                    System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                    L"SScDateCreate", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_UsrID",
                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                        L"UsrID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_UsrID",
                                                            System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                            static_cast<System::Byte>(0), L"UsrID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScDateModify",
                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                L"SScDateModify", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScDateModify",
                                                                    System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                    L"SScDateModify", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScArea",
                                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                        L"SScArea", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScArea",
                                                                            System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                            static_cast<System::Byte>(0), L"SScArea", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScMass",
                                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                L"SScMass", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScMass",
                                                                                    System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                                    static_cast<System::Byte>(0), L"SScMass", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScCost",
                                                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                        L"SScCost", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScCost",
                                                                                            System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                                            static_cast<System::Byte>(0), L"SScCost", System::Data::DataRowVersion::Original, nullptr))
            });
            // 
            // oleDbDeleteCommand1
            // 
            this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
            this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
            this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(29) {
                (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScID",
                    System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                    static_cast<System::Byte>(0), L"SScID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_MtID",
                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                        L"MtID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_MtID",
                            System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                            static_cast<System::Byte>(0), L"MtID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScThick",
                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                L"SScThick", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScThick",
                                    System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                    static_cast<System::Byte>(0), L"SScThick", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScSizeX",
                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                        L"SScSizeX", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScSizeX",
                                            System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                            static_cast<System::Byte>(0), L"SScSizeX", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScSizeY",
                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                L"SScSizeY", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScSizeY",
                                                    System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                    static_cast<System::Byte>(0), L"SScSizeY", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScCount",
                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                        L"SScCount", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScCount",
                                                            System::Data::OleDb::OleDbType::SmallInt, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                            static_cast<System::Byte>(0), L"SScCount", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScFromTask",
                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                L"SScFromTask", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScFromTask",
                                                                    System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                    static_cast<System::Byte>(0), L"SScFromTask", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScFromSheet",
                                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                        L"SScFromSheet", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScFromSheet",
                                                                            System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                            static_cast<System::Byte>(0), L"SScFromSheet", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScFromPiece",
                                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                L"SScFromPiece", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScFromPiece",
                                                                                    System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                                    static_cast<System::Byte>(0), L"SScFromPiece", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScDateCreate",
                                                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                        L"SScDateCreate", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScDateCreate",
                                                                                            System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                            L"SScDateCreate", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_UsrID",
                                                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                                L"UsrID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_UsrID",
                                                                                                    System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                                                    static_cast<System::Byte>(0), L"UsrID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScDateModify",
                                                                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                                        L"SScDateModify", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScDateModify",
                                                                                                            System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                                            L"SScDateModify", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScArea",
                                                                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                                                L"SScArea", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScArea",
                                                                                                                    System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                                                                    static_cast<System::Byte>(0), L"SScArea", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScMass",
                                                                                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                                                        L"SScMass", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScMass",
                                                                                                                            System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                                                                            static_cast<System::Byte>(0), L"SScMass", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_SScCost",
                                                                                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                                                                                L"SScCost", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_SScCost",
                                                                                                                                    System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                                                                                    static_cast<System::Byte>(0), L"SScCost", System::Data::DataRowVersion::Original, nullptr))
            });
            // 
            // oleDbDataAdapter1
            // 
            this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
            this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
            this->oleDbDataAdapter1->SelectCommand = this->oleDbCommand1;
            cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(17) {
                (gcnew System::Data::Common::DataColumnMapping(L"SScID",
                    L"SScID")), (gcnew System::Data::Common::DataColumnMapping(L"MtID", L"MtID")), (gcnew System::Data::Common::DataColumnMapping(L"SScThick",
                        L"SScThick")), (gcnew System::Data::Common::DataColumnMapping(L"SScSizeX", L"SScSizeX")), (gcnew System::Data::Common::DataColumnMapping(L"SScSizeY",
                            L"SScSizeY")), (gcnew System::Data::Common::DataColumnMapping(L"SScGeometry", L"SScGeometry")), (gcnew System::Data::Common::DataColumnMapping(L"SScCount",
                                L"SScCount")), (gcnew System::Data::Common::DataColumnMapping(L"SScFromTask", L"SScFromTask")), (gcnew System::Data::Common::DataColumnMapping(L"SScFromSheet",
                                    L"SScFromSheet")), (gcnew System::Data::Common::DataColumnMapping(L"SScFromPiece", L"SScFromPiece")), (gcnew System::Data::Common::DataColumnMapping(L"SScPreView",
                                        L"SScPreView")), (gcnew System::Data::Common::DataColumnMapping(L"SScDateCreate", L"SScDateCreate")), (gcnew System::Data::Common::DataColumnMapping(L"UsrID",
                                            L"UsrID")), (gcnew System::Data::Common::DataColumnMapping(L"SScDateModify", L"SScDateModify")), (gcnew System::Data::Common::DataColumnMapping(L"SScArea",
                                                L"SScArea")), (gcnew System::Data::Common::DataColumnMapping(L"SScMass", L"SScMass")), (gcnew System::Data::Common::DataColumnMapping(L"SScCost",
                                                    L"SScCost"))
            };
            this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
                (gcnew System::Data::Common::DataTableMapping(L"Table",
                    L"StoreScrap", __mcTemp__1))
            });
            this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
            // 
            // bindingNavigator1
            // 
            this->bindingNavigator1->AddNewItem = nullptr;
            this->bindingNavigator1->AutoSize = false;
            this->bindingNavigator1->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
            this->bindingNavigator1->DeleteItem = nullptr;
            this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
                this->bindingNavigatorMoveFirstItem,
                    this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
                    this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
                    this->toolStripComboBox1, this->toolStripButton1, this->toolStripButton2, this->toolStripButton3
            });
            this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
            this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
            this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
            this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
            this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
            this->bindingNavigator1->Name = L"bindingNavigator1";
            this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
            this->bindingNavigator1->Size = System::Drawing::Size(1576, 36);
            this->bindingNavigator1->TabIndex = 1;
            this->bindingNavigator1->Text = L"bindingNavigator1";
            // 
            // bindingNavigatorCountItem
            // 
            this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
            this->bindingNavigatorCountItem->Size = System::Drawing::Size(43, 33);
            this->bindingNavigatorCountItem->Text = L"‰Îˇ {0}";
            this->bindingNavigatorCountItem->ToolTipText = L"Œ·˘ÂÂ ˜ËÒÎÓ ˝ÎÂÏÂÌÚÓ‚";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
            this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
            this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 33);
            this->bindingNavigatorMoveFirstItem->Text = L"œÂÂÏÂÒÚËÚ¸ ‚ Ì‡˜‡ÎÓ";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
            this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
            this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 33);
            this->bindingNavigatorMovePreviousItem->Text = L"œÂÂÏÂÒÚËÚ¸ Ì‡Á‡‰";
            // 
            // bindingNavigatorSeparator
            // 
            this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
            this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 36);
            // 
            // bindingNavigatorPositionItem
            // 
            this->bindingNavigatorPositionItem->AccessibleName = L"œÓÎÓÊÂÌËÂ";
            this->bindingNavigatorPositionItem->AutoSize = false;
            this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
            this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
            this->bindingNavigatorPositionItem->Text = L"0";
            this->bindingNavigatorPositionItem->ToolTipText = L"“ÂÍÛ˘ÂÂ ÔÓÎÓÊÂÌËÂ";
            // 
            // bindingNavigatorSeparator1
            // 
            this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
            this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 36);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
            this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
            this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 33);
            this->bindingNavigatorMoveNextItem->Text = L"œÂÂÏÂÒÚËÚ¸ ‚ÔÂÂ‰";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
            this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
            this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 33);
            this->bindingNavigatorMoveLastItem->Text = L"œÂÂÏÂÒÚËÚ¸ ‚ ÍÓÌÂˆ";
            // 
            // bindingNavigatorSeparator2
            // 
            this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
            this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 36);
            // 
            // toolStripComboBox1
            // 
            this->toolStripComboBox1->AutoSize = false;
            this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"÷ÂÎ˚Â ÎËÒÚ˚", L"ƒÂÎÓ‚˚Â ŒÚıÓ‰˚", L"“Û·‡",
                    L"“Û·‡ ŒÚıÓ‰˚", L"ÃÂÚËÁ˚"
            });
            this->toolStripComboBox1->MaxDropDownItems = 4;
            this->toolStripComboBox1->Name = L"toolStripComboBox1";
            this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
            this->toolStripComboBox1->Text = L"¬˚·Ó ˝ÎÂÏÂÌÚ‡ ";
            this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::toolStripComboBox1_SelectedIndexChanged);
            // 
            // toolStripButton1
            // 
            this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton1->Enabled = false;
            this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
            this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton1->Name = L"toolStripButton1";
            this->toolStripButton1->Size = System::Drawing::Size(23, 33);
            this->toolStripButton1->Text = L"”‰‡ÎÂÌËÂ";
            this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
            // 
            // toolStripButton2
            // 
            this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
            this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton2->Name = L"toolStripButton2";
            this->toolStripButton2->Size = System::Drawing::Size(23, 33);
            this->toolStripButton2->Text = L"—ÏÂÌ‡ ÔÓÎ¸ÁÓ‚‡ÚÂÎˇ";
            this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click_1);
            // 
            // toolStripButton3
            // 
            this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
            this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton3->Name = L"toolStripButton3";
            this->toolStripButton3->Size = System::Drawing::Size(23, 33);
            this->toolStripButton3->Text = L"toolStripButton3";
            this->toolStripButton3->ToolTipText = L"∆ÛÌ‡Î ÏÂÚËÁÓ‚";
            this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
            // 
            // MetNumber
            // 
            this->MetNumber->Caption = L"MetNumber";
            this->MetNumber->ColumnName = L" ÓÎ-‚Ó/¬ÂÒ";
            this->MetNumber->DataType = System::Int32::typeid;
            // 
            // MetName
            // 
            this->MetName->Caption = L"MetName";
            this->MetName->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // dataTable4
            // 
            this->dataTable4->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {
                this->MetName, this->MetNumber, this->LastChangesDateM,
                    this->UserMetiz
            });
            this->dataTable4->TableName = L"Metiz";
            // 
            // LastChangesDateM
            // 
            this->LastChangesDateM->Caption = L"LastChangesDateM";
            this->LastChangesDateM->ColumnName = L"œÓÎÂ‰ÌÂÂ ËÁÏÂÌÂÌËÂ";
            this->LastChangesDateM->ReadOnly = true;
            // 
            // UserMetiz
            // 
            this->UserMetiz->Caption = L"UserMetiz";
            this->UserMetiz->ColumnName = L"»ÁÏ. ÔÓÎ¸ÁÓ‚‡ÚÂÎÂÏ";
            this->UserMetiz->ReadOnly = true;
            // 
            // NumberTube
            // 
            this->NumberTube->Caption = L"NumberTube";
            this->NumberTube->ColumnName = L" ÓÎ-‚Ó";
            this->NumberTube->DataType = System::Int32::typeid;
            // 
            // TMt
            // 
            this->TMt->Caption = L"TMt";
            this->TMt->ColumnName = L"Ã‡ÚÂË‡Î";
            // 
            // TubeName
            // 
            this->TubeName->Caption = L"TubeName";
            this->TubeName->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // Tube
            // 
            this->Tube->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
                this->TubeName, this->TMt, this->NumberTube,
                    this->LastChangesDate, this->UserTube
            });
            this->Tube->TableName = L"Tube";
            // 
            // LastChangesDate
            // 
            this->LastChangesDate->Caption = L"LastChangesDate";
            this->LastChangesDate->ColumnName = L"œÓÒÎÂ‰ÌÂÂ ËÁÏÂÌÂÌËÂ";
            this->LastChangesDate->ReadOnly = true;
            // 
            // UserTube
            // 
            this->UserTube->Caption = L"UserTube";
            this->UserTube->ColumnName = L"»ÁÏ. ÔÓÎ¸ÁÓ‚‡ÚÂÎÂÏ";
            this->UserTube->ReadOnly = true;
            // 
            // SShCount
            // 
            this->SShCount->Caption = L"SShCount";
            this->SShCount->ColumnName = L" ÓÎË˜ÂÒÚ‚Ó";
            this->SShCount->DataType = System::Int32::typeid;
            // 
            // SShLenght
            // 
            this->SShLenght->Caption = L"SShLength";
            this->SShLenght->ColumnName = L"ƒÎËÌÌ‡";
            this->SShLenght->DataType = System::Int32::typeid;
            // 
            // SShWidth
            // 
            this->SShWidth->Caption = L"SShWidth";
            this->SShWidth->ColumnName = L"ÿËËÌ‡";
            this->SShWidth->DataType = System::Int32::typeid;
            // 
            // SShThick
            // 
            this->SShThick->Caption = L"SShThick";
            this->SShThick->ColumnName = L"“ÓÎ˘ËÌ‡";
            this->SShThick->DataType = System::Decimal::typeid;
            // 
            // MtID
            // 
            this->MtID->Caption = L"MtID";
            this->MtID->ColumnName = L"Ã‡ÚÂË‡Î";
            // 
            // SShID
            // 
            this->SShID->Caption = L"SShID";
            this->SShID->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // dataTable2
            // 
            this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(7) {
                this->SShID, this->MtID, this->SShThick,
                    this->SShWidth, this->SShLenght, this->SShCount, this->SShDateModify
            });
            this->dataTable2->TableName = L"StoreSheet";
            // 
            // SShDateModify
            // 
            this->SShDateModify->Caption = L"SShDateModify";
            this->SShDateModify->ColumnName = L"œÓÒÎÂ‰ÌÂÂ ËÁÏÂÌÂÌËÂ";
            this->SShDateModify->ReadOnly = true;
            // 
            // SScCount
            // 
            this->SScCount->Caption = L"SScCount";
            this->SScCount->ColumnName = L" ÓÎË˜ÂÒÚ‚Ó";
            this->SScCount->DataType = System::Int32::typeid;
            // 
            // SScSizeX
            // 
            this->SScSizeX->Caption = L"SScSizeX";
            this->SScSizeX->ColumnName = L"ƒÎËÌ‡";
            this->SScSizeX->DataType = System::Int32::typeid;
            // 
            // SScSizeY
            // 
            this->SScSizeY->Caption = L"SScSizeY";
            this->SScSizeY->ColumnName = L"ÿËËÌ‡";
            this->SScSizeY->DataType = System::Int32::typeid;
            // 
            // SScThick
            // 
            this->SScThick->Caption = L"SScThick";
            this->SScThick->ColumnName = L"“ÓÎ˘ËÌ‡";
            this->SScThick->DataType = System::Decimal::typeid;
            // 
            // dataColumn2
            // 
            this->dataColumn2->Caption = L"MtID";
            this->dataColumn2->ColumnName = L"Ã‡ÚÂË‡Î";
            // 
            // SScID
            // 
            this->SScID->AllowDBNull = false;
            this->SScID->Caption = L"SScID";
            this->SScID->ColumnMapping = System::Data::MappingType::Attribute;
            this->SScID->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // dataTable1
            // 
            this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(7) {
                this->SScID, this->dataColumn2, this->SScThick,
                    this->SScSizeY, this->SScSizeX, this->SScCount, this->SScDateModify
            });
            this->dataTable1->TableName = L"StoreScrap";
            // 
            // SScDateModify
            // 
            this->SScDateModify->Caption = L"SScDateModify";
            this->SScDateModify->ColumnName = L"œÓÒÎÂ‰ÌÂÂ ËÁÏÂÌÂÌËÂ ";
            this->SScDateModify->ReadOnly = true;
            // 
            // dataSet1
            // 
            this->dataSet1->DataSetName = L"NewDataSet";
            this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(7) {
                this->dataTable1, this->dataTable2, this->Tube,
                    this->dataTable4, this->dataTable3, this->dataTable5, this->dataTable6
            });
            // 
            // dataTable3
            // 
            this->dataTable3->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {
                this->TubeRName, this->TRMt, this->NumberTubeR,
                    this->LenghtTubeR, this->LastChangesDateR, this->UserTubeRest
            });
            this->dataTable3->TableName = L"TubeRest";
            // 
            // TubeRName
            // 
            this->TubeRName->Caption = L"TubeRName";
            this->TubeRName->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // TRMt
            // 
            this->TRMt->Caption = L"TRMt";
            this->TRMt->ColumnName = L"Ã‡ÚÂË‡Î";
            // 
            // NumberTubeR
            // 
            this->NumberTubeR->Caption = L"NumberTubeR";
            this->NumberTubeR->ColumnName = L" ÓÎ-‚Ó";
            this->NumberTubeR->DataType = System::Int32::typeid;
            // 
            // LenghtTubeR
            // 
            this->LenghtTubeR->Caption = L"LenghtTubeR";
            this->LenghtTubeR->ColumnName = L"ƒÎËÌÌ‡";
            this->LenghtTubeR->DataType = System::Int32::typeid;
            // 
            // LastChangesDateR
            // 
            this->LastChangesDateR->Caption = L"LastChangesDateR";
            this->LastChangesDateR->ColumnName = L"œÓÒÎÂ‰ÌÂÂ ËÁÏÂÌÂÌËÂ";
            this->LastChangesDateR->ReadOnly = true;
            // 
            // UserTubeRest
            // 
            this->UserTubeRest->Caption = L"UserTubeRest";
            this->UserTubeRest->ColumnName = L"»ÁÏ. ÔÓÎ¸ÁÓ‚‡ÚÂÎÂÏ";
            this->UserTubeRest->ReadOnly = true;
            // 
            // dataTable5
            // 
            this->dataTable5->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {
                this->JMetName, this->JMetNumber,
                    this->JMetOperation, this->JMetComment, this->JmetLastChangesData, this->UserJIEM
            });
            this->dataTable5->TableName = L"JIEM";
            // 
            // JMetName
            // 
            this->JMetName->Caption = L"JMetName";
            this->JMetName->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // JMetNumber
            // 
            this->JMetNumber->Caption = L"JMetNumber";
            this->JMetNumber->ColumnName = L" ÓÎ-‚Ó";
            this->JMetNumber->DataType = System::Int32::typeid;
            // 
            // JMetOperation
            // 
            this->JMetOperation->Caption = L"JMetOperation";
            this->JMetOperation->ColumnName = L"ŒÔÂ‡ˆËˇ";
            // 
            // JMetComment
            // 
            this->JMetComment->Caption = L"JMetComment";
            this->JMetComment->ColumnName = L"ŒÒÌÓ‚‡ÌËÂ";
            // 
            // JmetLastChangesData
            // 
            this->JmetLastChangesData->Caption = L"JmetLastChangesDate";
            this->JmetLastChangesData->ColumnName = L"ƒ‡Ú‡";
            // 
            // UserJIEM
            // 
            this->UserJIEM->Caption = L"UserJIEM";
            this->UserJIEM->ColumnName = L"»ÁÏ. ÔÓÎ¸ÁÓ‚‡ÚÂÎÂÏ";
            // 
            // dataTable6
            // 
            this->dataTable6->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
                this->ZakName, this->dataColumn1,
                    this->dataColumn3, this->dataColumn4, this->dataColumn5
            });
            this->dataTable6->TableName = L"Zak";
            // 
            // ZakName
            // 
            this->ZakName->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // dataColumn1
            // 
            this->dataColumn1->ColumnName = L"Ã‡ÚÂË‡Î";
            // 
            // dataColumn3
            // 
            this->dataColumn3->ColumnName = L" ÓÎ-‚Ó";
            this->dataColumn3->DataType = System::Int32::typeid;
            // 
            // dataColumn4
            // 
            this->dataColumn4->ColumnName = L"∆ÂÎÚ˚È";
            this->dataColumn4->DataType = System::Int32::typeid;
            // 
            // dataColumn5
            // 
            this->dataColumn5->ColumnName = L" ‡ÒÌ˚È";
            this->dataColumn5->DataType = System::Int32::typeid;
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
                this->Ì‡ÈÚËToolStripMenuItem,
                    this->Û·‡Ú¸ToolStripMenuItem, this->·ÓÎ¸¯ÂToolStripMenuItem, this->·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem, this->ÏÂÌ¸¯ÂToolStripMenuItem,
                    this->ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem, this->‰Ë‡Ô‡ÁÓÌToolStripMenuItem, this->ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem
            });
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(182, 180);
            // 
            // Ì‡ÈÚËToolStripMenuItem
            // 
            this->Ì‡ÈÚËToolStripMenuItem->Name = L"Ì‡ÈÚËToolStripMenuItem";
            this->Ì‡ÈÚËToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->Ì‡ÈÚËToolStripMenuItem->Text = L"Õ‡ÈÚË ÁÌ‡˜ÂÌËÂ";
            this->Ì‡ÈÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Ì‡ÈÚËToolStripMenuItem_Click);
            // 
            // Û·‡Ú¸ToolStripMenuItem
            // 
            this->Û·‡Ú¸ToolStripMenuItem->Name = L"Û·‡Ú¸ToolStripMenuItem";
            this->Û·‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->Û·‡Ú¸ToolStripMenuItem->Text = L"”·‡Ú¸ ÁÌ‡˜ÂÌËÂ";
            this->Û·‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Û·‡Ú¸ToolStripMenuItem_Click);
            // 
            // ·ÓÎ¸¯ÂToolStripMenuItem
            // 
            this->·ÓÎ¸¯ÂToolStripMenuItem->Name = L"·ÓÎ¸¯ÂToolStripMenuItem";
            this->·ÓÎ¸¯ÂToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->·ÓÎ¸¯ÂToolStripMenuItem->Text = L"¡ÓÎ¸¯Â";
            this->·ÓÎ¸¯ÂToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::·ÓÎ¸¯ÂToolStripMenuItem_Click);
            // 
            // ·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem
            // 
            this->·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Name = L"·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem";
            this->·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Text = L"¡ÓÎ¸¯Â ËÎË ‡‚ÌÓ";
            this->·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem_Click);
            // 
            // ÏÂÌ¸¯ÂToolStripMenuItem
            // 
            this->ÏÂÌ¸¯ÂToolStripMenuItem->Name = L"ÏÂÌ¸¯ÂToolStripMenuItem";
            this->ÏÂÌ¸¯ÂToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->ÏÂÌ¸¯ÂToolStripMenuItem->Text = L"ÃÂÌ¸¯Â ";
            this->ÏÂÌ¸¯ÂToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÏÂÌ¸¯ÂToolStripMenuItem_Click);
            // 
            // ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem
            // 
            this->ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Name = L"ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem";
            this->ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Text = L"ÃÂÌ¸¯Â ËÎË ‡‚ÌÓ";
            this->ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem_Click);
            // 
            // ‰Ë‡Ô‡ÁÓÌToolStripMenuItem
            // 
            this->‰Ë‡Ô‡ÁÓÌToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->toolStripTextBox2,
                    this->toolStripTextBox3, this->toolStripSeparator1, this->Ì‡ÈÚËToolStripMenuItem1
            });
            this->‰Ë‡Ô‡ÁÓÌToolStripMenuItem->Name = L"‰Ë‡Ô‡ÁÓÌToolStripMenuItem";
            this->‰Ë‡Ô‡ÁÓÌToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->‰Ë‡Ô‡ÁÓÌToolStripMenuItem->Text = L"ƒË‡Ô‡ÁÓÌ";
            // 
            // toolStripTextBox2
            // 
            this->toolStripTextBox2->Name = L"toolStripTextBox2";
            this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
            this->toolStripTextBox2->Text = L"ŒÚ";
            this->toolStripTextBox2->Enter += gcnew System::EventHandler(this, &MyForm::toolStripTextBox2_Enter);
            this->toolStripTextBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::toolStripTextBox2_Validating);
            // 
            // toolStripTextBox3
            // 
            this->toolStripTextBox3->Name = L"toolStripTextBox3";
            this->toolStripTextBox3->Size = System::Drawing::Size(100, 23);
            this->toolStripTextBox3->Text = L"ƒÓ";
            this->toolStripTextBox3->Enter += gcnew System::EventHandler(this, &MyForm::toolStripTextBox3_Enter);
            // 
            // toolStripSeparator1
            // 
            this->toolStripSeparator1->Name = L"toolStripSeparator1";
            this->toolStripSeparator1->Size = System::Drawing::Size(157, 6);
            // 
            // Ì‡ÈÚËToolStripMenuItem1
            // 
            this->Ì‡ÈÚËToolStripMenuItem1->Name = L"Ì‡ÈÚËToolStripMenuItem1";
            this->Ì‡ÈÚËToolStripMenuItem1->Size = System::Drawing::Size(160, 22);
            this->Ì‡ÈÚËToolStripMenuItem1->Text = L"Õ‡ÈÚË";
            this->Ì‡ÈÚËToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::Ì‡ÈÚËToolStripMenuItem1_Click);
            // 
            // ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem
            // 
            this->ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem->Name = L"ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem";
            this->ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
            this->ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem->Text = L"ŒÚÒÎÂÊË‚‡Ú¸";
            this->ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox1->Controls->Add(this->label4);
            this->groupBox1->Controls->Add(this->comboBox3);
            this->groupBox1->Controls->Add(this->comboBox2);
            this->groupBox1->Controls->Add(this->comboBox1);
            this->groupBox1->Controls->Add(this->label3);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->textBox1);
            this->groupBox1->Location = System::Drawing::Point(1237, 72);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(327, 129);
            this->groupBox1->TabIndex = 3;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"œÓËÒÍ";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(168, 24);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(66, 13);
            this->label4->TabIndex = 10;
            this->label4->Text = L"œÓ ÍÓÎÓÌÍÂ";
            // 
            // comboBox3
            // 
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Location = System::Drawing::Point(168, 40);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(143, 21);
            this->comboBox3->TabIndex = 9;
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(168, 89);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(143, 21);
            this->comboBox2->TabIndex = 8;
            this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(19, 89);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(143, 21);
            this->comboBox1->TabIndex = 7;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(165, 73);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(53, 13);
            this->label3->TabIndex = 5;
            this->label3->Text = L"“ÓÎ˘ËÌ‡";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(16, 72);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(40, 13);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Ã‡Í‡";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(16, 24);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(56, 13);
            this->label1->TabIndex = 3;
            this->label1->Text = L"¬ÍÎ˛˜‡ÂÚ";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(16, 40);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(146, 20);
            this->textBox1->TabIndex = 0;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
            // 
            // UserNameT
            // 
            this->UserNameT->Location = System::Drawing::Point(12, 39);
            this->UserNameT->Name = L"UserNameT";
            this->UserNameT->Size = System::Drawing::Size(100, 20);
            this->UserNameT->TabIndex = 4;
            this->UserNameT->Visible = false;
            // 
            // dataGridView1
            // 
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->dataGridView1->Location = System::Drawing::Point(12, 36);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(1057, 565);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &MyForm::dataGridView1_CellBeginEdit);
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
            this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
            this->dataGridView1->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataGridView1_CellMouseDoubleClick);
            this->dataGridView1->CellMouseUp += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataGridView1_CellMouseUp);
            this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
            this->dataGridView1->DataError += gcnew System::Windows::Forms::DataGridViewDataErrorEventHandler(this, &MyForm::dataGridView1_DataError);
            this->dataGridView1->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_RowEnter);
            this->dataGridView1->RowLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_RowLeave);
            this->dataGridView1->Sorted += gcnew System::EventHandler(this, &MyForm::dataGridView1_Sorted);
            this->dataGridView1->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &MyForm::dataGridView1_UserDeletingRow);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(1237, 38);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(287, 20);
            this->textBox2->TabIndex = 5;
            this->textBox2->Visible = false;
            // 
            // dataSet2
            // 
            this->dataSet2->DataSetName = L"NewDataSet";
            this->dataSet2->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable7 });
            // 
            // dataTable7
            // 
            this->dataTable7->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {
                this->dataColumn6, this->dataColumn8,
                    this->dataColumn9, this->dataColumn10
            });
            this->dataTable7->TableName = L"Zak";
            // 
            // dataColumn6
            // 
            this->dataColumn6->ColumnName = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ";
            // 
            // dataColumn8
            // 
            this->dataColumn8->ColumnName = L" ÓÎ-‚Ó";
            // 
            // dataColumn9
            // 
            this->dataColumn9->ColumnName = L"∆ÂÎÚ˚È";
            // 
            // dataColumn10
            // 
            this->dataColumn10->ColumnName = L" ‡ÒÌ˚È";
            // 
            // dataGridView2
            // 
            this->dataGridView2->AllowUserToDeleteRows = false;
            this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(1237, 225);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->ReadOnly = true;
            this->dataGridView2->Size = System::Drawing::Size(327, 150);
            this->dataGridView2->TabIndex = 6;
            this->dataGridView2->Visible = false;
            this->dataGridView2->CellMouseUp += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataGridView2_CellMouseUp);
            // 
            // oleDbSelectCommand1
            // 
            this->oleDbSelectCommand1->CommandText = L"SELECT *";
            this->oleDbSelectCommand1->Connection = this->oleDbConnection2;
            // 
            // oleDbConnection2
            // 
            this->oleDbConnection2->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=FB.mdb";
            // 
            // oleDbDataAdapter2
            // 
            this->oleDbDataAdapter2->SelectCommand = this->oleDbSelectCommand1;
            // 
            // contextMenuStrip2
            // 
            this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem });
            this->contextMenuStrip2->Name = L"contextMenuStrip2";
            this->contextMenuStrip2->Size = System::Drawing::Size(181, 48);
            // 
            // Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem
            // 
            this->Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem->Name = L"Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem";
            this->Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem->Text = L"”·‡Ú¸ ÁÌ‡˜ÂÌËÂ";
            this->Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->AutoSize = true;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(1576, 638);
            this->Controls->Add(this->dataGridView2);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->UserNameT);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->bindingNavigator1);
            this->Controls->Add(this->dataGridView1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"À‡ÁÂÍÓÏ —ÍÎ‡‰";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
            this->bindingNavigator1->ResumeLayout(false);
            this->bindingNavigator1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tube))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable6))->EndInit();
            this->contextMenuStrip1->ResumeLayout(false);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
            this->contextMenuStrip2->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        private: String^ Valperv; //ÔÂ‰˚‰Û˘ÂÂ ÁÌ‡˜ÂÌËÂ ËÁ ÚÂÍÛ˘ÂÈ ˇ˜ÂÈÍË
               private: String^ Valpos; //ÔÂ‰˚‰Û˘ÂÂ ÁÌ‡˜ÂÌËÂ ËÁ ÚÂÍÛ˘ÂÈ ˇ˜ÂÈÍË
private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dataGridView1_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e);
private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e);
private: System::Void dataGridView1_DataError(System::Object^ sender, System::Windows::Forms::DataGridViewDataErrorEventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripButton2_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e);
private: System::Void dataGridView1_CellMouseUp(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e);
private: System::Void Ì‡ÈÚËToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Û·‡Ú¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ·ÓÎ¸¯ÂToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ·ÓÎ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÏÂÌ¸¯ÂToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÏÂÌ¸¯Â»ÎË–‡‚ÌÓToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ì‡ÈÚËToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripTextBox3_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripTextBox2_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripTextBox2_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_Sorted(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_RowEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dataGridView1_RowLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void ÓÚÒÎÂÊË‚‡Ú¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView2_CellMouseUp(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e);
private: System::Void Û·‡Ú¸«Ì‡˜ÂÌËÂToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
