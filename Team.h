#pragma once;
#include <iostream>
#include "string"
#include "House.h"

//HEADER FOR TEAM CLASS

class Team : public House
{
	public:
		string Sport;
		Team* Next;
		int Team_ID;

		friend ostream& operator << (ostream& output, Team& object);
};

//OVERLOADING THE EXTRACTION OPERATOR
ostream& operator << (ostream& output, Team& object)
{
	output << "House colour:" << object.colour << endl;
	output << "Team Name:" << object.name << endl;
	output << "Team points:" << object.points << endl;
	output << "Sport type:" << object.Sport << endl;
	output << "Team_ID:" << object.Team_ID << endl;

	return output;
}
