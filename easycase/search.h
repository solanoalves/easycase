#pragma once

#include "easycase_facade.h"
using std::EasyCaseFacade;
#include <msclr\marshal_cppstd.h>

namespace easycase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for search
	/// </summary>
	public ref class search : public System::Windows::Forms::Form
	{
	public:
		search(System::Windows::Forms::Form^ root)
		{
			InitializeComponent();
			parentWin = root;
			//
			//TODO: Add the constructor code here
			//
		}

		System::Windows::Forms::Panel^ GetContent();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ parentWin;
	private: System::Windows::Forms::Panel^  searchPanel;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  searchList;

	private: System::Windows::Forms::Button^  backButton;
	protected:

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
			this->searchPanel = (gcnew System::Windows::Forms::Panel());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->searchList = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->searchPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// searchPanel
			// 
			this->searchPanel->Controls->Add(this->backButton);
			this->searchPanel->Controls->Add(this->searchList);
			this->searchPanel->Controls->Add(this->label1);
			this->searchPanel->Controls->Add(this->textBox1);
			this->searchPanel->Location = System::Drawing::Point(0, 27);
			this->searchPanel->Name = L"searchPanel";
			this->searchPanel->Size = System::Drawing::Size(566, 506);
			this->searchPanel->TabIndex = 0;
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(452, 7);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(101, 32);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &search::backButton_Click);
			// 
			// searchList
			// 
			this->searchList->FormattingEnabled = true;
			this->searchList->Location = System::Drawing::Point(12, 74);
			this->searchList->Name = L"searchList";
			this->searchList->Size = System::Drawing::Size(542, 420);
			this->searchList->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Search for";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &search::textBox1_TextChanged);
			// 
			// search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 531);
			this->Controls->Add(this->searchPanel);
			this->Name = L"search";
			this->Text = L"search";
			this->searchPanel->ResumeLayout(false);
			this->searchPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->SuspendLayout();
		this->searchPanel->SendToBack();
		this->ResumeLayout(false);
		this->PerformLayout();
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	vector<string> retorno = EasyCaseFacade::search(marshal_as<std::string>(this->textBox1->Text));
	this->searchList->Items->Clear();
	if (!retorno.empty()){
		for each(std::string var in retorno){
			this->searchList->Items->Add(marshal_as<String^>(var));
		}
	}
}
};
}
