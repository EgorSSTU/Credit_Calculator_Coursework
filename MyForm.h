#pragma once

namespace CreditCalculatorCoursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreditCalculator
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			richTextBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox2_KeyPress);
			richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox1_KeyPress);
			richTextBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox3_KeyPress);
			richTextBox4->ReadOnly = true;
			richTextBox5->ReadOnly = true;
			richTextBox6->ReadOnly = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		}

	

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Button_Close;
	protected:

	private: System::Windows::Forms::Button^ button_Minimize;



	private: System::Windows::Forms::Label^ label_Payment;
	private: System::Windows::Forms::Label^ label_overpayment;
	private: System::Windows::Forms::Label^ label_return;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;











	protected:

	protected:


	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Button_Close = (gcnew System::Windows::Forms::Button());
			this->button_Minimize = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_Payment = (gcnew System::Windows::Forms::Label());
			this->label_overpayment = (gcnew System::Windows::Forms::Label());
			this->label_return = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Button_Close
			// 
			this->Button_Close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Button_Close->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Close->ForeColor = System::Drawing::Color::White;
			this->Button_Close->Location = System::Drawing::Point(775, 12);
			this->Button_Close->Name = L"Button_Close";
			this->Button_Close->Size = System::Drawing::Size(28, 23);
			this->Button_Close->TabIndex = 0;
			this->Button_Close->Text = L"X";
			this->Button_Close->UseVisualStyleBackColor = false;
			this->Button_Close->Click += gcnew System::EventHandler(this, &MyForm::Button_Close_Click);
			// 
			// button_Minimize
			// 
			this->button_Minimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button_Minimize->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button_Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Minimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Minimize->ForeColor = System::Drawing::Color::White;
			this->button_Minimize->Location = System::Drawing::Point(741, 12);
			this->button_Minimize->Name = L"button_Minimize";
			this->button_Minimize->Size = System::Drawing::Size(28, 23);
			this->button_Minimize->TabIndex = 1;
			this->button_Minimize->Text = L"___";
			this->button_Minimize->UseVisualStyleBackColor = false;
			this->button_Minimize->Click += gcnew System::EventHandler(this, &MyForm::button_Minimize_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(7, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 18);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Вы хотите взять:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->ForeColor = System::Drawing::Color::White;
			this->richTextBox2->Location = System::Drawing::Point(10, 36);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(178, 28);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Location = System::Drawing::Point(10, 36);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(74, 28);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(7, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 18);
			this->label2->TabIndex = 11;
			this->label2->Text = L"На срок:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(90, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"% годовых";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->richTextBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->richTextBox3->Location = System::Drawing::Point(10, 36);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(74, 28);
			this->richTextBox3->TabIndex = 13;
			this->richTextBox3->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(7, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Под процент:";
			// 
			// label_Payment
			// 
			this->label_Payment->AutoSize = true;
			this->label_Payment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Payment->ForeColor = System::Drawing::Color::White;
			this->label_Payment->Location = System::Drawing::Point(498, 128);
			this->label_Payment->Name = L"label_Payment";
			this->label_Payment->Size = System::Drawing::Size(256, 25);
			this->label_Payment->TabIndex = 5;
			this->label_Payment->Text = L"Ежемесячный платеж:";
			// 
			// label_overpayment
			// 
			this->label_overpayment->AutoSize = true;
			this->label_overpayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->label_overpayment->ForeColor = System::Drawing::Color::White;
			this->label_overpayment->Location = System::Drawing::Point(498, 262);
			this->label_overpayment->Name = L"label_overpayment";
			this->label_overpayment->Size = System::Drawing::Size(137, 25);
			this->label_overpayment->TabIndex = 6;
			this->label_overpayment->Text = L"Переплата:";
			// 
			// label_return
			// 
			this->label_return->AutoSize = true;
			this->label_return->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->label_return->ForeColor = System::Drawing::Color::White;
			this->label_return->Location = System::Drawing::Point(498, 397);
			this->label_return->Name = L"label_return";
			this->label_return->Size = System::Drawing::Size(176, 25);
			this->label_return->TabIndex = 7;
			this->label_return->Text = L"Всего вернете:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(215, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(60, 128);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 100);
			this->panel1->TabIndex = 15;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Location = System::Drawing::Point(60, 262);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(90, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"от 1 года";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->richTextBox3);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(60, 397);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 100);
			this->panel3->TabIndex = 17;
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->richTextBox4->Location = System::Drawing::Point(503, 164);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(266, 44);
			this->richTextBox4->TabIndex = 18;
			this->richTextBox4->Text = L"0";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->richTextBox5->Location = System::Drawing::Point(503, 298);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(266, 44);
			this->richTextBox5->TabIndex = 19;
			this->richTextBox5->Text = L"0";
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->richTextBox6->Location = System::Drawing::Point(503, 425);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(266, 44);
			this->richTextBox6->TabIndex = 20;
			this->richTextBox6->Text = L"0";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(311, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 73);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Расчитать!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(815, 552);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_return);
			this->Controls->Add(this->label_overpayment);
			this->Controls->Add(this->label_Payment);
			this->Controls->Add(this->button_Minimize);
			this->Controls->Add(this->Button_Close);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SberCreditCalculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_Close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button_Minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void richTextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {

			e->Handled = true;
		}
		if (System::Text::RegularExpressions::Regex::Matches(richTextBox2->Text, "\\d")->Count >= 8 && e->KeyChar != 8) {

			e->Handled = true;
		}
	}

	private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			e->Handled = true;
		}
		else {
			String^ newText = richTextBox1->Text + e->KeyChar;
			int number;
			if (Int32::TryParse(newText, number)) {
				if (number < 1 || number > 30) {
					e->Handled = true;
				}
			}
		}
	}
	private: System::Void richTextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			e->Handled = true;
		}
		else {
			String^ newText = richTextBox3->Text + e->KeyChar;
			int number;
			if (Int32::TryParse(newText, number)) {
				if (number < 1 || number > 100) {
					e->Handled = true;
				}
			}
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем значения из richTextBox2, richTextBox1 и richTextBox3
		String^ loanAmountStr = richTextBox2->Text;
		String^ loanTermStr = richTextBox1->Text;
		String^ interestRateStr = richTextBox3->Text;

		// Преобразуем строки в числа
		double loanAmount, interestRate;
		int loanTerm;
		if (!Double::TryParse(loanAmountStr, loanAmount) || !Int32::TryParse(loanTermStr, loanTerm) || !Double::TryParse(interestRateStr, interestRate)) {
			// Выводим сообщение об ошибке, если не удалось преобразовать строки в числа
			MessageBox::Show("Некорректный ввод. Убедитесь, что введены числовые значения.", "Ошибка");
			return;
		}

		// Проводим расчеты
		double monthlyPayment, totalPayment, totalInterest;
		double monthlyInterestRate = interestRate / 12 / 100;
		double powerFactor = Math::Pow(1 + monthlyInterestRate, loanTerm * 12);
		monthlyPayment = loanAmount * monthlyInterestRate * powerFactor / (powerFactor - 1);
		totalPayment = monthlyPayment * loanTerm * 12;
		totalInterest = totalPayment - loanAmount;

		// Выводим результаты в richTextBox4, richTextBox5 и richTextBox6
		richTextBox4->Text = monthlyPayment.ToString("N2"); // Ежемесячный платеж
		richTextBox5->Text = totalInterest.ToString("N2"); // Общая переплата
		richTextBox6->Text = totalPayment.ToString("N2"); // Сколько заемщик вернет банку
	}
};
}
