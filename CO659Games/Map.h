#pragma once
#include "Directions.h"
#include<string>
#include "Tool.h"

using namespace std;

/// <summary>
/// A single location in the map where tools
/// may be found and used. Each location has a
/// variable number of exits that join to other
/// locations in various directions.
/// </summary>


class Location
{
public:
	Location();
	Location(string name);

	void setExit(Directions direction, Location neighbour);

	inline string getDescription()const {return this->description;}
	inline string getName() const { return this->name; }
	inline Tool getTool() const { return this->tool; }

	Location* getExit(Directions direction);
	void setDescription(string description);
	void addTool(Tool tool);

private:
	string description;
	string name;
	Location* exits[5]{ nullptr };
	Tool tool;
};

/// <summary>
/// The map is a network of interconnecting locations
/// each location must join to at least one other 
/// location
/// </summary>


class Map
{
public:
	Map();

	void CreateLocations();
	void CreateHill();
	void CreateRiver();
	void CreateForest();

	void EnterLocation(Directions nextLocation);

	Location getCurrentLocation();
	Location getStartLocation();

	void setStartLocation(Location start);

private:
	Location *startLocation;
	Location currentLocation;
	Location hill;
	Location forest;
	Location river;

};

