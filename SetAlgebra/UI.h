#pragma once
#include "TSet.h"
#include <msclr\marshal_cppstd.h>
namespace SetAlgebra {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	TSet A, B, result;


	/// <summary>
	/// Сводка для UI
	/// </summary>
	public ref class UI : public System::Windows::Forms::Form
	{
	public:
		UI(void)
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
		~UI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;




	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UI::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(641, 36);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->MaxLength = 8;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &UI::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UI::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(133, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(466, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите размер универса:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 129);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(396, 39);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите множество А:";
			this->label2->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(24, 171);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(684, 79);
			this->textBox2->TabIndex = 3;
			this->textBox2->Visible = false;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UI::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(16, 270);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(396, 39);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите множество B:";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(305, 441);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(370, 39);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Выберите операцию:\r\n";
			this->label4->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(141, 503);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 140);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &UI::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(745, 171);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 80);
			this->button4->TabIndex = 10;
			this->button4->Text = L"ОК";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &UI::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(411, 505);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 139);
			this->button2->TabIndex = 11;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &UI::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(24, 699);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(933, 118);
			this->textBox4->TabIndex = 14;
			this->textBox4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(389, 657);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 39);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Результат:";
			this->label5->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(745, 311);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 80);
			this->button5->TabIndex = 15;
			this->button5->Text = L"ОК";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &UI::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(24, 311);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(684, 79);
			this->textBox3->TabIndex = 16;
			this->textBox3->Visible = false;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UI::textBox3_KeyPress);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(679, 505);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 139);
			this->button3->TabIndex = 12;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &UI::button3_Click);
			// 
			// UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1001, 848);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"UI";
			this->Text = L"Алгебра множеств";
			this->Load += gcnew System::EventHandler(this, &UI::UI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (textBox1->Text->Length != 0 && e->KeyCode == Keys::Enter)
		{
			TSet newSet(System::Convert::ToInt32(textBox1->Text)); // Записали универс
			A = B = result = newSet;
			textBox1->ReadOnly = true;
			label2->Visible = true;
			label3->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = true;
			button5->Visible = true;
			button4->Visible = true;
			label4->Visible = true;
			label5->Visible = true;
			textBox4->Visible = true;
			button1->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
		}
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
		e->Handled = true;
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != String::Empty)
	{
		A.Erase();
		A.AddString(msclr::interop::marshal_as<string>(textBox2->Text)); // Добавляем строку в множество
		textBox2->Text = msclr::interop::marshal_as<String^>(A.ToString()); // Вписываем системную строку
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text != String::Empty)
	{
		B.Erase();
		B.AddString(msclr::interop::marshal_as<string>(textBox3->Text)); // Добавляем строку в множество
		textBox3->Text = msclr::interop::marshal_as<String^>(B.ToString()); // Вписываем системную строку
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	result = A + B;
	textBox4->Text = msclr::interop::marshal_as<String^>(result.ToString());
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	result = A * B;
	textBox4->Text = msclr::interop::marshal_as<String^>(result.ToString());

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	result = A - B;
	textBox4->Text = msclr::interop::marshal_as<String^>(result.ToString());
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsLetter(e->KeyChar))
		e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsLetter(e->KeyChar))
		e->Handled = true;
}
private: System::Void UI_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
