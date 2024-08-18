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
		MyForm(void);

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
	private: System::Windows::Forms::Label^ ScoreGame;

	private: System::Windows::Forms::GroupBox^ groupBoxSeting;
	private: System::Windows::Forms::Button^ ButtonSpeedSnake;

	private: System::Windows::Forms::NumericUpDown^ UpDownSpeedSnake;
	private: System::Windows::Forms::Label^ LabelSpeed;
	private: System::Windows::Forms::PictureBox^ WallLeft;

	private: System::Windows::Forms::PictureBox^ WallRight;


	private: System::Windows::Forms::PictureBox^ WallUp;
	private: System::Windows::Forms::PictureBox^ WallLow;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Button^ Alpy;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MenuRama = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pauseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exaitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GameInformation = (gcnew System::Windows::Forms::GroupBox());
			this->ScoreGame = (gcnew System::Windows::Forms::Label());
			this->groupBoxSeting = (gcnew System::Windows::Forms::GroupBox());
			this->Alpy = (gcnew System::Windows::Forms::Button());
			this->ButtonSpeedSnake = (gcnew System::Windows::Forms::Button());
			this->UpDownSpeedSnake = (gcnew System::Windows::Forms::NumericUpDown());
			this->LabelSpeed = (gcnew System::Windows::Forms::Label());
			this->WallLeft = (gcnew System::Windows::Forms::PictureBox());
			this->WallRight = (gcnew System::Windows::Forms::PictureBox());
			this->WallUp = (gcnew System::Windows::Forms::PictureBox());
			this->WallLow = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->MenuRama->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->MenuRama->Size = System::Drawing::Size(419, 24);
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
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menuToolStripMenuItem_Click);
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newGameToolStripMenuItem->Text = L"New game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// setingToolStripMenuItem
			// 
			this->setingToolStripMenuItem->Name = L"setingToolStripMenuItem";
			this->setingToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->setingToolStripMenuItem->Text = L"seting";
			// 
			// pauseToolStripMenuItem
			// 
			this->pauseToolStripMenuItem->Name = L"pauseToolStripMenuItem";
			this->pauseToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pauseToolStripMenuItem->Text = L"pause";
			this->pauseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pauseToolStripMenuItem_Click);
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->Name = L"informationToolStripMenuItem";
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			this->informationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::informationToolStripMenuItem_Click);
			// 
			// exaitToolStripMenuItem
			// 
			this->exaitToolStripMenuItem->Name = L"exaitToolStripMenuItem";
			this->exaitToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->exaitToolStripMenuItem->Text = L"exait";
			this->exaitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exaitToolStripMenuItem_Click);
			// 
			// GameInformation
			// 
			this->GameInformation->Controls->Add(this->ScoreGame);
			this->GameInformation->Location = System::Drawing::Point(10, 28);
			this->GameInformation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->GameInformation->Name = L"GameInformation";
			this->GameInformation->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->GameInformation->Size = System::Drawing::Size(150, 81);
			this->GameInformation->TabIndex = 1;
			this->GameInformation->TabStop = false;
			this->GameInformation->Text = L"game information";
			// 
			// ScoreGame
			// 
			this->ScoreGame->AutoSize = true;
			this->ScoreGame->Location = System::Drawing::Point(21, 33);
			this->ScoreGame->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ScoreGame->Name = L"ScoreGame";
			this->ScoreGame->Size = System::Drawing::Size(47, 13);
			this->ScoreGame->TabIndex = 0;
			this->ScoreGame->Text = L"Score: 0";
			// 
			// groupBoxSeting
			// 
			this->groupBoxSeting->Controls->Add(this->Alpy);
			this->groupBoxSeting->Controls->Add(this->ButtonSpeedSnake);
			this->groupBoxSeting->Controls->Add(this->UpDownSpeedSnake);
			this->groupBoxSeting->Controls->Add(this->LabelSpeed);
			this->groupBoxSeting->Location = System::Drawing::Point(183, 28);
			this->groupBoxSeting->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBoxSeting->Name = L"groupBoxSeting";
			this->groupBoxSeting->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBoxSeting->Size = System::Drawing::Size(197, 81);
			this->groupBoxSeting->TabIndex = 2;
			this->groupBoxSeting->TabStop = false;
			this->groupBoxSeting->Text = L"Seting";
			this->groupBoxSeting->Visible = false;
			this->groupBoxSeting->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxSeting_Enter);
			// 
			// Alpy
			// 
			this->Alpy->Location = System::Drawing::Point(104, 38);
			this->Alpy->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Alpy->Name = L"Alpy";
			this->Alpy->Size = System::Drawing::Size(56, 19);
			this->Alpy->TabIndex = 3;
			this->Alpy->Text = L"alpy\r\n";
			this->Alpy->UseVisualStyleBackColor = true;
			this->Alpy->Click += gcnew System::EventHandler(this, &MyForm::Alpy_Click);
			// 
			// ButtonSpeedSnake
			// 
			this->ButtonSpeedSnake->Location = System::Drawing::Point(23, 87);
			this->ButtonSpeedSnake->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonSpeedSnake->Name = L"ButtonSpeedSnake";
			this->ButtonSpeedSnake->Size = System::Drawing::Size(56, 19);
			this->ButtonSpeedSnake->TabIndex = 2;
			this->ButtonSpeedSnake->Text = L"Alpy";
			this->ButtonSpeedSnake->UseVisualStyleBackColor = true;
			// 
			// UpDownSpeedSnake
			// 
			this->UpDownSpeedSnake->Location = System::Drawing::Point(104, 15);
			this->UpDownSpeedSnake->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->UpDownSpeedSnake->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->UpDownSpeedSnake->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->UpDownSpeedSnake->Name = L"UpDownSpeedSnake";
			this->UpDownSpeedSnake->Size = System::Drawing::Size(90, 20);
			this->UpDownSpeedSnake->TabIndex = 1;
			this->UpDownSpeedSnake->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// LabelSpeed
			// 
			this->LabelSpeed->AutoSize = true;
			this->LabelSpeed->Location = System::Drawing::Point(4, 15);
			this->LabelSpeed->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelSpeed->Name = L"LabelSpeed";
			this->LabelSpeed->Size = System::Drawing::Size(103, 13);
			this->LabelSpeed->TabIndex = 0;
			this->LabelSpeed->Text = L"Output speed snake";
			// 
			// WallLeft
			// 
			this->WallLeft->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallLeft->Location = System::Drawing::Point(0, 114);
			this->WallLeft->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->WallLeft->Name = L"WallLeft";
			this->WallLeft->Size = System::Drawing::Size(11, 325);
			this->WallLeft->TabIndex = 3;
			this->WallLeft->TabStop = false;
			// 
			// WallRight
			// 
			this->WallRight->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallRight->Location = System::Drawing::Point(408, 114);
			this->WallRight->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->WallRight->Name = L"WallRight";
			this->WallRight->Size = System::Drawing::Size(11, 325);
			this->WallRight->TabIndex = 4;
			this->WallRight->TabStop = false;
			// 
			// WallUp
			// 
			this->WallUp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallUp->Location = System::Drawing::Point(0, 114);
			this->WallUp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->WallUp->Name = L"WallUp";
			this->WallUp->Size = System::Drawing::Size(419, 12);
			this->WallUp->TabIndex = 5;
			this->WallUp->TabStop = false;
			// 
			// WallLow
			// 
			this->WallLow->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->WallLow->Location = System::Drawing::Point(0, 427);
			this->WallLow->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->WallLow->Name = L"WallLow";
			this->WallLow->Size = System::Drawing::Size(419, 12);
			this->WallLow->TabIndex = 6;
			this->WallLow->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::GameForm_Update);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(419, 438);
			this->Controls->Add(this->WallLow);
			this->Controls->Add(this->WallUp);
			this->Controls->Add(this->WallRight);
			this->Controls->Add(this->WallLeft);
			this->Controls->Add(this->groupBoxSeting);
			this->Controls->Add(this->GameInformation);
			this->Controls->Add(this->MenuRama);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->MenuRama;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Danina_the_Snake";
			this->TransparencyKey = System::Drawing::Color::DimGray;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
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

		private: PictureBox^ fruit;//фрукт
		private: bool play;//начать
		private: array<PictureBox^>^ Snake;//зме€
		private: bool die;//смерть
		private: bool OneLaunch;//первый запуск
		private: int step = 10;//шаг
		private: int score = 0;//счет
		private: double updateInterval = 100;//интервал обновлени€


		private: void GeneralPosintionFruit();//генераци€ фрукта
		private: void Eating();//кушать
		private: void Movement();
		private: void EatYur();//съел себ€
		private: void GameOver();
		private: void Play();
		private: void ChackBorders();




private: System::Void Alpy_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pauseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void informationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exaitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	   
private: void GameForm_Update(Object^ obgect, EventArgs^ e);
private: System::Void groupBoxSeting_Enter(System::Object^ sender, System::EventArgs^ e);
};
}
