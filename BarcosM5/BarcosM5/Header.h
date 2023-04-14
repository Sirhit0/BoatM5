#pragma once
#include  <iostream> 
using namespace std;
class Boat
{

private:
	string name;
	int positionBoat;
	bool turbo;

public:
	//constructor
	Boat(string pName, int pPositionBoat, bool pTurbo);

	//getters
	string getName();

	int getPositionBoat();

	bool getTurbo();

	//setters
	void setName(string name);

	void setPositionBoat(int positionBoat);

	void setTurbo(bool turbo);
};

