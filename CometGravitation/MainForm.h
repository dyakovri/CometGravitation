#pragma once

namespace CometGravitation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  edit_V0;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  edit_a0;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  edit_y0;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  edit_m;
	private: System::Windows::Forms::Button^  StartButton;
	private: System::Windows::Forms::Button^  StopButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  edit_sm;
	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->edit_V0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->edit_a0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->edit_y0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->edit_m = (gcnew System::Windows::Forms::NumericUpDown());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StopButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->edit_sm = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_V0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_a0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_y0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_sm))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(214, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(441, 441);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->edit_V0);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->edit_a0);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->edit_y0);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->edit_m);
			this->groupBox1->Location = System::Drawing::Point(8, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 127);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Комета";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"V₀, km/s";
			// 
			// edit_V0
			// 
			this->edit_V0->DecimalPlaces = 2;
			this->edit_V0->Location = System::Drawing::Point(76, 97);
			this->edit_V0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->edit_V0->Name = L"edit_V0";
			this->edit_V0->Size = System::Drawing::Size(118, 20);
			this->edit_V0->TabIndex = 6;
			this->edit_V0->ThousandsSeparator = true;
			this->edit_V0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"α₀, °";
			// 
			// edit_a0
			// 
			this->edit_a0->DecimalPlaces = 2;
			this->edit_a0->Location = System::Drawing::Point(76, 71);
			this->edit_a0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
			this->edit_a0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, System::Int32::MinValue });
			this->edit_a0->Name = L"edit_a0";
			this->edit_a0->Size = System::Drawing::Size(118, 20);
			this->edit_a0->TabIndex = 4;
			this->edit_a0->ThousandsSeparator = true;
			this->edit_a0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 45, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"y₀, km";
			// 
			// edit_y0
			// 
			this->edit_y0->DecimalPlaces = 2;
			this->edit_y0->Location = System::Drawing::Point(76, 45);
			this->edit_y0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->edit_y0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->edit_y0->Name = L"edit_y0";
			this->edit_y0->Size = System::Drawing::Size(118, 20);
			this->edit_y0->TabIndex = 2;
			this->edit_y0->ThousandsSeparator = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"m, kg";
			// 
			// edit_m
			// 
			this->edit_m->DecimalPlaces = 2;
			this->edit_m->Location = System::Drawing::Point(76, 19);
			this->edit_m->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->edit_m->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, System::Int32::MinValue });
			this->edit_m->Name = L"edit_m";
			this->edit_m->Size = System::Drawing::Size(118, 20);
			this->edit_m->TabIndex = 0;
			this->edit_m->ThousandsSeparator = true;
			this->edit_m->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(8, 401);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(200, 23);
			this->StartButton->TabIndex = 2;
			this->StartButton->Text = L"Начать";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MainForm::StartButton_Click);
			// 
			// StopButton
			// 
			this->StopButton->Location = System::Drawing::Point(8, 430);
			this->StopButton->Name = L"StopButton";
			this->StopButton->Size = System::Drawing::Size(200, 23);
			this->StopButton->TabIndex = 3;
			this->StopButton->Text = L"Остановить и очистить";
			this->StopButton->UseVisualStyleBackColor = true;
			this->StopButton->Click += gcnew System::EventHandler(this, &MainForm::StopButton_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->edit_sm);
			this->groupBox2->Location = System::Drawing::Point(8, 141);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 53);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Звезда";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"m, 1E10 kg";
			// 
			// edit_sm
			// 
			this->edit_sm->DecimalPlaces = 2;
			this->edit_sm->Location = System::Drawing::Point(76, 19);
			this->edit_sm->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1316134912, 2328, 0, 0 });
			this->edit_sm->Name = L"edit_sm";
			this->edit_sm->Size = System::Drawing::Size(118, 20);
			this->edit_sm->TabIndex = 6;
			this->edit_sm->ThousandsSeparator = true;
			this->edit_sm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			// 
			// timer
			// 
			this->timer->Interval = 10;
			this->timer->Tick += gcnew System::EventHandler(this, &MainForm::timer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 461);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->StopButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(680, 500);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(680, 500);
			this->Name = L"MainForm";
			this->Padding = System::Windows::Forms::Padding(5);
			this->ShowIcon = false;
			this->Text = L"Комета";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_V0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_a0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_y0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_sm))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		private:
			Comet *c;
			Graph ^gr;


		private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e) {

			double m = (double)edit_m->Value;
			double y0 = (double)edit_y0->Value;
			double a0 = (double)edit_a0->Value;
			double V0 = (double)edit_V0->Value;
			double sm = (double)edit_sm->Value;

			c = new Comet(m,y0,a0,V0,sm);

			gr = gcnew Graph(pictureBox1);
			gr->Setup("X", 200, "Y", 200);
			gr->Clear();
			gr->MakeGrid();
			gr->AddRound(0, 0, 10, Color::Yellow);

			timer->Start();
		}

		private: System::Void StopButton_Click(System::Object^  sender, System::EventArgs^  e) {
			this->timer->Stop();
			gr->Clear();
		}

		private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			c->Step();
			gr->AddGraphDot(c->get_x(), c->get_y());
		}
	};
}
