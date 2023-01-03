#pragma once
#include<string>
#include<iomanip>
#include<ctime>
#include <iostream>

using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	//Operators

	//Functions
	void RunMenu();
	void EndGame();
	void StartGame();
	void UseTool();
	void GoNorth();
	void GoSouth();
	void GoEast();
	void GoWest();


	// accessors
	inline bool getPlaying() const { return this->playing; }

	//Modifiers

private:
	int choice;
	bool playing;

};