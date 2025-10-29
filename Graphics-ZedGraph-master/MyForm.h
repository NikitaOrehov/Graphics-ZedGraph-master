#pragma once
#include <math.h>
#include <vector>
#include <string>
#include <tuple>



namespace Graph {
	public value struct StatisticsPair
	{
	public:
		double Value;
		double XPosition;

		StatisticsPair(double val, double xPos) : Value(val), XPosition(xPos) {}
	};

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox2;



	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(51, 37);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(882, 463);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->X, this->F_1,
					this->F_2, this->F_3, this->F_4, this->F_5, this->F_6, this->F_7, this->F_8, this->F_9
			});
			this->dataGridView1->Location = System::Drawing::Point(745, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(365, 402);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"V";
			this->F_1->MinimumWidth = 6;
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 125;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"V_2";
			this->F_2->MinimumWidth = 6;
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 125;
			// 
			// F_3
			// 
			this->F_3->HeaderText = L"V - V_2";
			this->F_3->MinimumWidth = 6;
			this->F_3->Name = L"F_3";
			this->F_3->ReadOnly = true;
			this->F_3->Width = 125;
			// 
			// F_4
			// 
			this->F_4->HeaderText = L"ОЛП";
			this->F_4->MinimumWidth = 6;
			this->F_4->Name = L"F_4";
			this->F_4->ReadOnly = true;
			this->F_4->Width = 125;
			// 
			// F_5
			// 
			this->F_5->HeaderText = L"h_i";
			this->F_5->MinimumWidth = 6;
			this->F_5->Name = L"F_5";
			this->F_5->ReadOnly = true;
			this->F_5->Width = 125;
			// 
			// F_6
			// 
			this->F_6->HeaderText = L"C1";
			this->F_6->MinimumWidth = 6;
			this->F_6->Name = L"F_6";
			this->F_6->ReadOnly = true;
			this->F_6->Width = 125;
			// 
			// F_7
			// 
			this->F_7->HeaderText = L"C2";
			this->F_7->MinimumWidth = 6;
			this->F_7->Name = L"F_7";
			this->F_7->ReadOnly = true;
			this->F_7->Width = 125;
			// 
			// F_8
			// 
			this->F_8->HeaderText = L"U";
			this->F_8->MinimumWidth = 6;
			this->F_8->Name = L"F_8";
			this->F_8->ReadOnly = true;
			this->F_8->Width = 125;
			// 
			// F_9
			// 
			this->F_9->HeaderText = L"|U - V|";
			this->F_9->MinimumWidth = 6;
			this->F_9->Name = L"F_9";
			this->F_9->ReadOnly = true;
			this->F_9->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(66, 488);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"min";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 485);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(211, 487);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"max";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 484);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(383, 490);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(408, 485);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(882, 507);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 538);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(190, 540);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"zoom_b";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(104, 537);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 541);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"zoom_a";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(533, 485);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"e";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(560, 481);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(80, 22);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"0,001";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Method 1", L"Method 2", L"Method 3" });
			this->comboBox1->Location = System::Drawing::Point(383, 537);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 16;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(560, 537);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(71, 20);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"Control";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(663, 481);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"a";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(684, 479);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(62, 22);
			this->textBox7->TabIndex = 19;
			this->textBox7->Text = L"1";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(663, 510);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"b";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(663, 537);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 16);
			this->label9->TabIndex = 21;
			this->label9->Text = L"c";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(684, 507);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(62, 22);
			this->textBox8->TabIndex = 22;
			this->textBox8->Text = L"1";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(684, 535);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(62, 22);
			this->textBox9->TabIndex = 23;
			this->textBox9->Text = L"1";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(762, 481);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 16);
			this->label10->TabIndex = 24;
			this->label10->Text = L"u_0";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(762, 510);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"u_1";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(796, 479);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(40, 22);
			this->textBox10->TabIndex = 26;
			this->textBox10->Text = L"1";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(796, 507);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(40, 22);
			this->textBox11->TabIndex = 27;
			this->textBox11->Text = L"1";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(635, 578);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 16);
			this->label12->TabIndex = 28;
			this->label12->Text = L"graph";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DisplayMember = L"1";
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"(x, u1)", L"(x, u2)", L"(u1, u2)" });
			this->comboBox2->Location = System::Drawing::Point(684, 575);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(62, 24);
			this->comboBox2->TabIndex = 29;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 612);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double u_0 = 1;
		double u_1 = 1;
		const int p = 4;
		double e;
		bool control = false;
		double max_value = 1000;
		double xmin = 0;
		double xmax = 1;
		double h;
		static double a = 1;
		static double b = 1;
		static double c = 1;
		int n = 0;
		double max_OLP = 0;
		StatisticsPair max_h;
		StatisticsPair min_h;
		StatisticsPair max_u_v;
		int count_c1 = 0;
		int count_c2 = 0;
		int max_iterations = 1000;

		void ShowSummaryInMessageBox(double b)
		{
			String^ summary =
				"=== СВОДКА РАСЧЕТА ===\n\n" +
				"Количество итераций: " + n + "\n" +
				"Макс |ОЛП|: " + max_OLP + "\n" +
				"count_c1: " + count_c1 + "\n" +
				"count_c2: " + count_c2 + "\n" +
				"Макс hi = " + max_h.Value + " при x = " + max_h.XPosition + "\n" +
				"Мин hi = " + min_h.Value + " при x = " + min_h.XPosition + "\n" +
				"Макс |ui – vi| = " + max_u_v.Value + " при x = " + max_u_v.XPosition + "\n" +
				"b – xn = " + b.ToString("F6");

			MessageBox::Show(this, summary, "Результаты расчета",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			n = 0;
			max_OLP = 0;
			count_c1 = 0;
			count_c2 = 0;
		}

		double TestTrue(double x, double v) {
			return u_0 * exp(2 * x);
		}

		static double f(double x) {
			return ((pow(x, 3) + 1) / (pow(x, 5) + 1));
		}

		static double g(double x, std::vector<double> v) {
			double v1 = v[0];
			double v2 = v[1];
			return a * v2 * abs(v2) + b * v2 + c * v2;
		}

		//function for test task
		static double TestFunction(double x, double v) {
			return 2 * v;
		}

		static long double Task1Function(double x, long double v) {
			long double result = (long double)f(x) * (long double)pow(v, 2) + (long double)v - (long double)pow(v, 3) * (long double)sin(10 * x);
			return result;
		}

		static std::vector<double> Task2Function(double x, std::vector<double> v) {
			std::vector<double> result = { 0, 0 };
			result[0] = v[1];
			result[1] = (-1) * g(x, v);
			return result;
		}

		template<typename Func>
		double MethodRK4(double x, double v, double h, Func func) {
			double k1 = func(x, v);
			double k2 = func(x + (h / 2), v + (h / 2) * k1);
			double k3 = func(x + (h / 2), v + (h / 2) * k2);
			double k4 = func(x + h, v + h * k3);
			return v + (h / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
		}

		template<typename Func>
		std::vector<double> MethodRK4_1(double x, std::vector<double> v, double h, Func func) {
			std::vector<double> temp_v = v;
			std::vector<double> k1 = func(x, temp_v);

			temp_v = v;
			temp_v[0] += (h / 2) * k1[0];
			temp_v[1] += (h / 2) * k1[1];
			std::vector<double> k2 = func(x + (h/2), temp_v);

			temp_v = v;
			temp_v[0] += (h / 2) * k2[0];
			temp_v[1] += (h / 2) * k2[1];
			std::vector<double> k3 = func(x + h / 2, v);

			temp_v = v;
			temp_v[0] += h * k3[0];
			temp_v[1] += h * k3[1];
			std::vector<double> k4 = func(x + h, v);

			std::vector<double> result = { 0, 0 };
			for (int i = 0; i < result.size(); i++) {
				result[0] = v[0] + (h / 6) * (k1[0] + 2 * k2[0] + 2 * k3[0] + k4[0]);
				result[1] = v[1] + (h / 6) * (k1[1] + 2 * k2[1] + 2 * k3[1] + k4[1]);
			}
			return result;
		}

		void task1() {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();

			PointPairList^ exact_list = gcnew PointPairList();
			PointPairList^ numeric_list = gcnew PointPairList();

			double v = u_0;
			double u = u_0;

			dataGridView1->Rows->Clear();

			numeric_list->Add(xmin, v);
			exact_list->Add(xmin, TestTrue(xmin, v));


			int i = 1;
			double x = xmin;

			if (control) {
				AddDataRow(dataGridView1, 0, xmin, v, v, 0, 0, h, 0, 0, TestTrue(xmin, v), 0);
				while (x + h <= xmax && n < max_iterations) {
					n++;
					if (h > max_h.Value) {
						max_h.Value = h;
						max_h.XPosition = x + h;
					}
					if (h < min_h.Value) {
						min_h.Value = h;
						min_h.XPosition = x + h;
					}

					double v1 = MethodRK4(x, v, h, TestFunction);

					double v_temp = MethodRK4(x, v, h / 2, TestFunction);
					double v2 = MethodRK4(x + h / 2, v_temp, h / 2, TestFunction);

					double S = abs(v2 - v1) / (pow(2, p) - 1);

					u = TestTrue(x + h, u);

					if (S <= e) {
						x += h;
						v = v1;
						exact_list->Add(x, u);
						numeric_list->Add(x, v);

						if (abs(pow(2, p) * S) > max_OLP) {
							max_OLP = abs(pow(2, p) * S);
						}

						if (abs(u - v) > max_u_v.Value) {
							max_u_v.Value = abs(u - v);
							max_u_v.XPosition = x;
						}

						if (S < e / pow(2, p + 1)) {
							AddDataRow(dataGridView1, i, x, v, v2, v - v2, pow(2, p) * S, h, 0, 1, u, abs(u - v));
							count_c2++;
							h *= 2;
						}
						else AddDataRow(dataGridView1, i, x, v, v2, v - v2, pow(2, p) * S, h, 0, 0, u, abs(u - v));
						i++;
					}
					else {
						AddDataRow(dataGridView1, i, x + h, v1, v2, v1 - v2, pow(2, p) * S, h, 1, 0, u, abs(u - v1));
						count_c1++;
						h /= 2;
						i++;
					}
				}
			}
			else {
				AddDataRow(dataGridView1, 0, xmin, v, 0, v, 0, h, 0, 0, TestTrue(xmin, v), 0);
				for (x = xmin + h; x <=xmax + h/2; x += h) {
					n++;
					if (n >= max_iterations) break;
					v = MethodRK4(x - h, v, h, TestFunction);
					double u = TestTrue(x, v);
					if (abs(u - v) > max_u_v.Value) {
						max_u_v.Value = abs(u - v);
						max_u_v.XPosition = x;
					}
					exact_list->Add(x, u);
					numeric_list->Add(x, v);
					AddDataRow(dataGridView1, i, x, v, 0, v, 0, h, 0, 0, u, abs(u - v));
					i++;
				}
				x -= h;
			}

			LineItem^ exact_curve = panel->AddCurve("Точное решение", exact_list, Color::Red, SymbolType::Circle);
			LineItem^ numeric_curve = panel->AddCurve("Численное решение", numeric_list, Color::Blue, SymbolType::None);

			panel->XAxis->Scale->Min = xmin - 0.1;
			panel->XAxis->Scale->Max = xmax + 0.1;

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
			ShowSummaryInMessageBox(xmax - x);
		}

		void task2() {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();

			PointPairList^ numeric_list = gcnew PointPairList();

			double v = u_0;

			dataGridView1->Rows->Clear();

			numeric_list->Add(xmin, v);

			AddDataRow(dataGridView1, 0, xmin, v, 0, v, 0, h, 0, 0, 0, 0);

			int i = 1;
			double x = xmin;

			if (control) {
				while (x + h <= xmax && n < max_iterations) {
					n++;
					if (h > max_h.Value) {
						max_h.Value = h;
						max_h.XPosition = x + h;
					}
					if (h < min_h.Value) {
						min_h.Value = h;
						min_h.XPosition = x + h;
					}
					double v1 = MethodRK4(x, v, h, Task1Function);
					if (v1 > max_value) {
						break;
					}

					double v_temp = MethodRK4(x, v, h / 2, Task1Function);
					double v2 = MethodRK4(x + h / 2, v_temp, h / 2, Task1Function);

					double S = abs(v2 - v1) / (pow(2, p) - 1);

					if (S <= e) {
						x += h;
						v = v1;

						numeric_list->Add(x, v);
						if ((pow(2, p) * S) > max_OLP) {
							max_OLP = (pow(2, p) * S);
						}
						if (S < e / pow(2, p + 1)) {
							AddDataRow(dataGridView1, i, x, v, v2, v - v2, pow(2, p) * S, h, 0, 1, 0, 0);
							count_c2++;
							h *= 2;
						}
						else {
							AddDataRow(dataGridView1, i, x, v, v2, v - v2, pow(2, p) * S, h, 0, 0, 0, 0);
						}
						i++;
					}
					else {
						AddDataRow(dataGridView1, i, x + h, v1, v2, v1 - v2, pow(2, p) * S, h, 1, 0, 0, 0);
						count_c1++;
						h /= 2;
						i++;
					}
				}
			}
			else {
				for (x = xmin + h; x <= xmax + h / 2; x += h) {
					n++;
					if (n >= max_iterations) break;
					v = MethodRK4(x - h, v, h, Task1Function);
					if (v > max_value) {
						break;
					}
					numeric_list->Add(x, v);
					AddDataRow(dataGridView1, i, x, v, 0, 0, 0, h, 0, 0, 0, 0);
					i++;
				}
				x -= h;
			}

			LineItem^ numeric_curve = panel->AddCurve("Численное решение", numeric_list, Color::Blue, SymbolType::None);

			panel->XAxis->Scale->Min = xmin - 0.1;
			panel->XAxis->Scale->Max = xmax + 0.1;

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
			ShowSummaryInMessageBox(xmax - x);
		}

		void task3() {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();

			PointPairList^ numeric_list1 = gcnew PointPairList();
			PointPairList^ numeric_list2 = gcnew PointPairList();
			PointPairList^ numeric_list3 = gcnew PointPairList();

			std::vector<double> v = { 0, 0 };
			std::vector<double> v2 = { 0, 0 };
			v[0] = u_0;
			v[1] = u_1;

			dataGridView1->Rows->Clear();

			numeric_list1->Add(xmin, v[0]);
			numeric_list2->Add(xmin, v[1]);
			numeric_list3->Add(v[0], v[1]);

			AddDataRow_1(dataGridView1, 0, xmin, v, v2, v, 0, h, 0, 0, 0, 0);

			int i = 1;
			double x = xmin;

			if (control) {
				while (x + h <= xmax && n < max_iterations) {
					n++;
					if (h > max_h.Value) {
						max_h.Value = h;
						max_h.XPosition = x + h;
					}
					if (h < min_h.Value) {
						min_h.Value = h;
						min_h.XPosition = x + h;
					}
					std::vector<double> v1 = MethodRK4_1(x, v, h, Task2Function);

					std::vector<double> v_temp = MethodRK4_1(x, v, h / 2, Task2Function);
					std::vector<double> v2 = MethodRK4_1(x + h / 2, v_temp, h / 2, Task2Function);

					std::vector<double> temp = { 0, 0 };
					temp[0] = (v2[0] - v1[0]) / (pow(2, p) - 1);
					temp[1] = (v2[1] - v1[1]) / (pow(2, p) - 1);

					double S = abs(temp[0]) > abs(temp[1]) ? abs(temp[0]) : abs(temp[1]);

					if (abs(S) <= e) {
						x += h;
						v = v1;

						numeric_list1->Add(x, v[0]);
						numeric_list2->Add(x, v[1]);
						numeric_list3->Add(v[0], v[1]);

						temp[0] = v2[0] - v1[0];
						temp[1] = v2[1] - v1[1];

						if ((pow(2, p) * S) > max_OLP) {
							max_OLP = (pow(2, p) * S);
						}

						if (abs(S) < e / pow(2, p + 1)) {
							AddDataRow_1(dataGridView1, i, x, v, v2, temp, pow(2, p) * S, h, 0, 1, 0, 0);
							count_c2++;
							h *= 2;
						}
						else {
							AddDataRow_1(dataGridView1, i, x, v, v2, temp, pow(2, p) * S, h, 0, 0, 0, 0);
						}
						i++;
					}
					else {
						AddDataRow_1(dataGridView1, i, x + h, v1, v2, temp, pow(2, p) * S, h, 1, 0, 0, 0);
						count_c1++;
						h /= 2;
						i++;
					}
				}
			}
			else {
				for (x = xmin + h; x <= xmax + h / 2; x += h) {
					n++;
					if (n >= max_iterations) break;
					v = MethodRK4_1(x - h, v, h, Task2Function);
					if (v[0] > max_value || v[1] > max_value) {
						break;
					}
					numeric_list1->Add(x, v[0]);
					numeric_list2->Add(x, v[1]);
					numeric_list3->Add(v[0], v[1]);
					AddDataRow_1(dataGridView1, i, x, v, std::vector<double>{0, 0}, std::vector<double>{0, 0}, 0, h, 0, 0, 0, 0);
					i++;
				}
				x -= h;
			}
			String^ graph = comboBox2->Text;
			int Index = comboBox2->SelectedIndex;
			LineItem^ numeric_curve1;
			switch (Index) {
				case 0: numeric_curve1 = panel->AddCurve("Численное решение", numeric_list1, Color::Blue, SymbolType::None); break;
				case 1: numeric_curve1 = panel->AddCurve("Численное решение", numeric_list2, Color::Blue, SymbolType::None); break;
				case 2: numeric_curve1 = panel->AddCurve("Численное решение", numeric_list3, Color::Blue, SymbolType::None); break;
				default: numeric_curve1 = panel->AddCurve("Численное решение", numeric_list1, Color::Blue, SymbolType::None); break;
			}

			panel->XAxis->Scale->Min = xmin - 0.1;
			panel->XAxis->Scale->Max = xmax + 0.1;

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
			ShowSummaryInMessageBox(xmax - x);
		}

		void AddDataRow(DataGridView^ grid, int row, double x, double v, double v_2, double v_v_2, double OLP, double h_i, bool C1, bool C2, double u, double u_v) {
			grid->Rows->Add();
			grid->Rows[row]->Cells[0]->Value = Math::Round(x, 3);
			grid->Rows[row]->Cells[1]->Value = Math::Round(v, 3);
			grid->Rows[row]->Cells[2]->Value = Math::Round(v_2, 3);
			grid->Rows[row]->Cells[3]->Value = Math::Round(v_v_2, 3);
			grid->Rows[row]->Cells[4]->Value = Math::Round(OLP, 6);
			grid->Rows[row]->Cells[5]->Value = Math::Round(h_i, 3);
			grid->Rows[row]->Cells[6]->Value = Math::Round(C1, 3);
			grid->Rows[row]->Cells[7]->Value = Math::Round(C2, 3);
			grid->Rows[row]->Cells[8]->Value = Math::Round(u, 3);
			grid->Rows[row]->Cells[9]->Value = Math::Round(u_v, 6);
		}

		void AddDataRow_1(DataGridView^ grid, int row, double x, std::vector<double> v, std::vector<double> v_2, std::vector<double> v_v_2, double OLP, double h_i, bool C1, bool C2, double u, double u_v) {
			System::String^ v_str = System::String::Format("( {0:F3}, {1:F3} )", Math::Round(v[0], 3), Math::Round(v[1], 3));
			System::String^ v_2_str = System::String::Format("( {0:F3}, {1:F3} )", Math::Round(v_2[0], 3), Math::Round(v_2[1], 3));
			System::String^ v_v_2_str = System::String::Format("( {0:F3}, {1:F3} )", Math::Round(v_v_2[0], 3), Math::Round(v_v_2[1], 3));
			grid->Rows->Add();
			grid->Rows[row]->Cells[0]->Value = Math::Round(x, 3);
			grid->Rows[row]->Cells[1]->Value = v_str;
			grid->Rows[row]->Cells[2]->Value = v_2_str;
			grid->Rows[row]->Cells[3]->Value = v_v_2_str;
			grid->Rows[row]->Cells[4]->Value = Math::Round(OLP, 6);
			grid->Rows[row]->Cells[5]->Value = Math::Round(h_i, 3);
			grid->Rows[row]->Cells[6]->Value = Math::Round(C1, 3);
			grid->Rows[row]->Cells[7]->Value = Math::Round(C2, 3);
			grid->Rows[row]->Cells[8]->Value = Math::Round(u, 3);
			grid->Rows[row]->Cells[9]->Value = Math::Round(u_v, 6);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  E) {
		String^ method = comboBox1->Text;
		int methodIndex = comboBox1->SelectedIndex;
		control = checkBox1->Checked;
		e = Convert::ToDouble(textBox6->Text);
		xmin = Convert::ToDouble(textBox1->Text);
		h = Convert::ToDouble(textBox3->Text);
		max_h = StatisticsPair(h, 0);
		min_h = StatisticsPair(h, 0);
		max_u_v = StatisticsPair(0, 0);
		switch (methodIndex) {
		case 0: task1(); break;
		case 1: task2(); break;
		case 2: task3(); break;
		}

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox5->Text);
	double xmax = Convert::ToDouble(textBox4->Text);
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "") return;
	u_0 = Convert::ToDouble(textBox10->Text);
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text == "") return;
	u_1 = Convert::ToDouble(textBox11->Text);
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7->Text == "") return;
	a = Convert::ToDouble(textBox7->Text);
}

private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8->Text == "") return;
	b = Convert::ToDouble(textBox8->Text);
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9->Text == "") return;
	c = Convert::ToDouble(textBox8->Text);
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "") return;
	xmax = Convert::ToDouble(textBox2->Text);
}
};
}
