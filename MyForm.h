#pragma once

namespace app {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ collapse;
	private: System::Windows::Forms::Label^ result;

	private: System::Windows::Forms::Button^ AC;
	private: System::Windows::Forms::Button^ plmin;
	private: System::Windows::Forms::Button^ procent;
	private: System::Windows::Forms::Button^ slesh;




	private: System::Windows::Forms::Button^ umnojit;

	private: System::Windows::Forms::Button^ nine;

	private: System::Windows::Forms::Button^ vosem;

	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ minus;


	private: System::Windows::Forms::Button^ six;

	private: System::Windows::Forms::Button^ five;

	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ plass;


	private: System::Windows::Forms::Button^ free;

	private: System::Windows::Forms::Button^ two;

	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ ravno;


	private: System::Windows::Forms::Button^ point;

	private: System::Windows::Forms::Button^ zero;

	private:double first_num;
	private:char user_action;
	private: System::Windows::Forms::Label^ a;



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
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->collapse = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->AC = (gcnew System::Windows::Forms::Button());
			this->plmin = (gcnew System::Windows::Forms::Button());
			this->procent = (gcnew System::Windows::Forms::Button());
			this->slesh = (gcnew System::Windows::Forms::Button());
			this->umnojit = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->vosem = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->plass = (gcnew System::Windows::Forms::Button());
			this->free = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->a = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(359, 12);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(29, 39);
			this->exit->TabIndex = 0;
			this->exit->Text = L"×";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Калькулятор ";
			// 
			// collapse
			// 
			this->collapse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->collapse->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->collapse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->collapse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->collapse->ForeColor = System::Drawing::Color::White;
			this->collapse->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->collapse->Location = System::Drawing::Point(328, 12);
			this->collapse->Name = L"collapse";
			this->collapse->Size = System::Drawing::Size(25, 39);
			this->collapse->TabIndex = 2;
			this->collapse->Text = L"-";
			this->collapse->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->collapse->UseVisualStyleBackColor = false;
			this->collapse->Click += gcnew System::EventHandler(this, &MyForm::collapse_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::Color::White;
			this->result->Location = System::Drawing::Point(16, 45);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(358, 96);
			this->result->TabIndex = 3;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// AC
			// 
			this->AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AC->ForeColor = System::Drawing::Color::White;
			this->AC->Location = System::Drawing::Point(16, 144);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(85, 85);
			this->AC->TabIndex = 4;
			this->AC->Text = L"AC";
			this->AC->UseVisualStyleBackColor = true;
			this->AC->Click += gcnew System::EventHandler(this, &MyForm::AC_Click);
			// 
			// plmin
			// 
			this->plmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plmin->ForeColor = System::Drawing::Color::White;
			this->plmin->Location = System::Drawing::Point(107, 144);
			this->plmin->Name = L"plmin";
			this->plmin->Size = System::Drawing::Size(85, 85);
			this->plmin->TabIndex = 5;
			this->plmin->Text = L"+/-";
			this->plmin->UseVisualStyleBackColor = true;
			// 
			// procent
			// 
			this->procent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->procent->ForeColor = System::Drawing::Color::White;
			this->procent->Location = System::Drawing::Point(198, 144);
			this->procent->Name = L"procent";
			this->procent->Size = System::Drawing::Size(85, 85);
			this->procent->TabIndex = 6;
			this->procent->Text = L"%";
			this->procent->UseVisualStyleBackColor = true;
			// 
			// slesh
			// 
			this->slesh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slesh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->slesh->ForeColor = System::Drawing::Color::White;
			this->slesh->Location = System::Drawing::Point(289, 144);
			this->slesh->Name = L"slesh";
			this->slesh->Size = System::Drawing::Size(85, 85);
			this->slesh->TabIndex = 7;
			this->slesh->Text = L"/";
			this->slesh->UseVisualStyleBackColor = true;
			this->slesh->Click += gcnew System::EventHandler(this, &MyForm::slesh_Click);
			// 
			// umnojit
			// 
			this->umnojit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->umnojit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umnojit->ForeColor = System::Drawing::Color::White;
			this->umnojit->Location = System::Drawing::Point(289, 235);
			this->umnojit->Name = L"umnojit";
			this->umnojit->Size = System::Drawing::Size(85, 60);
			this->umnojit->TabIndex = 11;
			this->umnojit->Text = L"*";
			this->umnojit->UseVisualStyleBackColor = true;
			this->umnojit->Click += gcnew System::EventHandler(this, &MyForm::umnojit_Click);
			// 
			// nine
			// 
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->ForeColor = System::Drawing::Color::White;
			this->nine->Location = System::Drawing::Point(198, 235);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(85, 60);
			this->nine->TabIndex = 10;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// vosem
			// 
			this->vosem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vosem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vosem->ForeColor = System::Drawing::Color::White;
			this->vosem->Location = System::Drawing::Point(107, 235);
			this->vosem->Name = L"vosem";
			this->vosem->Size = System::Drawing::Size(85, 60);
			this->vosem->TabIndex = 9;
			this->vosem->Text = L"8";
			this->vosem->UseVisualStyleBackColor = true;
			this->vosem->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// seven
			// 
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven->ForeColor = System::Drawing::Color::White;
			this->seven->Location = System::Drawing::Point(16, 235);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(85, 60);
			this->seven->TabIndex = 8;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// minus
			// 
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::Color::White;
			this->minus->Location = System::Drawing::Point(289, 301);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(85, 60);
			this->minus->TabIndex = 15;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// six
			// 
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six->ForeColor = System::Drawing::Color::White;
			this->six->Location = System::Drawing::Point(198, 301);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(85, 60);
			this->six->TabIndex = 14;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// five
			// 
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five->ForeColor = System::Drawing::Color::White;
			this->five->Location = System::Drawing::Point(107, 301);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(85, 60);
			this->five->TabIndex = 13;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// four
			// 
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->four->ForeColor = System::Drawing::Color::White;
			this->four->Location = System::Drawing::Point(16, 301);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(85, 60);
			this->four->TabIndex = 12;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// plass
			// 
			this->plass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plass->ForeColor = System::Drawing::Color::White;
			this->plass->Location = System::Drawing::Point(289, 367);
			this->plass->Name = L"plass";
			this->plass->Size = System::Drawing::Size(85, 60);
			this->plass->TabIndex = 19;
			this->plass->Text = L"+";
			this->plass->UseVisualStyleBackColor = true;
			this->plass->Click += gcnew System::EventHandler(this, &MyForm::plass_Click);
			// 
			// free
			// 
			this->free->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->free->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->free->ForeColor = System::Drawing::Color::White;
			this->free->Location = System::Drawing::Point(198, 367);
			this->free->Name = L"free";
			this->free->Size = System::Drawing::Size(85, 60);
			this->free->TabIndex = 18;
			this->free->Text = L"3";
			this->free->UseVisualStyleBackColor = true;
			this->free->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// two
			// 
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two->ForeColor = System::Drawing::Color::White;
			this->two->Location = System::Drawing::Point(107, 367);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(85, 60);
			this->two->TabIndex = 17;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// one
			// 
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one->ForeColor = System::Drawing::Color::White;
			this->one->Location = System::Drawing::Point(16, 367);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(85, 60);
			this->one->TabIndex = 16;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// ravno
			// 
			this->ravno->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ravno->ForeColor = System::Drawing::Color::White;
			this->ravno->Location = System::Drawing::Point(289, 433);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(85, 85);
			this->ravno->TabIndex = 23;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = true;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm::ravno_Click);
			// 
			// point
			// 
			this->point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->ForeColor = System::Drawing::Color::White;
			this->point->Location = System::Drawing::Point(198, 433);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(85, 85);
			this->point->TabIndex = 22;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = true;
			this->point->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// zero
			// 
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zero->ForeColor = System::Drawing::Color::White;
			this->zero->Location = System::Drawing::Point(16, 433);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(176, 85);
			this->zero->TabIndex = 21;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			// 
			// a
			// 
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a->ForeColor = System::Drawing::Color::White;
			this->a->Location = System::Drawing::Point(5, 2);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(375, 528);
			this->a->TabIndex = 24;
			this->a->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(392, 539);
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->point);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->plass);
			this->Controls->Add(this->free);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->umnojit);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->vosem);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->slesh);
			this->Controls->Add(this->procent);
			this->Controls->Add(this->plmin);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->collapse);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->result);
			this->Controls->Add(this->a);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Click += gcnew System::EventHandler(this, &MyForm::BtnNamber_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void collapse_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void BtnNamber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		

		if (this->result->Text == "0")
			this->result->Text = button->Text;
		else
			this->result->Text = this->result->Text + button->Text;
	}


	private: System::Void plass_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
}
	private: System::Void umnojit_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
}
	private: System::Void slesh_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
}

	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToInt32(this->result->Text);
		this->user_action = action;
		this->result->Text = "0";
	}

		private: System::Void ravno_Click(System::Object^ sender, System::EventArgs^ e) {
			double second = System::Convert::ToDouble(this->result->Text);
			double res;
			switch (this->user_action){
			case '+':
				res = this->first_num + second;
				break;
			case '-':
				res = this->first_num - second;
				break;
			case '*':
				res = this->first_num * second;
				break;
			case '/':
				if (second == 0) {
					res = 0;
					MessageBox::Show(this, "Делить на ноль нельзя!!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					res = this->first_num / second;
				}
				break;
			}
			this->result->Text = System::Convert::ToString(res);
		}
	private: System::Void AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "0";
	}

};
}
