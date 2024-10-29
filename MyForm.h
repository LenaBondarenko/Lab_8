#pragma once
#include <cstdlib>
#include <ctime>

namespace Lab8 {

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
			srand(time(0));
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(29, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(614, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Створити стек цілих чисел. Обчислити добуток непарних елементів стеку.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(44, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть розмір стеку";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(222, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(110, 144);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(177, 211);
			this->listBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(362, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 50);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Додати елемент до стеку";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(362, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 50);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Видалити елемент";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(362, 293);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 50);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Обчислити добуток";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(667, 413);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:System::Collections::Generic::Stack<int>^ myStack1;
		int count = 0;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int size = Convert::ToInt32(textBox1->Text);
		if (count < size) {
			int randomValue = rand() % 100;
			myStack1->Push(randomValue);
			listBox1->Items->Insert(0, randomValue.ToString());
			count++;
		}
		else {
			MessageBox::Show("Досягнуто ліміт чисел");
		}
	};

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (myStack1->Count > 0) {
			myStack1->Pop();
			listBox1->Items->Clear();
			for each (int value in myStack1) {
				listBox1->Items->Add(value.ToString());
			}
		}
		else {
			listBox1->Items->Add("Стек порожній");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int product = 1;
		bool hasOdd = false;

		for (int i = 0; i < listBox1->Items->Count; i++) {
			int value = System::Convert::ToInt32(listBox1->Items[i]);

			if (value % 2 != 0) {  // Перевірка на непарність
				product *= value;
				hasOdd = true;
			}
		}

		if (hasOdd) {
			MessageBox::Show(product.ToString());
		}
		else {
			MessageBox::Show("Немає непарних елементів у стеку");
		}
	}
	};
}