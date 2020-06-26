#pragma once
#include <string>
#include <iostream>
#include <cmath>
namespace lator {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;

















	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(5, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(81, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(157, 362);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L",";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(5, 286);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(81, 286);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(157, 286);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 70);
			this->button6->TabIndex = 5;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(5, 210);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 70);
			this->button7->TabIndex = 6;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(81, 210);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 70);
			this->button8->TabIndex = 7;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(157, 210);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 70);
			this->button9->TabIndex = 8;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(5, 134);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 70);
			this->button10->TabIndex = 9;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(81, 134);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 70);
			this->button11->TabIndex = 10;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(157, 134);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 70);
			this->button12->TabIndex = 11;
			this->button12->Text = L"3";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(385, 210);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(70, 146);
			this->button13->TabIndex = 12;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(309, 210);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(70, 70);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(233, 286);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(70, 70);
			this->button15->TabIndex = 14;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(309, 286);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 70);
			this->button16->TabIndex = 15;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(233, 134);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(70, 70);
			this->button17->TabIndex = 16;
			this->button17->Text = L"(";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(309, 134);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(70, 70);
			this->button18->TabIndex = 17;
			this->button18->Text = L")";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(233, 362);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(222, 70);
			this->button19->TabIndex = 18;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(157, 36);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(298, 38);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(385, 134);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(70, 70);
			this->button20->TabIndex = 20;
			this->button20->Text = L"<-";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(939, 308);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(21, 17);
			this->listBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(157, 79);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(298, 39);
			this->textBox2->TabIndex = 22;
			this->textBox2->UseWaitCursor = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DimGray;
			this->label2->Location = System::Drawing::Point(5, 79);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(139, 31);
			this->label2->TabIndex = 24;
			this->label2->Text = L"ANSWER";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->button21->ForeColor = System::Drawing::SystemColors::Window;
			this->button21->Location = System::Drawing::Point(5, 36);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(140, 38);
			this->button21->TabIndex = 25;
			this->button21->Text = L"EXIT";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Fuchsia;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(233, 210);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(70, 70);
			this->button22->TabIndex = 26;
			this->button22->Text = L"^";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(-44, 452);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(648, 54);
			this->richTextBox1->TabIndex = 27;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Location = System::Drawing::Point(-21, -36);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(609, 53);
			this->richTextBox2->TabIndex = 28;
			this->richTextBox2->Text = L"";
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(460, 464);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "1";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "2";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "3";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "4";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "5";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "6";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "7";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "8";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "9";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "0";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//if (!textBox1->Text->Contains(","))
		textBox1->Text = textBox1->Text + ",";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "+";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "-";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "*";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "/";
	}
	private: System::Void button22_Click_1(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = textBox1->Text + "^";
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0)
			textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "(";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += ")";
	}

	private: System::String^ search(System::String^ text) {
		bool open = false; bool close = false;
		int open_pos = -1; int close_pos = -1;
		System::String^ text1 = "";
		for (int i = 0; i < text->Length; i++) {
			if (text[i] == '(') {
				open = true;
				open_pos = i;
			}
			if (text[i] == ')') {
				if (open) {
					close = true;
					close_pos = i;
					String^ res = calculate(text->Substring(open_pos + 1, close_pos - open_pos - 1));
					text = text->Remove(open_pos, close_pos - open_pos + 1);
					text = text->Insert(open_pos, res);
					i = 0;
					for (int j = 0; j < text->Length; j++)
						if (j != text->Length - 1) {
							if ((text[j] == '+') && (text[j + 1] == '-')) {
								for (int f = j + 1; f < text->Length; f++)
									text1 += text[f];
								text = text->Remove(j);
								text += text1;
							}
						}
					for (int j = 0; j < text->Length; j++)
						if (j != text->Length - 1) {
							if ((text[j] == '-') && (text[j + 1] == '-')) {
								text1 = "+";
								for (int f = j + 2; f < text->Length; f++)
									text1 += text[f];
								text = text->Remove(j);
								text += text1;
							}
						}
					open = false; close = false;
					open_pos = -1; close_pos = -1;
				}
				else return "Не хватает начальной скобки ";
			}
		}
		if (open && !close)
			return "Не хватает завершающей скобки";
		for (int i = 0; i < text->Length; i++) {
			if (text[i] == '(')
				search(text);
		}
		return calculate(text);
	}
		
	private: System::String^ calculate(System::String^ text) {
		listBox1->Items->Clear();
		System::String^ tmp = "";
		for (int i = 0; i < text->Length; i++) {

			if (text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/' || text[i] == '^' )
			{
				listBox1->Items->Add(tmp);
				listBox1->Items->Add(text[i]);
				tmp = "";
			}
			else tmp += text[i];
		}
		listBox1->Items->Add(tmp);
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "*" || listBox1->Items[i]->ToString() == "/" || listBox1->Items[i]->ToString() == "^") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "Ошибка";
				System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
				if (res == "Ошибка") return "Ошибка";
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->Insert(i - 1, res);
				i--;
			}
		}
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "+" || listBox1->Items[i]->ToString() == "-") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "Ошибка";
				if ((listBox1->Items[i - 1]->ToString() == "") && (listBox1->Items[i]->ToString() == "-")) {
					System::String^ res1 = "-" + listBox1->Items[i + 1]->ToString();
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res1);
					i = 0;
				}
				else {
					System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
					if (res == "Ошибка") return "Ошибка";
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res);
					i = 0;
				}
			}
		}
		return listBox1->Items[0]->ToString();
	}
			 
	private: System::String^ calc1(System::String^ n1, System::String^ d, System::String^ n2) {
		try {
			double number1 = Convert::ToDouble(n1);
			double number2 = Convert::ToDouble(n2);
			if (d == "/") {
				if (number2 != 0) {
					return (number1 / number2).ToString();
				}
				else return "Нельзя поделить на ноль";
			}
			if (d == "*") {
				return (number1 * number2).ToString();
			}
			if (d == "+")
			{
				return (number1 + number2).ToString();
			}
			if (d == "-")
			{
				return (number1 - number2).ToString();
			}
			if (d == "^")
			{
				return (pow(number1, number2)).ToString();
			}
		}
		catch (SystemException^ e1) {
			return "Ошибка";
		}
		return "Ошибка";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		search(textBox1->Text);
	}
			 System::String^ c; System::String^ c1;
	private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Text->Contains("-"))
			textBox2->Text = "-" + search(textBox1->Text);
		else textBox2->Text = search(textBox1->Text);
		c = textBox1->Text; c1 = textBox2->Text;
	}

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatAppearance->BorderColor = Color::Beige;
		
	}

	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(c1, "Previous Result");
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Text->Contains("-"))
			textBox2->Text = "-" + search(textBox1->Text);
		else textBox2->Text = search(textBox1->Text);
		c = textBox1->Text; c1 = textBox2->Text;
	}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}