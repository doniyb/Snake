#pragma once

namespace Snakegit {

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
	private: System::Windows::Forms::MenuStrip^ MenuRama;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pauseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ informationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exaitToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ GameInformation;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBoxSeting;
	private: System::Windows::Forms::Button^ ButtonSpeedSnake;

	private: System::Windows::Forms::NumericUpDown^ UpDownSpeedSnake;
	private: System::Windows::Forms::Label^ LabelSpeed;
	private: System::Windows::Forms::PictureBox^ WallLeft;

	private: System::Windows::Forms::PictureBox^ WallRight;


	private: System::Windows::Forms::PictureBox^ WallUp;
	private: System::Windows::Forms::PictureBox^ WallLow;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->MenuRama = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pauseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exaitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GameInformation = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSeting = (gcnew System::Windows::Forms::GroupBox());
			this->LabelSpeed = (gcnew System::Windows::Forms::Label());
			this->UpDownSpeedSnake = (gcnew System::Windows::Forms::NumericUpDown());
			this->ButtonSpeedSnake = (gcnew System::Windows::Forms::Button());
			this->WallLeft = (gcnew System::Windows::Forms::PictureBox());
			this->WallRight = (gcnew System::Windows::Forms::PictureBox());
			this->WallUp = (gcnew System::Windows::Forms::PictureBox());
			this->WallLow = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->MenuRama->SuspendLayout();
			this->GameInformation->SuspendLayout();
			this->groupBoxSeting->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownSpeedSnake))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallUp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallLow))->BeginInit();
			this->SuspendLayout();
			// 
			// MenuRama
			// 
			this->MenuRama->ImageScalingSize = System::Drawing::Size(20, 20);
			this->MenuRama->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->informationToolStripMenuItem, this->exaitToolStripMenuItem
			});
			this->MenuRama->Location = System::Drawing::Point(0, 0);
			this->MenuRama->Name = L"MenuRama";
			this->MenuRama->Size = System::Drawing::Size(559, 28);
			this->MenuRama->TabIndex = 0;
			this->MenuRama->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->setingToolStripMenuItem, this->pauseToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->newGameToolStripMenuItem->Text = L"New game";
			// 
			// setingToolStripMenuItem
			// 
			this->setingToolStripMenuItem->Name = L"setingToolStripMenuItem";
			this->setingToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->setingToolStripMenuItem->Text = L"seting";
			// 
			// pauseToolStripMenuItem
			// 
			this->pauseToolStripMenuItem->Name = L"pauseToolStripMenuItem";
			this->pauseToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->pauseToolStripMenuItem->Text = L"pause";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->Name = L"informationToolStripMenuItem";
			this->informationToolStripMenuItem->Size = System::Drawing::Size(101, 24);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// exaitToolStripMenuItem
			// 
			this->exaitToolStripMenuItem->Name = L"exaitToolStripMenuItem";
			this->exaitToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->exaitToolStripMenuItem->Text = L"exait";
			// 
			// GameInformation
			// 
			this->GameInformation->Controls->Add(this->label1);
			this->GameInformation->Location = System::Drawing::Point(13, 34);
			this->GameInformation->Name = L"GameInformation";
			this->GameInformation->Size = System::Drawing::Size(200, 100);
			this->GameInformation->TabIndex = 1;
			this->GameInformation->TabStop = false;
			this->GameInformation->Text = L"game information";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Score: 0";
			// 
			// groupBoxSeting
			// 
			this->groupBoxSeting->Controls->Add(this->ButtonSpeedSnake);
			this->groupBoxSeting->Controls->Add(this->UpDownSpeedSnake);
			this->groupBoxSeting->Controls->Add(this->LabelSpeed);
			this->groupBoxSeting->Location = System::Drawing::Point(244, 34);
			this->groupBoxSeting->Name = L"groupBoxSeting";
			this->groupBoxSeting->Size = System::Drawing::Size(200, 100);
			this->groupBoxSeting->TabIndex = 2;
			this->groupBoxSeting->TabStop = false;
			this->groupBoxSeting->Text = L"Seting";
			this->groupBoxSeting->Visible = false;
			// 
			// LabelSpeed
			// 
			this->LabelSpeed->AutoSize = true;
			this->LabelSpeed->Location = System::Drawing::Point(28, 47);
			this->LabelSpeed->Name = L"LabelSpeed";
			this->LabelSpeed->Size = System::Drawing::Size(127, 16);
			this->LabelSpeed->TabIndex = 0;
			this->LabelSpeed->Text = L"Output speed snake";
			// 
			// UpDownSpeedSnake
			// 
			this->UpDownSpeedSnake->Location = System::Drawing::Point(31, 78);
			this->UpDownSpeedSnake->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->UpDownSpeedSnake->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->UpDownSpeedSnake->Name = L"UpDownSpeedSnake";
			this->UpDownSpeedSnake->Size = System::Drawing::Size(120, 22);
			this->UpDownSpeedSnake->TabIndex = 1;
			this->UpDownSpeedSnake->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// ButtonSpeedSnake
			// 
			this->ButtonSpeedSnake->Location = System::Drawing::Point(31, 107);
			this->ButtonSpeedSnake->Name = L"ButtonSpeedSnake";
			this->ButtonSpeedSnake->Size = System::Drawing::Size(75, 23);
			this->ButtonSpeedSnake->TabIndex = 2;
			this->ButtonSpeedSnake->Text = L"Alpy";
			this->ButtonSpeedSnake->UseVisualStyleBackColor = true;
			// 
			// WallLeft
			// 
			this->WallLeft->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallLeft->Location = System::Drawing::Point(0, 140);
			this->WallLeft->Name = L"WallLeft";
			this->WallLeft->Size = System::Drawing::Size(15, 400);
			this->WallLeft->TabIndex = 3;
			this->WallLeft->TabStop = false;
			// 
			// WallRight
			// 
			this->WallRight->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallRight->Location = System::Drawing::Point(544, 140);
			this->WallRight->Name = L"WallRight";
			this->WallRight->Size = System::Drawing::Size(15, 400);
			this->WallRight->TabIndex = 4;
			this->WallRight->TabStop = false;
			// 
			// WallUp
			// 
			this->WallUp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallUp->Location = System::Drawing::Point(0, 141);
			this->WallUp->Name = L"WallUp";
			this->WallUp->Size = System::Drawing::Size(559, 15);
			this->WallUp->TabIndex = 5;
			this->WallUp->TabStop = false;
			// 
			// WallLow
			// 
			this->WallLow->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallLow->Location = System::Drawing::Point(0, 525);
			this->WallLow->Name = L"WallLow";
			this->WallLow->Size = System::Drawing::Size(559, 15);
			this->WallLow->TabIndex = 6;
			this->WallLow->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(559, 539);
			this->Controls->Add(this->WallLow);
			this->Controls->Add(this->WallUp);
			this->Controls->Add(this->WallRight);
			this->Controls->Add(this->WallLeft);
			this->Controls->Add(this->groupBoxSeting);
			this->Controls->Add(this->GameInformation);
			this->Controls->Add(this->MenuRama);
			this->MainMenuStrip = this->MenuRama;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->MenuRama->ResumeLayout(false);
			this->MenuRama->PerformLayout();
			this->GameInformation->ResumeLayout(false);
			this->GameInformation->PerformLayout();
			this->groupBoxSeting->ResumeLayout(false);
			this->groupBoxSeting->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownSpeedSnake))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallUp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallLow))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
