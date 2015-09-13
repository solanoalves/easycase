#pragma once

#include "easycase_facade.h"
using std::EasyCaseFacade;
#include <msclr\marshal_cppstd.h>
#include <string>

namespace easycase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for UseCaseWin
	/// </summary>
	public ref class UseCaseWin : public System::Windows::Forms::Form
	{
	public:
		UseCaseWin(System::Windows::Forms::Form^ root)
		{
			InitializeComponent();
			parentWin = root;
			//
			//TODO: Add the constructor code here
			//
		}

		System::Windows::Forms::TabControl^ GetContent();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UseCaseWin()
		{
			if (components)
			{
				delete components;
			}
			if (parentWin)
			{
				delete parentWin;
			}
		}

	private: System::Windows::Forms::Form^ parentWin;
	
	private: System::Windows::Forms::TextBox^  ucName;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  ucDescription;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TabControl^  useCasePanel;

	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TextBox^  precDescription;


	private: System::Windows::Forms::Label^  label5;



	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  flowDescription;

	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  poscDescription;

	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  afDescription;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  confirmPrec;

	private: System::Windows::Forms::Button^  flowConfirm;
	private: System::Windows::Forms::Button^  poscConfirm;
	private: System::Windows::Forms::Button^  afConfirm;




	private: System::Windows::Forms::Button^  doneUc;
	private: System::Windows::Forms::RadioButton^  fSystemActor;
	private: System::Windows::Forms::RadioButton^  fUserActor;
	private: System::Windows::Forms::RadioButton^  afUserActor;




	private: System::Windows::Forms::RadioButton^  afSystemActor;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ListBox^  precExistentArtifacts;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ListBox^  poscGeneratedArtifacts;


	private: System::Windows::Forms::ComboBox^  ucStatus;
	private: System::Windows::Forms::Button^  addPrecArtifact;

	private: System::Windows::Forms::TextBox^  precArtifact;
private: System::Windows::Forms::Button^  addPoscArtifact;



	private: System::Windows::Forms::TextBox^  poscArtifact;
private: System::Windows::Forms::Button^  delPrecArtifact;
private: System::Windows::Forms::Button^  delPoscArtifact;
private: System::Windows::Forms::ListBox^  precList;
private: System::Windows::Forms::ListBox^  flowList;
private: System::Windows::Forms::ListBox^  poscList;
private: System::Windows::Forms::ListBox^  afList;








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ucName = (gcnew System::Windows::Forms::TextBox());
			this->ucDescription = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->useCasePanel = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ucStatus = (gcnew System::Windows::Forms::ComboBox());
			this->doneUc = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->precList = (gcnew System::Windows::Forms::ListBox());
			this->delPrecArtifact = (gcnew System::Windows::Forms::Button());
			this->addPrecArtifact = (gcnew System::Windows::Forms::Button());
			this->precArtifact = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->precExistentArtifacts = (gcnew System::Windows::Forms::ListBox());
			this->confirmPrec = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->precDescription = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->flowList = (gcnew System::Windows::Forms::ListBox());
			this->fUserActor = (gcnew System::Windows::Forms::RadioButton());
			this->fSystemActor = (gcnew System::Windows::Forms::RadioButton());
			this->flowConfirm = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->flowDescription = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->poscList = (gcnew System::Windows::Forms::ListBox());
			this->delPoscArtifact = (gcnew System::Windows::Forms::Button());
			this->addPoscArtifact = (gcnew System::Windows::Forms::Button());
			this->poscArtifact = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->poscGeneratedArtifacts = (gcnew System::Windows::Forms::ListBox());
			this->poscConfirm = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->poscDescription = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->afList = (gcnew System::Windows::Forms::ListBox());
			this->afUserActor = (gcnew System::Windows::Forms::RadioButton());
			this->afSystemActor = (gcnew System::Windows::Forms::RadioButton());
			this->afConfirm = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->afDescription = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->useCasePanel->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Description";
			// 
			// ucName
			// 
			this->ucName->Location = System::Drawing::Point(11, 83);
			this->ucName->Multiline = true;
			this->ucName->Name = L"ucName";
			this->ucName->Size = System::Drawing::Size(536, 45);
			this->ucName->TabIndex = 4;
			// 
			// ucDescription
			// 
			this->ucDescription->Location = System::Drawing::Point(11, 171);
			this->ucDescription->Multiline = true;
			this->ucDescription->Name = L"ucDescription";
			this->ucDescription->Size = System::Drawing::Size(536, 89);
			this->ucDescription->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Status";
			// 
			// useCasePanel
			// 
			this->useCasePanel->Controls->Add(this->tabPage1);
			this->useCasePanel->Controls->Add(this->tabPage2);
			this->useCasePanel->Controls->Add(this->tabPage3);
			this->useCasePanel->Controls->Add(this->tabPage4);
			this->useCasePanel->Controls->Add(this->tabPage5);
			this->useCasePanel->Location = System::Drawing::Point(0, 27);
			this->useCasePanel->Name = L"useCasePanel";
			this->useCasePanel->SelectedIndex = 0;
			this->useCasePanel->Size = System::Drawing::Size(566, 503);
			this->useCasePanel->TabIndex = 1;
			this->useCasePanel->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &UseCaseWin::listBox_DrawItem);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->ucStatus);
			this->tabPage1->Controls->Add(this->doneUc);
			this->tabPage1->Controls->Add(this->ucDescription);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->ucName);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(558, 477);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Basic";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// ucStatus
			// 
			this->ucStatus->FormattingEnabled = true;
			this->ucStatus->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Incomplete", L"Created", L"Working", L"Revision",
					L"Done"
			});
			this->ucStatus->Location = System::Drawing::Point(11, 23);
			this->ucStatus->Name = L"ucStatus";
			this->ucStatus->Size = System::Drawing::Size(142, 21);
			this->ucStatus->TabIndex = 9;
			// 
			// doneUc
			// 
			this->doneUc->Location = System::Drawing::Point(241, 282);
			this->doneUc->Name = L"doneUc";
			this->doneUc->Size = System::Drawing::Size(75, 23);
			this->doneUc->TabIndex = 8;
			this->doneUc->Text = L"Done";
			this->doneUc->UseVisualStyleBackColor = true;
			this->doneUc->Click += gcnew System::EventHandler(this, &UseCaseWin::doneUc_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->precList);
			this->tabPage2->Controls->Add(this->delPrecArtifact);
			this->tabPage2->Controls->Add(this->addPrecArtifact);
			this->tabPage2->Controls->Add(this->precArtifact);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->precExistentArtifacts);
			this->tabPage2->Controls->Add(this->confirmPrec);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->precDescription);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(558, 477);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Pre-Conditions";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// precList
			// 
			this->precList->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->precList->FormattingEnabled = true;
			this->precList->ItemHeight = 60;
			this->precList->Location = System::Drawing::Point(6, 183);
			this->precList->Name = L"precList";
			this->precList->Size = System::Drawing::Size(551, 244);
			this->precList->TabIndex = 10;
			this->precList->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &UseCaseWin::listBox_DrawItem);
			// 
			// delPrecArtifact
			// 
			this->delPrecArtifact->Location = System::Drawing::Point(464, 96);
			this->delPrecArtifact->Name = L"delPrecArtifact";
			this->delPrecArtifact->Size = System::Drawing::Size(75, 23);
			this->delPrecArtifact->TabIndex = 9;
			this->delPrecArtifact->Text = L"Del Artifact";
			this->delPrecArtifact->UseVisualStyleBackColor = true;
			this->delPrecArtifact->Click += gcnew System::EventHandler(this, &UseCaseWin::delPrecArtifact_Click);
			// 
			// addPrecArtifact
			// 
			this->addPrecArtifact->Location = System::Drawing::Point(364, 96);
			this->addPrecArtifact->Name = L"addPrecArtifact";
			this->addPrecArtifact->Size = System::Drawing::Size(75, 23);
			this->addPrecArtifact->TabIndex = 8;
			this->addPrecArtifact->Text = L"Add Artifact";
			this->addPrecArtifact->UseVisualStyleBackColor = true;
			this->addPrecArtifact->Click += gcnew System::EventHandler(this, &UseCaseWin::addPrecArtifact_Click);
			// 
			// precArtifact
			// 
			this->precArtifact->Location = System::Drawing::Point(364, 70);
			this->precArtifact->Name = L"precArtifact";
			this->precArtifact->Size = System::Drawing::Size(175, 20);
			this->precArtifact->TabIndex = 7;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 92);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 13);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Existent Artifacts";
			// 
			// precExistentArtifacts
			// 
			this->precExistentArtifacts->FormattingEnabled = true;
			this->precExistentArtifacts->Location = System::Drawing::Point(103, 69);
			this->precExistentArtifacts->Name = L"precExistentArtifacts";
			this->precExistentArtifacts->Size = System::Drawing::Size(254, 56);
			this->precExistentArtifacts->TabIndex = 5;
			this->precExistentArtifacts->SelectedIndexChanged += gcnew System::EventHandler(this, &UseCaseWin::precExistentArtifacts_SelectedIndexChanged);
			// 
			// confirmPrec
			// 
			this->confirmPrec->Location = System::Drawing::Point(11, 124);
			this->confirmPrec->Name = L"confirmPrec";
			this->confirmPrec->Size = System::Drawing::Size(75, 23);
			this->confirmPrec->TabIndex = 4;
			this->confirmPrec->Text = L"Confirm";
			this->confirmPrec->UseVisualStyleBackColor = true;
			this->confirmPrec->Click += gcnew System::EventHandler(this, &UseCaseWin::confirmPrec_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Pre-Conditions";
			// 
			// precDescription
			// 
			this->precDescription->Location = System::Drawing::Point(11, 43);
			this->precDescription->Name = L"precDescription";
			this->precDescription->Size = System::Drawing::Size(528, 20);
			this->precDescription->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Add/Edit";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->flowList);
			this->tabPage3->Controls->Add(this->fUserActor);
			this->tabPage3->Controls->Add(this->fSystemActor);
			this->tabPage3->Controls->Add(this->flowConfirm);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->flowDescription);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(558, 477);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Flow";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// flowList
			// 
			this->flowList->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->flowList->FormattingEnabled = true;
			this->flowList->ItemHeight = 60;
			this->flowList->Location = System::Drawing::Point(15, 148);
			this->flowList->Name = L"flowList";
			this->flowList->Size = System::Drawing::Size(535, 304);
			this->flowList->TabIndex = 11;
			this->flowList->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &UseCaseWin::listBox_DrawItem);
			// 
			// fUserActor
			// 
			this->fUserActor->AutoSize = true;
			this->fUserActor->Location = System::Drawing::Point(112, 87);
			this->fUserActor->Name = L"fUserActor";
			this->fUserActor->Size = System::Drawing::Size(75, 17);
			this->fUserActor->TabIndex = 10;
			this->fUserActor->TabStop = true;
			this->fUserActor->Text = L"User Actor";
			this->fUserActor->UseVisualStyleBackColor = true;
			this->fUserActor->CheckedChanged += gcnew System::EventHandler(this, &UseCaseWin::fUserActor_CheckedChanged);
			// 
			// fSystemActor
			// 
			this->fSystemActor->AutoSize = true;
			this->fSystemActor->Location = System::Drawing::Point(19, 87);
			this->fSystemActor->Name = L"fSystemActor";
			this->fSystemActor->Size = System::Drawing::Size(87, 17);
			this->fSystemActor->TabIndex = 9;
			this->fSystemActor->TabStop = true;
			this->fSystemActor->Text = L"System Actor";
			this->fSystemActor->UseVisualStyleBackColor = true;
			this->fSystemActor->CheckedChanged += gcnew System::EventHandler(this, &UseCaseWin::fSystemActor_CheckedChanged);
			// 
			// flowConfirm
			// 
			this->flowConfirm->Location = System::Drawing::Point(467, 87);
			this->flowConfirm->Name = L"flowConfirm";
			this->flowConfirm->Size = System::Drawing::Size(75, 23);
			this->flowConfirm->TabIndex = 8;
			this->flowConfirm->Text = L"Confirm";
			this->flowConfirm->UseVisualStyleBackColor = true;
			this->flowConfirm->Click += gcnew System::EventHandler(this, &UseCaseWin::flowConfirm_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Flow";
			// 
			// flowDescription
			// 
			this->flowDescription->Location = System::Drawing::Point(15, 47);
			this->flowDescription->Name = L"flowDescription";
			this->flowDescription->Size = System::Drawing::Size(528, 20);
			this->flowDescription->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Add/Edit";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->poscList);
			this->tabPage4->Controls->Add(this->delPoscArtifact);
			this->tabPage4->Controls->Add(this->addPoscArtifact);
			this->tabPage4->Controls->Add(this->poscArtifact);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->poscGeneratedArtifacts);
			this->tabPage4->Controls->Add(this->poscConfirm);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->poscDescription);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(558, 477);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Pos-Conditions";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// poscList
			// 
			this->poscList->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->poscList->FormattingEnabled = true;
			this->poscList->ItemHeight = 60;
			this->poscList->Location = System::Drawing::Point(8, 208);
			this->poscList->Name = L"poscList";
			this->poscList->Size = System::Drawing::Size(549, 244);
			this->poscList->TabIndex = 18;
			this->poscList->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &UseCaseWin::listBox_DrawItem);
			// 
			// delPoscArtifact
			// 
			this->delPoscArtifact->Location = System::Drawing::Point(468, 99);
			this->delPoscArtifact->Name = L"delPoscArtifact";
			this->delPoscArtifact->Size = System::Drawing::Size(75, 23);
			this->delPoscArtifact->TabIndex = 17;
			this->delPoscArtifact->Text = L"Del Artifact";
			this->delPoscArtifact->UseVisualStyleBackColor = true;
			this->delPoscArtifact->Click += gcnew System::EventHandler(this, &UseCaseWin::delPoscArtifact_Click);
			// 
			// addPoscArtifact
			// 
			this->addPoscArtifact->Location = System::Drawing::Point(379, 99);
			this->addPoscArtifact->Name = L"addPoscArtifact";
			this->addPoscArtifact->Size = System::Drawing::Size(75, 23);
			this->addPoscArtifact->TabIndex = 16;
			this->addPoscArtifact->Text = L"Add Artifact";
			this->addPoscArtifact->UseVisualStyleBackColor = true;
			this->addPoscArtifact->Click += gcnew System::EventHandler(this, &UseCaseWin::addPoscArtifact_Click);
			// 
			// poscArtifact
			// 
			this->poscArtifact->Location = System::Drawing::Point(375, 73);
			this->poscArtifact->Name = L"poscArtifact";
			this->poscArtifact->Size = System::Drawing::Size(168, 20);
			this->poscArtifact->TabIndex = 15;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(15, 94);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Generated Artifacts";
			// 
			// poscGeneratedArtifacts
			// 
			this->poscGeneratedArtifacts->FormattingEnabled = true;
			this->poscGeneratedArtifacts->Location = System::Drawing::Point(119, 73);
			this->poscGeneratedArtifacts->Name = L"poscGeneratedArtifacts";
			this->poscGeneratedArtifacts->Size = System::Drawing::Size(254, 56);
			this->poscGeneratedArtifacts->TabIndex = 13;
			this->poscGeneratedArtifacts->SelectedIndexChanged += gcnew System::EventHandler(this, &UseCaseWin::poscGeneratedArtifacts_SelectedIndexChanged);
			// 
			// poscConfirm
			// 
			this->poscConfirm->Location = System::Drawing::Point(18, 152);
			this->poscConfirm->Name = L"poscConfirm";
			this->poscConfirm->Size = System::Drawing::Size(75, 23);
			this->poscConfirm->TabIndex = 12;
			this->poscConfirm->Text = L"Confirm";
			this->poscConfirm->UseVisualStyleBackColor = true;
			this->poscConfirm->Click += gcnew System::EventHandler(this, &UseCaseWin::poscConfirm_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 188);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Pos-Conditions";
			// 
			// poscDescription
			// 
			this->poscDescription->Location = System::Drawing::Point(15, 47);
			this->poscDescription->Name = L"poscDescription";
			this->poscDescription->Size = System::Drawing::Size(528, 20);
			this->poscDescription->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 23);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Add/Edit";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->afList);
			this->tabPage5->Controls->Add(this->afUserActor);
			this->tabPage5->Controls->Add(this->afSystemActor);
			this->tabPage5->Controls->Add(this->afConfirm);
			this->tabPage5->Controls->Add(this->label11);
			this->tabPage5->Controls->Add(this->afDescription);
			this->tabPage5->Controls->Add(this->label12);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(558, 477);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Alternate Flow";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// afList
			// 
			this->afList->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->afList->FormattingEnabled = true;
			this->afList->ItemHeight = 60;
			this->afList->Location = System::Drawing::Point(11, 161);
			this->afList->Name = L"afList";
			this->afList->Size = System::Drawing::Size(532, 304);
			this->afList->TabIndex = 15;
			this->afList->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &UseCaseWin::listBox_DrawItem);
			// 
			// afUserActor
			// 
			this->afUserActor->AutoSize = true;
			this->afUserActor->Location = System::Drawing::Point(112, 90);
			this->afUserActor->Name = L"afUserActor";
			this->afUserActor->Size = System::Drawing::Size(75, 17);
			this->afUserActor->TabIndex = 14;
			this->afUserActor->TabStop = true;
			this->afUserActor->Text = L"User Actor";
			this->afUserActor->UseVisualStyleBackColor = true;
			this->afUserActor->CheckedChanged += gcnew System::EventHandler(this, &UseCaseWin::afUserActor_CheckedChanged);
			// 
			// afSystemActor
			// 
			this->afSystemActor->AutoSize = true;
			this->afSystemActor->Location = System::Drawing::Point(19, 90);
			this->afSystemActor->Name = L"afSystemActor";
			this->afSystemActor->Size = System::Drawing::Size(87, 17);
			this->afSystemActor->TabIndex = 13;
			this->afSystemActor->TabStop = true;
			this->afSystemActor->Text = L"System Actor";
			this->afSystemActor->UseVisualStyleBackColor = true;
			this->afSystemActor->CheckedChanged += gcnew System::EventHandler(this, &UseCaseWin::afSystemActor_CheckedChanged);
			// 
			// afConfirm
			// 
			this->afConfirm->Location = System::Drawing::Point(468, 84);
			this->afConfirm->Name = L"afConfirm";
			this->afConfirm->Size = System::Drawing::Size(75, 23);
			this->afConfirm->TabIndex = 12;
			this->afConfirm->Text = L"Confirm";
			this->afConfirm->UseVisualStyleBackColor = true;
			this->afConfirm->Click += gcnew System::EventHandler(this, &UseCaseWin::afConfirm_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Alternate Flow";
			// 
			// afDescription
			// 
			this->afDescription->Location = System::Drawing::Point(15, 47);
			this->afDescription->Name = L"afDescription";
			this->afDescription->Size = System::Drawing::Size(528, 20);
			this->afDescription->TabIndex = 9;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 23);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Add/Edit";
			// 
			// UseCaseWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 531);
			this->Controls->Add(this->useCasePanel);
			this->Name = L"UseCaseWin";
			this->Text = L"UseCaseWin";
			this->useCasePanel->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void addPrecArtifact_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!System::String::IsNullOrEmpty(this->precArtifact->Text) && !System::String::IsNullOrWhiteSpace(this->precArtifact->Text)){
		this->precExistentArtifacts->Items->Add(this->precArtifact->Text);
		this->precArtifact->Text = "";
	}
}

private: int setPreConditionData(System::Windows::Forms::ListBox::ObjectCollection^ objCol){
	std::string str;
	string::size_type ini, fim, tki = 0, tkf;
	string desc, pc;
	vector<string> tokens;
	int cont = 0;
	for each (System::String^ var in objCol)
	{
		cont++;
		str = marshal_as<std::string>(var);
		ini = str.find("PRE-CONDITIONS:(") + 16;
		fim = str.find("). DESCRIPTION:");
		pc = str.substr(ini, fim - ini);
		tkf = pc.find(",");
		if (tkf == string::npos){
			tokens.push_back(pc);
		}
		else{
			while (tkf != string::npos){
				tokens.push_back(pc.substr(tki, tkf - tki));
				tki = tkf + 2;
				tkf = pc.find(",", tki);
			}
			tokens.push_back(pc.substr(tki, pc.size() - tki));
		}
		desc = str.substr(fim + 15, str.size() - (fim + 15));
		EasyCaseFacade::createPreCondition(desc, tokens);
	}
	if (cont == 0){
		MessageBox::Show(
			"Nenhuma Pre-Condição criada",
			"Atenção", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return 1;
	}
	return 0;
}

private: int setPosConditionData(System::Windows::Forms::ListBox::ObjectCollection^ objCol){
	std::string str;
	string::size_type ini, fim, tki = 0, tkf;
	string desc, pc;
	vector<string> tokens;
	int cont = 0;
	for each (System::String^ var in objCol)
	{
		cont++;
		str = marshal_as<std::string>(var);
		ini = str.find("POS-CONDITIONS:(") + 16;
		fim = str.find("). DESCRIPTION:");
		pc = str.substr(ini, fim - ini);
		tkf = pc.find(",");
		if (tkf == string::npos){
			tokens.push_back(pc);
		}
		else{
			while (tkf != string::npos){
				tokens.push_back(pc.substr(tki, tkf - tki));
				tki = tkf + 2;
				tkf = pc.find(",", tki);
			}
			tokens.push_back(pc.substr(tki, pc.size() - tki));
		}
		desc = str.substr(fim + 15, str.size() - (fim + 15));
		EasyCaseFacade::createPosCondition(desc, tokens);
	}
	if (cont == 0){
		MessageBox::Show(
			"Nenhuma Pos-Condição criada",
			"Atenção", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return 1;
	}
	return 0;
}
private: int setFlowParameters(System::Windows::Forms::ListBox::ObjectCollection^ objCol, int type){
	std::string str;
	string::size_type tk;
	int actor = -1;
	string description;
	int cont = 0;
	for each(System::String^ var in objCol){
		cont++;
		str = marshal_as<std::string>(var);
		tk = str.find("SYSTEM: ");
		if (tk != string::npos && tk == 0){
			actor = 0;
			description = str.substr(9, str.size() - 9);
		}
		else{
			tk = str.find("USER: ");
			if (tk != string::npos && tk == 0){
				actor = 1;
				description = str.substr(7, str.size() - 7);
			}
		}
		EasyCaseFacade::createFlowAction(description, actor, type);
	}
	if (cont == 0){
		MessageBox::Show(
			"Nenhuma Fluxo "+ (type==0?"Principal":"Alternativo") +" criado",
			"Atenção", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return 1;
	}
	return 0;
}

private: int makeMyUseCase(){
	std::string status, nome, descricao;
	if (String::IsNullOrEmpty(this->ucStatus->SelectedItem->ToString())){
		MessageBox::Show(
			"Preencha o Status do UseCase",
			"Atenção", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return 1;
	}
	else{
		status = marshal_as<std::string>(this->ucStatus->SelectedItem->ToString());
	}
	if (String::IsNullOrEmpty(this->ucName->Text)){
		MessageBox::Show(
			"Preencha o Nome do UseCase",
			"Atenção", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return 1;
	}
	else{
		nome = marshal_as<std::string>(this->ucName->Text);
	}
	if (String::IsNullOrEmpty(this->ucDescription->Text)){
		MessageBox::Show(
			"Preencha a Descrição do UseCase",
			"Atenção", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return 1;
	}
	else{
		descricao = marshal_as<std::string>(this->ucDescription->Text);
	}
	EasyCaseFacade::createUseCase(status, nome, descricao);
	return 0;
}

private: int pleaseDoTheInterfaceJob(){
	if (this->setPreConditionData(this->precList->Items) == 0){
		if (this->setPosConditionData(this->poscList->Items) == 0){
			if (this->setFlowParameters(this->flowList->Items, 0) == 0){
				if (this->setFlowParameters(this->afList->Items, 1) == 0){
					if (this->makeMyUseCase() == 0){
						return 0;
					}
				}

			}
		}
	}
	return 1;
}

private: System::Void doneUc_Click(System::Object^  sender, System::EventArgs^  e) {
	int job = this->pleaseDoTheInterfaceJob();
	this->SuspendLayout();
	System::Object^ control = this->parentWin->Controls->Find(L"contentWinPanel", false)->GetValue(0);
	System::Windows::Forms::TabControl^ tabControl = cli::safe_cast<System::Windows::Forms::TabControl^>(control);
	tabControl->BringToFront();
	System::Object^ uclistBox = tabControl->Controls->Find(L"useCaseListBox", true)->GetValue(0);
	ListBox^ listBox = cli::safe_cast<System::Windows::Forms::ListBox^>(uclistBox);
	listBox->Items->Clear();
	for each (string var in EasyCaseFacade::getUseCases())
	{
		listBox->Items->Add(marshal_as<String^>(var));
	}
	this->useCasePanel->SendToBack();
	this->ResumeLayout(false);
	this->PerformLayout();
}
private: System::Void delPrecArtifact_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->precExistentArtifacts->Items->Contains(this->precArtifact->Text)){
		this->precExistentArtifacts->Items->Remove(this->precArtifact->Text);
	}
}
private: System::Void precExistentArtifacts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	this->precArtifact->Text = cli::safe_cast<System::String^>(this->precExistentArtifacts->SelectedItem);
}
private: System::Void addPoscArtifact_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!System::String::IsNullOrEmpty(this->poscArtifact->Text) && !System::String::IsNullOrWhiteSpace(this->poscArtifact->Text)){
		this->poscGeneratedArtifacts->Items->Add(this->poscArtifact->Text);
		this->poscArtifact->Text = "";
	}
}
private: System::Void delPoscArtifact_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->poscGeneratedArtifacts->Items->Contains(this->poscArtifact->Text)){
		this->poscGeneratedArtifacts->Items->Remove(this->poscArtifact->Text);
	}
}
private: System::Void poscGeneratedArtifacts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	this->poscArtifact->Text = cli::safe_cast<System::String^>(this->poscGeneratedArtifacts->SelectedItem);
}
private: System::Void confirmPrec_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Collections::ArrayList^ al = gcnew System::Collections::ArrayList(this->precExistentArtifacts->Items);
	System::String^ precItems = gcnew System::String("PRE-CONDITIONS:(");
	for each (String^ var in al)
	{
		precItems = precItems->Concat(precItems, var, ", ");
	}
	precItems = precItems->Substring(0, precItems->Length - 2);
	precItems = precItems->Concat(precItems, ")");
	this->precList->Items->Add(
		this->precDescription->Text->Concat(precItems, ". DESCRIPTION: ", this->precDescription->Text)
	);
}
private: System::Void poscConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Collections::ArrayList^ al = gcnew System::Collections::ArrayList(this->poscGeneratedArtifacts->Items);
	System::String^ poscItems = gcnew System::String("POS-CONDITIONS:(");
	for each (String^ var in al)
	{
		poscItems = poscItems->Concat(poscItems, var, ", ");
	}
	poscItems = poscItems->Substring(0, poscItems->Length - 2);
	poscItems = poscItems->Concat(poscItems, ")");
	this->poscList->Items->Add(
		this->poscDescription->Text->Concat(poscItems, ". DESCRIPTION: ", this->poscDescription->Text)
	);
}
private: System::Void flowConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	this->flowList->Items->Add(
		(this->fSystemActor->Checked ? "SYSTEM: " : this->fUserActor->Checked ? "USER: " : "") +
		this->flowDescription->Text
	);
}
private: System::Void fSystemActor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->fSystemActor->Checked){
		this->fUserActor->Checked = false;
	}
}
private: System::Void fUserActor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->fUserActor->Checked){
		this->fSystemActor->Checked = false;
	}
}
private: System::Void afConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	this->afList->Items->Add(
		(this->afSystemActor->Checked ? "SYSTEM: " : this->afUserActor->Checked ? "USER: " : "") +
		this->afDescription->Text
	);
}
private: System::Void afSystemActor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->afSystemActor->Checked){
		this->afUserActor->Checked = false;
	}
}
private: System::Void afUserActor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->afUserActor->Checked){
		this->afSystemActor->Checked = false;
	}
}
private: System::Void customListItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e){
	e->DrawBackground();
	Brush^ myBrush = Brushes::Black;
	System::Windows::Forms::ListBox^ list = cli::safe_cast<System::Windows::Forms::ListBox^>(sender);
	e->Graphics->DrawString(list->Items[e->Index]->ToString(),
		e->Font, myBrush, e->Bounds, StringFormat::GenericDefault);
	Pen^ p = gcnew Pen(Brushes::Gainsboro, 1);
	e->Graphics->DrawLine(p, Point(e->Bounds.Left, e->Bounds.Bottom - 1), Point(e->Bounds.Right, e->Bounds.Bottom - 1));
	delete p;
	e->DrawFocusRectangle();
}

private: System::Void listBox_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {
	customListItem(sender, e);
}
};
}
