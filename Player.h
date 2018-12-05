#pragma once;
#include <iostream>
#include "string"
#include "House.h"

//HEADER FOR PLAYER CLASS

class Player : public House
{
	public:
		string Name;
		int Player_ID;
		string Department;
		Player* Next;

		friend ostream& operator << (ostream& output, Player& object);
};

//OVERLOADING THE EXTRACTION OPERATOR
ostream& operator << (ostream& output, Player& object)
{
	output << "Player Name:" << object.Name << endl;
	output << "Player ID:" << object.Player_ID << endl;
	output << "Player Department:" << object.Department << endl;
	output << "Player's House:" << object.name << endl;

	return output;
}