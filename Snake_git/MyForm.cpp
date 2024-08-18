#include "MyForm.h"
#include <cmath>
#include <ctime>


using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args_main)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Snakegit::MyForm form;
	Application::Run(% form);
	return 0;
}

struct Vector2 {
	int x, y;
};

Vector2 direction;
Vector2 positionFruitd;
Vector2 GameArena;


Snakegit::MyForm::MyForm(void)
{
	InitializeComponent();

	GameArena.x = 400;
	GameArena.y = 400;

	OneLaunch = true;
	Play();
}

void Snakegit::MyForm::GeneralPosintionFruit()
{
	Random^ rand = gcnew Random();
	positionFruitd.x = rand->Next(100, GameArena.x);
	positionFruitd.y = rand->Next(100, GameArena.y);


	for (int i = 0; i < score; ++i) {
		if (positionFruitd.x == Snake[i]->Location.X && positionFruitd.y == Snake[i]->Location.Y) {
			positionFruitd.x = 130;
			positionFruitd.y = 279;
			break;
		}
	}

	int tempX = positionFruitd.x % step;
	int tempY = positionFruitd.y % step;

	fruit->Location = Point(positionFruitd.x, positionFruitd.y);

	if (fruit->Location.X >= 390 || fruit->Location.X <= 20) {
		fruit->Location = Point(150, 200);
	}

	if (fruit->Location.Y >= 400 || fruit->Location.Y <= 150) {
		fruit->Location = Point(200, 300);
	}

	this->Controls->Add(fruit);

}

void Snakegit::MyForm::Eating()
{
	if (abs(Snake[0]->Location.X - fruit->Location.X) <= 5 &&
		abs(Snake[0]->Location.Y - fruit->Location.Y) <= 5) {
		ScoreGame->Text="Score:"+ ++score;

		
		Snake[score] = gcnew PictureBox();
		Snake[score]->Location = Point(Snake[score - 1]->Location.X + step * direction.x, Snake[score - 1]->Location.Y - step * direction.y);
		Snake[score]->BackColor = Color::Green;
		Snake[score]->Width = step;
		Snake[score]->Height = step;
		this->Controls->Add(Snake[score]);

		GeneralPosintionFruit();
	}
}

void Snakegit::MyForm::Movement()
{
	for (int i = score; i >= 1; --i)
		Snake[i]->Location = Snake[i - 1]->Location;

	Snake[0]->Location = Point(Snake[0]->Location.X + direction.x * step, Snake[0] -> Location.Y + direction.y * step);
}

void Snakegit::MyForm::EatYur()
{
	for (int i = 1; i < score; ++i) {
		if (Snake[0]->Location == Snake[i]->Location) {
			GameOver();
		}
	}
}

void Snakegit::MyForm::GameOver()
{
	play = true;
	die = true;
	OneLaunch = true;
	Snake[0]->Location = Point(1000, 1000);
	fruit ->Location = Point(1200, 1200);
	for (int i = 1; i <= score; ++i) {
		Snake[i]->Location = Point(1000+i, 1000+i);
	}

}

void Snakegit::MyForm::Play()
{
	if (!OneLaunch) {
		this->Controls->Remove(fruit);

		for (int i = 0; i < score; ++i) {
			this->Controls->Remove(Snake[i]);
		}


		score = 0;
	}

	else {
		OneLaunch = false;

		Snake = gcnew array <PictureBox^, 1>(400);
		Snake[0] = gcnew PictureBox();
		Snake[0]->Location = Point(200, 200);
		Snake[0]->BackColor = Color::Red;
		Snake[0]->Width = step;
		Snake[0]->Height = step;

		score = 0;
		this->Controls->Add(Snake[0]);

		fruit = gcnew PictureBox();
		fruit->BackColor = Color::Purple;
		fruit->Width = step;
		fruit->Height = step;
		GeneralPosintionFruit();

		timer->Interval = updateInterval;
		timer->Start();

		direction.x = 1;
		direction.y = 0;

		play = true;
		die = false;

		ScoreGame->Text = "Score: 0";

		groupBoxSeting->Visible = false;
	}
}

void Snakegit::MyForm::ChackBorders()
{
	if (Snake[0]->Location.X >= 400 || Snake[0]->Location.X <= 10) {
		GameOver();
	}

	if (Snake[0]->Location.Y >= 415 || Snake[0]->Location.Y <= 127) {
		GameOver();
	}
}



System::Void Snakegit::MyForm::Alpy_Click(System::Object^ sender, System::EventArgs^ e)
{

	updateInterval = Convert::ToSingle(UpDownSpeedSnake->Value);
	timer->Interval = updateInterval;

	Alpy->Enabled = false;
	UpDownSpeedSnake->Enabled = false;
	groupBoxSeting->Visible = false;

	play = true;
	timer->Start();
	return System::Void();
}

System::Void Snakegit::MyForm::menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxSeting->Visible == false) {
		play = false;

		Alpy->Enabled = true;
		UpDownSpeedSnake->Enabled = true;
		groupBoxSeting->Visible = true;
	}

	else {
		play = true;
		timer->Start();

		Alpy->Enabled = false;
		UpDownSpeedSnake->Enabled = false;
		groupBoxSeting->Visible = false;
	}
}

System::Void Snakegit::MyForm::newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Play();
	return System::Void();
}

System::Void Snakegit::MyForm::pauseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) {
		play = false;
	}

	else {
		play = true;
		timer->Start();
	}

	return System::Void();
}

System::Void Snakegit::MyForm::informationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Вправо\tстрелка вправо\nВлево\tстрелка влево\nВверх\tстрелка вверх\nВниз\tстрелка вниз");

	return System::Void();
}

System::Void Snakegit::MyForm::exaitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Snakegit::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if ((e->KeyCode.ToString()=="Right" && score ==0)|| 
		(e->KeyCode.ToString() == "Right" && direction.x != -1 && direction.y != 0)) {
		direction.x = 1;
		direction.y = 0;
	}

	if ((e->KeyCode.ToString() == "Left" && score == 0) ||
		(e->KeyCode.ToString() == "Left" && direction.x != 1 && direction.y != 0)) {
		direction.x = -1;
		direction.y = 0;
	}

	if ((e->KeyCode.ToString() == "Down" && score == 0) ||
		(e->KeyCode.ToString() == "Down" && direction.x != 0 && direction.y != -1)) {
		direction.x = 0;
		direction.y = 1;
	}

	if ((e->KeyCode.ToString() == "Up" && score == 0) ||
		(e->KeyCode.ToString() == "Up" && direction.x != 0 && direction.y != 1)) {
		direction.x = 0;
		direction.y = -1;
	}


	return System::Void();
}

void Snakegit::MyForm::GameForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play) {
		Movement();

		Eating();
		EatYur();
		ChackBorders();
	}

	else if(die && play){
		timer->Stop();
		MessageBox::Show("Stop");
	}

	else if (!die && !play) {
		timer->Stop();
		MessageBox::Show("Pause");
	}	
}

System::Void Snakegit::MyForm::groupBoxSeting_Enter(System::Object^ sender, System::EventArgs^ e)
{
	
}



