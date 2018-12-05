#pragma once;
#include <iostream>
#include "string"

using namespace std;

//HEADER FOR HOUSE CLASS

class House
{
	public:
		int points;
		string colour;
		string name;
		int House_ID;

	public:
		House* Next;
		friend ostream& operator << (ostream& output, House& object);  
};

//OVERLOADING THE EXTRACTION OPERATOR
ostream& operator << (ostream& output, House& object)
{
	output << "House Name:" << object.name << endl;
	output << "House Colour:" << object.colour << endl;
	output << "House points:" << object.points << endl;
	output << "House ID:" << object.House_ID << endl;

	return output;
}