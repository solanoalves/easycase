#pragma once

#include "ContentWin.h"
#include "easycase_facade.h"
using std::EasyCaseFacade;

namespace easycase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWin
	/// </summary>
	public ref class MainWin : public System::Windows::Forms::Form
	{
	public:
		MainWin(void)
		{
			InitializeComponent();
			CustomInitialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  projetoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novoToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  initialPanel;
	//Custom
	private: ContentWin^ contentWin;
	private: System::Windows::Forms::ToolStripMenuItem^  abrirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salvarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  importarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exportarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  buscarToolStripMenuItem;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		void CustomInitialize(void)
		{
			contentWin = nullptr;
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWin::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->projetoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->initialPanel = (gcnew System::Windows::Forms::Panel());
			this->abrirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salvarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->initialPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->projetoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(566, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// projetoToolStripMenuItem
			// 
			this->projetoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->novoToolStripMenuItem,
					this->abrirToolStripMenuItem, this->salvarToolStripMenuItem, this->importarToolStripMenuItem, this->exportarToolStripMenuItem,
					this->buscarToolStripMenuItem
			});
			this->projetoToolStripMenuItem->Name = L"projetoToolStripMenuItem";
			this->projetoToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->projetoToolStripMenuItem->Text = L"Projeto";
			// 
			// novoToolStripMenuItem
			// 
			this->novoToolStripMenuItem->Name = L"novoToolStripMenuItem";
			this->novoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->novoToolStripMenuItem->Text = L"Novo";
			this->novoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWin::novoToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(219, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"EasyCase";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->ImageLocation = L"C:\\Users\\solano\\Documents\\visual studio 2013\\Projects\\easycase\\easycase\\resources"
				L"\\easycase.PNG";
			this->pictureBox1->Location = System::Drawing::Point(245, 86);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 120);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(34, 311);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(481, 181);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// initialPanel
			// 
			this->initialPanel->Controls->Add(this->pictureBox1);
			this->initialPanel->Controls->Add(this->textBox1);
			this->initialPanel->Controls->Add(this->label1);
			this->initialPanel->Location = System::Drawing::Point(0, 27);
			this->initialPanel->Name = L"initialPanel";
			this->initialPanel->Size = System::Drawing::Size(566, 506);
			this->initialPanel->TabIndex = 4;
			// 
			// abrirToolStripMenuItem
			// 
			this->abrirToolStripMenuItem->Name = L"abrirToolStripMenuItem";
			this->abrirToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->abrirToolStripMenuItem->Text = L"Abrir";
			// 
			// salvarToolStripMenuItem
			// 
			this->salvarToolStripMenuItem->Name = L"salvarToolStripMenuItem";
			this->salvarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->salvarToolStripMenuItem->Text = L"Salvar";
			// 
			// importarToolStripMenuItem
			// 
			this->importarToolStripMenuItem->Name = L"importarToolStripMenuItem";
			this->importarToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->importarToolStripMenuItem->Text = L"Importar Remoto";
			// 
			// exportarToolStripMenuItem
			// 
			this->exportarToolStripMenuItem->Name = L"exportarToolStripMenuItem";
			this->exportarToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->exportarToolStripMenuItem->Text = L"Exportar Remoto";
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			// 
			// MainWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 531);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->initialPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWin";
			this->Text = L"MainWin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->initialPanel->ResumeLayout(false);
			this->initialPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void novoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		EasyCaseFacade::createProject();

		this->SuspendLayout();
		if (this->contentWin == nullptr){
			this->contentWin = gcnew ContentWin(this);
			this->Controls->Add(this->contentWin->GetContent());
		}
		System::Object^ control = this->Controls->Find(L"initialPanel", false)->GetValue(0);
		(cli::safe_cast<System::Windows::Forms::Panel^>(control))->SendToBack();
		this->contentWin->GetContent()->BringToFront();
		this->ResumeLayout(false);
		this->PerformLayout();
	}
};
}
