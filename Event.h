#pragma once;
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//HEADER FOR EVENT CLASS

class Event
{
	public:
		string Event_Type;
		string Venue;
		string Date;
		int Time;
		string Winner;
		int Event_ID;

	public:
		Event* Next;
		friend ostream& operator << (ostream& output, Event& object);
};

//OVERLOADING THE EXTRACTION OPERATOR
ostream& operator << (ostream& output, Event& object)
{
	output << "Event type:" << object.Event_Type << endl;
	output << "Event Date:" << object.Date << endl;
	output << "Event Time:" << object.Time << endl;
	output << "Event Venue:" << object.Venue << endl;
	output << "Event Winner:" << object.Winner << endl;
	output << "Event ID:" << object.Event_ID << endl;

	return output;
}