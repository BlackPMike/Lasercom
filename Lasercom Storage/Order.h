#pragma once

namespace LasercomStorage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Order
	/// </summary>
	public ref class Order : public System::Windows::Forms::Form
	{
	public:
		Order(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Order()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    protected:
    private: System::Data::DataSet^ dataSet1;
    private: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
    private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;

    private: System::Data::OleDb::OleDbCommand^ oleDbInsertCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbUpdateCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbDeleteCommand1;
    private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;
    private: System::Windows::Forms::BindingNavigator^ bindingNavigator1;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorAddNewItem;
    private: System::Windows::Forms::ToolStripLabel^ bindingNavigatorCountItem;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorDeleteItem;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveFirstItem;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMovePreviousItem;
    private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator;
    private: System::Windows::Forms::ToolStripTextBox^ bindingNavigatorPositionItem;
    private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator1;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveNextItem;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveLastItem;
    private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator2;
    private: System::Windows::Forms::BindingSource^ bindingSource1;
    private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
    private: System::Data::DataTable^ dataTable1;
    private: System::Data::DataColumn^ IDOrder;
    private: System::Data::DataColumn^ OrderCustomer;
    private: System::Data::DataColumn^ UserID;
    private: System::Data::DataColumn^ OrderCreate;
    private: System::Data::DataColumn^ OrderDeadline;
    private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Order::typeid));
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->dataSet1 = (gcnew System::Data::DataSet());
            this->dataTable1 = (gcnew System::Data::DataTable());
            this->IDOrder = (gcnew System::Data::DataColumn());
            this->OrderCustomer = (gcnew System::Data::DataColumn());
            this->UserID = (gcnew System::Data::DataColumn());
            this->OrderCreate = (gcnew System::Data::DataColumn());
            this->OrderDeadline = (gcnew System::Data::DataColumn());
            this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
            this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
            this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
            this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
            this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
            this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
            this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
            this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
            this->bindingNavigator1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(0, 28);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(1080, 568);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Order::dataGridView1_CellEndEdit);
            // 
            // dataSet1
            // 
            this->dataSet1->DataSetName = L"NewDataSet";
            this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
            // 
            // dataTable1
            // 
            this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
                this->IDOrder, this->OrderCustomer,
                    this->UserID, this->OrderCreate, this->OrderDeadline
            });
            this->dataTable1->TableName = L"Order";
            // 
            // IDOrder
            // 
            this->IDOrder->ColumnName = L"Номер заказа";
            this->IDOrder->DataType = System::Int32::typeid;
            // 
            // OrderCustomer
            // 
            this->OrderCustomer->ColumnName = L"Заказчик";
            // 
            // UserID
            // 
            this->UserID->ColumnName = L"Менеджер";
            // 
            // OrderCreate
            // 
            this->OrderCreate->ColumnName = L"Дата создания";
            // 
            // OrderDeadline
            // 
            this->OrderDeadline->ColumnName = L"Срок сдачи";
            // 
            // oleDbSelectCommand1
            // 
            this->oleDbSelectCommand1->CommandText = L"SELECT * FROM USERS";
            // 
            // oleDbInsertCommand1
            // 
            this->oleDbInsertCommand1->CommandText = L"INSERT INTO `USERS` (`UserName`, `Password`, `UserType`, `Поле1`) VALUES (\?, \?, \?"
                L", \?)";
            this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
                (gcnew System::Data::OleDb::OleDbParameter(L"UserName",
                    System::Data::OleDb::OleDbType::VarWChar, 0, L"UserName")), (gcnew System::Data::OleDb::OleDbParameter(L"Password", System::Data::OleDb::OleDbType::Integer,
                        0, L"Password")), (gcnew System::Data::OleDb::OleDbParameter(L"UserType", System::Data::OleDb::OleDbType::Integer, 0, L"UserType")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"Поле1", System::Data::OleDb::OleDbType::VarWChar, 0, L"Поле1"))
            });
            // 
            // oleDbUpdateCommand1
            // 
            this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
            this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(13) {
                (gcnew System::Data::OleDb::OleDbParameter(L"UserName",
                    System::Data::OleDb::OleDbType::VarWChar, 0, L"UserName")), (gcnew System::Data::OleDb::OleDbParameter(L"Password", System::Data::OleDb::OleDbType::Integer,
                        0, L"Password")), (gcnew System::Data::OleDb::OleDbParameter(L"UserType", System::Data::OleDb::OleDbType::Integer, 0, L"UserType")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"Поле1", System::Data::OleDb::OleDbType::VarWChar, 0, L"Поле1")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_UserId",
                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                        static_cast<System::Byte>(0), L"UserId", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_UserName",
                            System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                            L"UserName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_UserName",
                                System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                static_cast<System::Byte>(0), L"UserName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Password",
                                    System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                    L"Password", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Password",
                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                        static_cast<System::Byte>(0), L"Password", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_UserType",
                                            System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                            L"UserType", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_UserType",
                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                static_cast<System::Byte>(0), L"UserType", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Поле1",
                                                    System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                    L"Поле1", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Поле1",
                                                        System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                        static_cast<System::Byte>(0), L"Поле1", System::Data::DataRowVersion::Original, nullptr))
            });
            // 
            // oleDbDeleteCommand1
            // 
            this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
            this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
                (gcnew System::Data::OleDb::OleDbParameter(L"Original_UserId",
                    System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                    static_cast<System::Byte>(0), L"UserId", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_UserName",
                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                        L"UserName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_UserName",
                            System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                            static_cast<System::Byte>(0), L"UserName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Password",
                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                L"Password", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Password",
                                    System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                    static_cast<System::Byte>(0), L"Password", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_UserType",
                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                        L"UserType", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_UserType",
                                            System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                            static_cast<System::Byte>(0), L"UserType", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Поле1",
                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                L"Поле1", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Поле1",
                                                    System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                    static_cast<System::Byte>(0), L"Поле1", System::Data::DataRowVersion::Original, nullptr))
            });
            // 
            // oleDbDataAdapter1
            // 
            this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
            this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
            this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
            cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
                (gcnew System::Data::Common::DataColumnMapping(L"UserId",
                    L"UserId")), (gcnew System::Data::Common::DataColumnMapping(L"UserName", L"UserName")), (gcnew System::Data::Common::DataColumnMapping(L"Password",
                        L"Password")), (gcnew System::Data::Common::DataColumnMapping(L"UserType", L"UserType")), (gcnew System::Data::Common::DataColumnMapping(L"Поле1",
                            L"Поле1"))
            };
            this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
                (gcnew System::Data::Common::DataTableMapping(L"Table",
                    L"Users", __mcTemp__1))
            });
            this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
            // 
            // bindingNavigator1
            // 
            this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
            this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
            this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
            this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
                this->bindingNavigatorMoveFirstItem,
                    this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
                    this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
                    this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem, this->toolStripTextBox1
            });
            this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
            this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
            this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
            this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
            this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
            this->bindingNavigator1->Name = L"bindingNavigator1";
            this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
            this->bindingNavigator1->Size = System::Drawing::Size(1080, 25);
            this->bindingNavigator1->TabIndex = 1;
            this->bindingNavigator1->Text = L"bindingNavigator1";
            // 
            // bindingNavigatorAddNewItem
            // 
            this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
            this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
            this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(23, 22);
            this->bindingNavigatorAddNewItem->Text = L"Добавить";
            // 
            // bindingNavigatorCountItem
            // 
            this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
            this->bindingNavigatorCountItem->Size = System::Drawing::Size(43, 22);
            this->bindingNavigatorCountItem->Text = L"для {0}";
            this->bindingNavigatorCountItem->ToolTipText = L"Общее число элементов";
            // 
            // bindingNavigatorDeleteItem
            // 
            this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
            this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
            this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 22);
            this->bindingNavigatorDeleteItem->Text = L"Удалить";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
            this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
            this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 22);
            this->bindingNavigatorMoveFirstItem->Text = L"Переместить в начало";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
            this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
            this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 22);
            this->bindingNavigatorMovePreviousItem->Text = L"Переместить назад";
            // 
            // bindingNavigatorSeparator
            // 
            this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
            this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 25);
            // 
            // bindingNavigatorPositionItem
            // 
            this->bindingNavigatorPositionItem->AccessibleName = L"Положение";
            this->bindingNavigatorPositionItem->AutoSize = false;
            this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
            this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
            this->bindingNavigatorPositionItem->Text = L"0";
            this->bindingNavigatorPositionItem->ToolTipText = L"Текущее положение";
            // 
            // bindingNavigatorSeparator1
            // 
            this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
            this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 25);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
            this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
            this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 22);
            this->bindingNavigatorMoveNextItem->Text = L"Переместить вперед";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
            this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
            this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 22);
            this->bindingNavigatorMoveLastItem->Text = L"Переместить в конец";
            // 
            // bindingNavigatorSeparator2
            // 
            this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
            this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 25);
            // 
            // toolStripTextBox1
            // 
            this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->toolStripTextBox1->Name = L"toolStripTextBox1";
            this->toolStripTextBox1->Size = System::Drawing::Size(100, 25);
            // 
            // Order
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1080, 618);
            this->Controls->Add(this->bindingNavigator1);
            this->Controls->Add(this->dataGridView1);
            this->Name = L"Order";
            this->Text = L"Order";
            this->Load += gcnew System::EventHandler(this, &Order::Order_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
            this->bindingNavigator1->ResumeLayout(false);
            this->bindingNavigator1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void Order_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
