#pragma once

namespace easycase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ContentWin
	/// </summary>
	public ref class ContentWin : public System::Windows::Forms::Form
	{
	public:
		ContentWin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		System::Windows::Forms::TabControl^ GetContent();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ContentWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  projectDescription;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  projectName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  comboLabel;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->projectDescription = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->projectName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->comboLabel = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(566, 506);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->projectDescription);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->projectName);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(558, 480);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Project Info";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// projectDescription
			// 
			this->projectDescription->Location = System::Drawing::Point(15, 106);
			this->projectDescription->Multiline = true;
			this->projectDescription->Name = L"projectDescription";
			this->projectDescription->Size = System::Drawing::Size(528, 78);
			this->projectDescription->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Description";
			// 
			// projectName
			// 
			this->projectName->Location = System::Drawing::Point(15, 41);
			this->projectName->Name = L"projectName";
			this->projectName->Size = System::Drawing::Size(229, 20);
			this->projectName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Project Name";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(558, 480);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Requirements";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Requirements";
			// 
			// listBox1
			// 
			this->listBox1->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 60;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"um dois tres quatro cinco cinco seiz oa tudo bem um dois tres quatro cinco cinco "
					L"seiz oa tudo bem um dois tres quatro cinco cinco seiz oa tudo bem ",
					L"ble", L"bli", L"blo"
			});
			this->listBox1->Location = System::Drawing::Point(15, 180);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(525, 244);
			this->listBox1->TabIndex = 3;
			this->listBox1->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &ContentWin::listBox1_DrawItem);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(214, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Confirm Requirement";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 38);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(525, 60);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Requirement Description";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->comboLabel);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(558, 480);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Use Cases";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// comboLabel
			// 
			this->comboLabel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->comboLabel->Location = System::Drawing::Point(15, 29);
			this->comboLabel->Multiline = true;
			this->comboLabel->Name = L"comboLabel";
			this->comboLabel->ReadOnly = true;
			this->comboLabel->Size = System::Drawing::Size(517, 66);
			this->comboLabel->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ItemHeight = 60;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"um dois tres quatro cinco cinco seiz oa tudo bem um dois tres quatro cinco cinco "
					L"seiz oa tudo bem um dois tres quatro cinco cinco seiz oa tudo bem ",
					L"ble", L"bli", L"blo"
			});
			this->comboBox1->Location = System::Drawing::Point(15, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(535, 66);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &ContentWin::comboBox1_DrawItem);
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ContentWin::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Select a Requirement";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(214, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 28);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Up";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Down";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// ContentWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 531);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ContentWin";
			this->Text = L"ContentWin";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void customListItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e){
		e->DrawBackground();
		Brush^ myBrush = Brushes::Black;
		e->Graphics->DrawString("R" + (e->Index).ToString("D3") + ": " + listBox1->Items[e->Index]->ToString(),
			e->Font, myBrush, e->Bounds, StringFormat::GenericDefault);
		Pen^ p = gcnew Pen(Brushes::Gainsboro, 1);
		e->Graphics->DrawLine(p, Point(e->Bounds.Left, e->Bounds.Bottom - 1), Point(e->Bounds.Right, e->Bounds.Bottom - 1));
		delete p;
		e->DrawFocusRectangle();
	}

	private: System::Void listBox1_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {
		customListItem(sender, e);
	}

	private: System::Void comboBox1_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {
		customListItem(sender, e);
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::ComboBox^ cb = cli::safe_cast<System::Windows::Forms::ComboBox^>(sender);
		System::Object^ obj = cb->SelectedItem;
		if (obj == nullptr) return;
		this->comboLabel->Text = "R" + (cb->SelectedIndex).ToString("D3") + ": " + (cli::safe_cast<System::String^>(obj));
	}
};
}
