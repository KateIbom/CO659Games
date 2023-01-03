#include "Game.h"
#include "Hammer.h"
#include "Tool.h"
#include "Saw.h"

using namespace std;

void DisplayTitle(string title)
{
	cout << endl;
	cout << title << endl;
	cout << "============" << endl;
}

Game::Game()
{
	choice = 0;
	playing = true;
}

Game::~Game()
{

}

void Game::RunMenu()
{
	cout << endl << " MAIN MENU" << endl << endl;

	cout << " 0: Quit" << endl;
	cout << " 1: Go North" << endl;
	cout << " 2: Go South" << endl;
	cout << " 3: Go East" << endl;
	cout << " 4: Go West" << endl;
	cout << " 5: Use Tool" << endl;

	cout << endl << " Your choice > ";
	cin >> choice;

	switch (choice)
	{
		case 0:playing = false; break;
		case 1:GoNorth(); break;
		case 2:GoSouth(); break;
		case 3:GoEast(); break;
		case 4:GoWest(); break;
		case 5:UseTool(); break;
		default: break;
	}

	if(choice ==0) EndGame();
}

void Game::GoNorth()
{
	DisplayTitle("GoNorth Method");
}

void Game::GoSouth()
{
	DisplayTitle("GoSouth Method");
}

void Game::GoEast()
{
	DisplayTitle("GoEast Method");
}

void Game::GoWest()
{
	DisplayTitle("GoWest Method");
}

void Game::UseTool()
{
	DisplayTitle("UseTool Method");

	Hammer hammer(30);
	hammer.Use();
	hammer.Use(5);
	Saw saw(20);

	cout << " Total weight of tool = " << hammer.getTotalWeight() << endl;
	cout << " Total weight of tool = " << saw.getTotalWeight() << endl;

	Hammer h2(2);
	h2.Use(2);
	Saw s2(2);
	s2.Use(2);
	cout << " Total weight of tools = " << h2.getTotalWeight();
	cout << " Total weight of tools = " << s2.getTotalWeight();
}

void Game::EndGame()
{
	cout << endl << "Game has ended!\n" << endl;
}

void Game::StartGame()
{
	cout << endl << "Game has Started!\n";
}
