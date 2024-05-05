#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ result_label;
	protected:

	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_sum;
	private: String^ first_num = "0";
	private: char user_action;
	protected:










	private: System::Windows::Forms::Button^ button_difference;

	private: System::Windows::Forms::Button^ button_multiplication;

	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_point;



	private: System::Windows::Forms::Button^ button_division;

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button_minus_plus;
	private: System::Windows::Forms::Button^ button_percent;







	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_sum = (gcnew System::Windows::Forms::Button());
			this->button_difference = (gcnew System::Windows::Forms::Button());
			this->button_multiplication = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button_division = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_minus_plus = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result_label
			// 
			this->result_label->BackColor = System::Drawing::Color::White;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Location = System::Drawing::Point(25, 21);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(313, 61);
			this->result_label->TabIndex = 0;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::Color::Black;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button_1->Location = System::Drawing::Point(21, 184);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(75, 58);
			this->button_1->TabIndex = 1;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::Color::Black;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->ForeColor = System::Drawing::Color::White;
			this->button_2->Location = System::Drawing::Point(116, 184);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(75, 58);
			this->button_2->TabIndex = 2;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::Color::Black;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->ForeColor = System::Drawing::Color::White;
			this->button_3->Location = System::Drawing::Point(211, 184);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(75, 58);
			this->button_3->TabIndex = 3;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::Color::Black;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->ForeColor = System::Drawing::Color::White;
			this->button_4->Location = System::Drawing::Point(21, 265);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(75, 58);
			this->button_4->TabIndex = 4;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::Color::Black;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->ForeColor = System::Drawing::Color::White;
			this->button_5->Location = System::Drawing::Point(116, 265);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(75, 58);
			this->button_5->TabIndex = 5;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::Color::Black;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->ForeColor = System::Drawing::Color::White;
			this->button_6->Location = System::Drawing::Point(211, 265);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(75, 58);
			this->button_6->TabIndex = 6;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::Color::Black;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->ForeColor = System::Drawing::Color::White;
			this->button_7->Location = System::Drawing::Point(21, 349);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(75, 58);
			this->button_7->TabIndex = 7;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::Color::Black;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->ForeColor = System::Drawing::Color::White;
			this->button_8->Location = System::Drawing::Point(116, 349);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(75, 58);
			this->button_8->TabIndex = 8;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::Color::Black;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->ForeColor = System::Drawing::Color::White;
			this->button_9->Location = System::Drawing::Point(211, 349);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(75, 58);
			this->button_9->TabIndex = 9;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_sum
			// 
			this->button_sum->BackColor = System::Drawing::Color::Black;
			this->button_sum->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sum->ForeColor = System::Drawing::Color::White;
			this->button_sum->Location = System::Drawing::Point(307, 108);
			this->button_sum->Name = L"button_sum";
			this->button_sum->Size = System::Drawing::Size(75, 58);
			this->button_sum->TabIndex = 10;
			this->button_sum->Text = L"+";
			this->button_sum->UseVisualStyleBackColor = false;
			this->button_sum->Click += gcnew System::EventHandler(this, &MyForm::button_sum_Click);
			// 
			// button_difference
			// 
			this->button_difference->BackColor = System::Drawing::Color::Black;
			this->button_difference->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_difference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_difference->ForeColor = System::Drawing::Color::White;
			this->button_difference->Location = System::Drawing::Point(307, 184);
			this->button_difference->Name = L"button_difference";
			this->button_difference->Size = System::Drawing::Size(75, 58);
			this->button_difference->TabIndex = 11;
			this->button_difference->Text = L"-";
			this->button_difference->UseVisualStyleBackColor = false;
			this->button_difference->Click += gcnew System::EventHandler(this, &MyForm::button_difference_Click);
			// 
			// button_multiplication
			// 
			this->button_multiplication->BackColor = System::Drawing::Color::Black;
			this->button_multiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multiplication->ForeColor = System::Drawing::Color::White;
			this->button_multiplication->Location = System::Drawing::Point(307, 265);
			this->button_multiplication->Name = L"button_multiplication";
			this->button_multiplication->Size = System::Drawing::Size(75, 58);
			this->button_multiplication->TabIndex = 12;
			this->button_multiplication->Text = L"*";
			this->button_multiplication->UseVisualStyleBackColor = false;
			this->button_multiplication->Click += gcnew System::EventHandler(this, &MyForm::button_multiplication_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::Color::Black;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->ForeColor = System::Drawing::Color::White;
			this->button_0->Location = System::Drawing::Point(116, 433);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(170, 58);
			this->button_0->TabIndex = 14;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::Button_Number_Click);
			// 
			// button_point
			// 
			this->button_point->BackColor = System::Drawing::Color::Black;
			this->button_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_point->ForeColor = System::Drawing::Color::White;
			this->button_point->Location = System::Drawing::Point(21, 432);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(75, 58);
			this->button_point->TabIndex = 15;
			this->button_point->Text = L".";
			this->button_point->UseVisualStyleBackColor = false;
			this->button_point->Click += gcnew System::EventHandler(this, &MyForm::button_point_Click);
			// 
			// button_division
			// 
			this->button_division->BackColor = System::Drawing::Color::Black;
			this->button_division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_division->ForeColor = System::Drawing::Color::White;
			this->button_division->Location = System::Drawing::Point(307, 349);
			this->button_division->Name = L"button_division";
			this->button_division->Size = System::Drawing::Size(75, 58);
			this->button_division->TabIndex = 16;
			this->button_division->Text = L"/";
			this->button_division->UseVisualStyleBackColor = false;
			this->button_division->Click += gcnew System::EventHandler(this, &MyForm::button_division_Click);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->Location = System::Drawing::Point(364, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(28, 24);
			this->button_exit->TabIndex = 17;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// button_AC
			// 
			this->button_AC->BackColor = System::Drawing::Color::Black;
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button_AC->Location = System::Drawing::Point(21, 108);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(75, 58);
			this->button_AC->TabIndex = 18;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &MyForm::button_AC_Click);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::Color::Black;
			this->button_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equal->ForeColor = System::Drawing::Color::White;
			this->button_equal->Location = System::Drawing::Point(307, 433);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(75, 58);
			this->button_equal->TabIndex = 19;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			// 
			// button_minus_plus
			// 
			this->button_minus_plus->BackColor = System::Drawing::Color::Black;
			this->button_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus_plus->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button_minus_plus->Location = System::Drawing::Point(116, 108);
			this->button_minus_plus->Name = L"button_minus_plus";
			this->button_minus_plus->Size = System::Drawing::Size(75, 58);
			this->button_minus_plus->TabIndex = 20;
			this->button_minus_plus->Text = L"+/-";
			this->button_minus_plus->UseVisualStyleBackColor = false;
			this->button_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_plus_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::Color::Black;
			this->button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_percent->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button_percent->Location = System::Drawing::Point(211, 108);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(75, 58);
			this->button_percent->TabIndex = 21;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(404, 521);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_minus_plus);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_division);
			this->Controls->Add(this->button_point);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_multiplication);
			this->Controls->Add(this->button_difference);
			this->Controls->Add(this->button_sum);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->result_label);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
		private: System::Void Button_Number_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Button^ button = safe_cast<Button^>(sender);
			if (this->result_label->Text != "0")
			{
				this->result_label->Text = this->result_label->Text + button->Text;
			}
			else 
			{
				this->result_label->Text = button->Text;
			}
		}
		private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->result_label->Text = "0";
			this-> first_num = "0";
		}
		private: System::Void button_sum_Click(System::Object^ sender, System::EventArgs^ e)
		{
			math_action('+');
		}
		private: System::Void button_difference_Click(System::Object^ sender, System::EventArgs^ e)
		{
			math_action('-');
		}
		private: System::Void button_multiplication_Click(System::Object^ sender, System::EventArgs^ e)
		{
			math_action('*');
		}
		private: System::Void button_division_Click(System::Object^ sender, System::EventArgs^ e)
		{
			math_action('/');
		}
		private: System::Void math_action(char action)
		{
			this->first_num = this->result_label->Text;
			this->user_action = action;
			this->result_label->Text = "0";
		}

		private: System::Double from_String_to_Double(double num)
		{
			String^ integer_num;
			String^ fraction_num;
			int i = 0;
			int count = 0;
			while (this->first_num[i] != '.')
			{
				integer_num = integer_num + this->first_num[i];
				i++;
			}
			i++;
			while (i < this->first_num->Length)
			{
				fraction_num = fraction_num + this->first_num[i];
				i++;
				count++;
			}
			num = System::Convert::ToInt32(fraction_num);
			for (int j = 0; j < count; j++)
			{
				num = num / 10;
			}
			num = num + System::Convert::ToInt32(integer_num);
			return num;
		}

		private: System::String^ from_Double_to_String(String^ result_num)
		{
			int i = 0;
			String^ result = "";
			while (i < result_num->Length)
			{
				if (result_num[i] == ',')
				{
					result = result + ".";
				}
				else
				{
					result = result + result_num[i];
				}
				i++;
			}
			return result;
		}

		private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e)
		{
			double first;
			double second;
			String^ result;
			if (this->first_num->Contains("."))
			{
				first = from_String_to_Double(first);
			}
			else
			{
				first = System::Convert::ToInt32(this->first_num);
			}
			if (this->result_label->Text->Contains("."))
			{
				second = from_String_to_Double(second);
			}
			else
			{
				second = System::Convert::ToInt32(this->result_label->Text);
			}
			if (this->user_action == '+')
			{
				result = System::Convert::ToString(first + second);
			}
			else if (this->user_action == '-')
			{
				result = System::Convert::ToString(first - second);
			}
			else if (this->user_action == '*')
			{
				result = System::Convert::ToString(first * second);
			}
			else if (this->user_action == '/')
			{
				if (second == 0) 
				{
					MessageBox::Show(this, "Division by zero is prohibited", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					result = System::Convert::ToString(first / second);
				}
			}
			else if(this->user_action == '%')
			{
				result = System::Convert::ToString((first * second) / 100);
			}
			if(this->first_num->Contains("."))
			{
				this->result_label->Text = from_Double_to_String(result);
			}
			else
			{
				this->result_label->Text = result;
			}
		}
		private: System::Void button_minus_plus_Click(System::Object^ sender, System::EventArgs^ e)
		{
			double minus_plus = System::Convert::ToDouble(this->result_label->Text);
			minus_plus = minus_plus * (-1);
			this->result_label->Text = System::Convert::ToString(minus_plus);
		}
		private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e)
		{
			math_action('%');
		}
		private: System::Void button_point_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if(!this->result_label->Text->Contains("."))
			{
				this->result_label->Text = this->result_label->Text + ".";
			}
		}
	};
}