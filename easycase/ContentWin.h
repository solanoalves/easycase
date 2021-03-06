#pragma once

#include "UseCaseWin.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include "easycase_facade.h"
using std::EasyCaseFacade;

namespace easycase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for ContentWin
	/// </summary>
	public ref class ContentWin : public System::Windows::Forms::Form
	{
	public:
		ContentWin(System::Windows::Forms::Form^ root)
		{
			InitializeComponent();
			parentWin = root;
			//
			//TODO: Add the constructor code here
			//
		}

		System::Windows::Forms::TabControl^ GetContent();
		System::Windows::Forms::Form^ GetParentWin();

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
			if (useCaseWin)
			{
				delete useCaseWin;
			}
			if (contentWinPanel)
			{
				delete contentWinPanel;
			}
			if (parentWin)
			{
				delete parentWin;
			}
		}
	private: static unsigned int lastReq = -1;
	private: System::Windows::Forms::Form^ parentWin;
	private: UseCaseWin^ useCaseWin;
	private: System::Windows::Forms::TabControl^  contentWinPanel;

	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  projectDescription;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  projectName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  requirement;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  requirementListBox;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  requirementHide;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  comboRequirement;



	private: System::Windows::Forms::TextBox^  projectLeader;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DateTimePicker^  endDate;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DateTimePicker^  initialDate;
	private: System::Windows::Forms::ListBox^  useCaseListBox;
	private: System::Windows::Forms::Button^  addUseCase;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;

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
			this->contentWinPanel = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->endDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->initialDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->projectLeader = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->projectDescription = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->projectName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->requirementListBox = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->requirement = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->useCaseListBox = (gcnew System::Windows::Forms::ListBox());
			this->addUseCase = (gcnew System::Windows::Forms::Button());
			this->comboRequirement = (gcnew System::Windows::Forms::TextBox());
			this->requirementHide = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->contentWinPanel->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// contentWinPanel
			// 
			this->contentWinPanel->Controls->Add(this->tabPage1);
			this->contentWinPanel->Controls->Add(this->tabPage2);
			this->contentWinPanel->Controls->Add(this->tabPage3);
			this->contentWinPanel->Location = System::Drawing::Point(0, 27);
			this->contentWinPanel->Name = L"contentWinPanel";
			this->contentWinPanel->SelectedIndex = 0;
			this->contentWinPanel->Size = System::Drawing::Size(566, 506);
			this->contentWinPanel->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->endDate);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->initialDate);
			this->tabPage1->Controls->Add(this->projectLeader);
			this->tabPage1->Controls->Add(this->label6);
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
			this->tabPage1->Enter += gcnew System::EventHandler(this, &ContentWin::tabPage1_Enter);
			// 
			// endDate
			// 
			this->endDate->Location = System::Drawing::Point(18, 210);
			this->endDate->Name = L"endDate";
			this->endDate->Size = System::Drawing::Size(200, 20);
			this->endDate->TabIndex = 4;
			this->endDate->Leave += gcnew System::EventHandler(this, &ContentWin::endDate_Leave);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"End Date";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Initial Date";
			// 
			// initialDate
			// 
			this->initialDate->Location = System::Drawing::Point(15, 154);
			this->initialDate->Name = L"initialDate";
			this->initialDate->Size = System::Drawing::Size(200, 20);
			this->initialDate->TabIndex = 3;
			this->initialDate->Leave += gcnew System::EventHandler(this, &ContentWin::initialDate_Leave);
			// 
			// projectLeader
			// 
			this->projectLeader->Location = System::Drawing::Point(15, 93);
			this->projectLeader->Name = L"projectLeader";
			this->projectLeader->Size = System::Drawing::Size(229, 20);
			this->projectLeader->TabIndex = 2;
			this->projectLeader->Leave += gcnew System::EventHandler(this, &ContentWin::projectLeader_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Project Leader";
			// 
			// projectDescription
			// 
			this->projectDescription->Location = System::Drawing::Point(15, 272);
			this->projectDescription->Multiline = true;
			this->projectDescription->Name = L"projectDescription";
			this->projectDescription->Size = System::Drawing::Size(528, 115);
			this->projectDescription->TabIndex = 5;
			this->projectDescription->Leave += gcnew System::EventHandler(this, &ContentWin::projectDescription_Leave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Description";
			// 
			// projectName
			// 
			this->projectName->Location = System::Drawing::Point(15, 35);
			this->projectName->Name = L"projectName";
			this->projectName->Size = System::Drawing::Size(229, 20);
			this->projectName->TabIndex = 1;
			this->projectName->Leave += gcnew System::EventHandler(this, &ContentWin::projectName_Leave);
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
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->requirementListBox);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->requirement);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(558, 480);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Requirements";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Enter += gcnew System::EventHandler(this, &ContentWin::tabPage2_Enter);
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
			// requirementListBox
			// 
			this->requirementListBox->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->requirementListBox->FormattingEnabled = true;
			this->requirementListBox->ItemHeight = 60;
			this->requirementListBox->Location = System::Drawing::Point(15, 180);
			this->requirementListBox->Name = L"requirementListBox";
			this->requirementListBox->Size = System::Drawing::Size(525, 244);
			this->requirementListBox->TabIndex = 3;
			this->requirementListBox->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &ContentWin::listBox1_DrawItem);
			this->requirementListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ContentWin::requirementListBox_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(214, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Confirm Requirement";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ContentWin::button1_Click);
			// 
			// requirement
			// 
			this->requirement->Location = System::Drawing::Point(15, 38);
			this->requirement->Multiline = true;
			this->requirement->Name = L"requirement";
			this->requirement->Size = System::Drawing::Size(525, 60);
			this->requirement->TabIndex = 1;
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
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->useCaseListBox);
			this->tabPage3->Controls->Add(this->addUseCase);
			this->tabPage3->Controls->Add(this->comboRequirement);
			this->tabPage3->Controls->Add(this->requirementHide);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(558, 480);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Use Cases";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Leave += gcnew System::EventHandler(this, &ContentWin::tabPage3_Leave);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(260, 450);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 24);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ContentWin::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(156, 450);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 25);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Edit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ContentWin::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 155);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Use Cases";
			// 
			// useCaseListBox
			// 
			this->useCaseListBox->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->useCaseListBox->FormattingEnabled = true;
			this->useCaseListBox->ItemHeight = 60;
			this->useCaseListBox->Location = System::Drawing::Point(12, 180);
			this->useCaseListBox->Name = L"useCaseListBox";
			this->useCaseListBox->Size = System::Drawing::Size(535, 244);
			this->useCaseListBox->TabIndex = 4;
			this->useCaseListBox->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &ContentWin::useCaseListBox_DrawItem);
			this->useCaseListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ContentWin::useCaseListBox_SelectedIndexChanged);
			// 
			// addUseCase
			// 
			this->addUseCase->Location = System::Drawing::Point(215, 101);
			this->addUseCase->Name = L"addUseCase";
			this->addUseCase->Size = System::Drawing::Size(111, 23);
			this->addUseCase->TabIndex = 3;
			this->addUseCase->Text = L"Add Use Case";
			this->addUseCase->UseVisualStyleBackColor = true;
			this->addUseCase->Click += gcnew System::EventHandler(this, &ContentWin::addUseCase_Click);
			// 
			// comboRequirement
			// 
			this->comboRequirement->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->comboRequirement->Location = System::Drawing::Point(15, 29);
			this->comboRequirement->Multiline = true;
			this->comboRequirement->Name = L"comboRequirement";
			this->comboRequirement->ReadOnly = true;
			this->comboRequirement->Size = System::Drawing::Size(517, 66);
			this->comboRequirement->TabIndex = 2;
			// 
			// requirementHide
			// 
			this->requirementHide->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->requirementHide->FormattingEnabled = true;
			this->requirementHide->ItemHeight = 60;
			this->requirementHide->Location = System::Drawing::Point(15, 29);
			this->requirementHide->Name = L"requirementHide";
			this->requirementHide->Size = System::Drawing::Size(535, 66);
			this->requirementHide->TabIndex = 1;
			this->requirementHide->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &ContentWin::comboBox1_DrawItem);
			this->requirementHide->SelectedIndexChanged += gcnew System::EventHandler(this, &ContentWin::comboBox1_SelectedIndexChanged);
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
			// ContentWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 531);
			this->Controls->Add(this->contentWinPanel);
			this->Name = L"ContentWin";
			this->Text = L"ContentWin";
			this->contentWinPanel->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void customUCListItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e){
		e->DrawBackground();
		Brush^ myBrush = Brushes::Black;
		e->Graphics->DrawString(useCaseListBox->Items[e->Index]->ToString(),
			e->Font, myBrush, e->Bounds, StringFormat::GenericDefault);
		Pen^ p = gcnew Pen(Brushes::Gainsboro, 1);
		e->Graphics->DrawLine(p, Point(e->Bounds.Left, e->Bounds.Bottom - 1), Point(e->Bounds.Right, e->Bounds.Bottom - 1));
		delete p;
		e->DrawFocusRectangle();
	}

	private: System::Void customListItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e){
		e->DrawBackground();
		Brush^ myBrush = Brushes::Black;
		e->Graphics->DrawString("R" + (e->Index+1).ToString("D3") + ": " + requirementListBox->Items[e->Index]->ToString(),
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

		EasyCaseFacade::loadRequirement(cb->SelectedIndex + 1);

		this->comboRequirement->Text = "R" + (cb->SelectedIndex+1).ToString("D3") + ": " + (cli::safe_cast<System::String^>(obj));

		this->useCaseListBox->Items->Clear();
		for each(std::string var in EasyCaseFacade::getUseCases()){
			this->useCaseListBox->Items->Add(marshal_as<String^>(var));
		}
	}
private: System::Void addUseCase_Click(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::createUseCase();

	if (String::IsNullOrEmpty(this->comboRequirement->Text)){
		MessageBox::Show(
			"Selecione um requisito",
			"Aten��o", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	} 
	else{
		this->SuspendLayout();
		if (this->useCaseWin == nullptr){
			this->useCaseWin = gcnew UseCaseWin(this->parentWin);
			this->parentWin->Controls->Add(this->useCaseWin->GetContent());
		}
		System::Object^ control = this->parentWin->Controls->Find(L"contentWinPanel", false)->GetValue(0);
		(cli::safe_cast<System::Windows::Forms::TabControl^>(control))->SendToBack();
		this->useCaseWin->GetContent()->BringToFront();
		this->ResumeLayout(false);
		this->PerformLayout();
	}
}
private: System::Void useCaseListBox_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {
	this->customUCListItem(sender, e);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->useCaseListBox->SelectedIndex >= 0){
		this->SuspendLayout();
		if (this->useCaseWin == nullptr){
			this->useCaseWin = gcnew UseCaseWin(this->parentWin);
			this->parentWin->Controls->Add(this->useCaseWin->GetContent());
		}
		System::Object^ control = this->parentWin->Controls->Find(L"contentWinPanel", false)->GetValue(0);
		(cli::safe_cast<System::Windows::Forms::TabControl^>(control))->SendToBack();
		this->useCaseWin->GetContent()->BringToFront();
		this->ResumeLayout(false);
		this->PerformLayout();
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	EasyCaseFacade::commitRequirement(marshal_as<std::string>(this->requirement->Text));
	vector<string> reqs = EasyCaseFacade::getRequirements();
	this->requirementListBox->Items->Clear();
	for (vector<string>::iterator it = reqs.begin(); it != reqs.end(); it++){
		this->requirementListBox->Items->Add(marshal_as<System::String^>(*it));
	}
	this->requirementHide->Items->Clear();
	for (int i = 0; i < this->requirementListBox->Items->Count; i++){
		this->requirementHide->Items->Add(this->requirementListBox->Items[i]);
	}
	this->requirement->Text = "";
}
private: System::Void projectName_Leave(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::setProjectName(marshal_as<std::string>(this->projectName->Text));
}
private: System::Void projectLeader_Leave(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::setProjectLeaderName(marshal_as<std::string>(this->projectLeader->Text));
}
private: System::Void initialDate_Leave(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::setProjectInitialDate(marshal_as<std::string>(this->initialDate->Text));
}
private: System::Void endDate_Leave(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::setProjectEndDate(marshal_as<std::string>(this->endDate->Text));
}
private: System::Void projectDescription_Leave(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::setProjectDescription(marshal_as<std::string>(this->projectDescription->Text));
}
private: System::Void requirementListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	if (lastReq == this->requirementListBox->SelectedIndex || this->requirementListBox->SelectedIndex < 0){
		lastReq = -1;
		this->requirementListBox->SelectedIndex = -1;
		EasyCaseFacade::unloadRequirement();
		this->requirement->Text = "";
	}
	else{
		this->requirement->Text = this->requirementListBox->SelectedItem->ToString();
		lastReq = this->requirementListBox->SelectedIndex;
		EasyCaseFacade::loadRequirement(this->requirementListBox->SelectedIndex+1);
	}
}
private: System::Void tabPage3_Leave(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::deleteUseCase();
	this->useCaseListBox->Items->Clear();
	for each (string var in EasyCaseFacade::getUseCases())
	{
		this->useCaseListBox->Items->Add(marshal_as<String^>(var));
	}
}
private: System::Void useCaseListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::loadUseCase(this->useCaseListBox->SelectedIndex + 1);
}
private: System::Void tabPage2_Enter(System::Object^  sender, System::EventArgs^  e) {
	EasyCaseFacade::unloadRequirement();

	this->comboRequirement->Text = "";
	this->requirementHide->SelectedIndex = -1;
	this->useCaseListBox->Items->Clear();
}
private: System::Void tabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
	tabPage2_Enter(sender, e);
}
};
}
