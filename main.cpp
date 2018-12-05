#pragma once;
#include "Event.h";
#include "Team.h";
#include "Player.h";
#include "House.h";
#include "Linked.h";

//Project Title: SPORTAL,
//Group Members: Usman Zaheer, Affan Muddassir.
//Welcome to our End Semester project, It is a gneneric sports portal that can be used by any organisation for sporting activities.
//The main features of our project include the use of a complex Data structure known as the Singly Linked List and operator overloading wheareas all
//remaining fundamenatal concepts of Object Oriented Programming have also been used. The Program can Add, Delete, Update and Display Data of
//all the entities that we have included in our project.

int main()
{
	//Creates instances of the coresponding Linked Lists
	Linked_List_For_Houses House1;
	Linked_List_For_Events Event1;
	Linked_List_For_Players Player1;
	Linked_List_For_Teams Team1;

	//Variables for various requirements
	int choice=0;
	int ID=-2;
	int temp, temp1, temp2, temp3, temp4, temp5;
	string str, str1, str2, str3, str4, str5;

	//Menu
	while(true)
	{
		//Code for Addition
		cout << "\t\tWelcome to the Sportal!\n\nEnter 1 for Adding,\nEnter 2 for Deleting,\nEnter 3 for updating,\nEnter 4 for display" << endl << endl;
		cin >> choice;

		//Identical to a switch case
		if(choice==1)
		{
			cout << endl;
			choice=0;
			cout << "Enter 1 for House,\nEnter 2 for Event,\nEnter 3 for Team,\nEnter 4 for Player" << endl;
			cin >> choice;
			cout << endl;
			if(choice==1)
			{
				//Requests the particulars of a House object from the user
				cout << "Enter initial points:" << endl;
				cin >> temp;
				cout << "Enter house Name:" << endl;
				cin >> str;
				cout << "Enter House ID:" << endl;
				cin >> temp1;
				cout << "Enter Colour:" << endl;
				cin >> str1;
				//Calls the class member function that carries the specified function
				House1.Add_House(temp,str,temp1,str1);
				cout << endl << "Added!" << endl;
				system("cls");
			}

			if(choice==2)
			{
				//Requests the particulars of a Event object from the user
				cout << endl << "Enter Event Name:" << endl;
				cin >> str;
				cout << "Enter Venue:" << endl;
				cin >> str1;
				cout << "Enter Date:" << endl;
				cin >> str3;
				cout << "Enter Event Time" << endl;
				cin >> temp1;
				cout << "Enter Event Winner" << endl;
				cin >> str2;
				cout << "Enter Event ID" << endl;
				cin >> temp2;
				//Calls the class member function that carries the specified function
				Event1.Add_Event(str, str1, str3, temp1, str2, temp2);
				cout << endl << "Added!" << endl;
				system("cls");
			}

			if(choice==3)
			{
				//Requests the particulars of a Team object from the user
				cout << endl << "Enter initial points:" << endl;
				cin >> temp;
				cout << "Enter house Name:" << endl;
				cin >> str;
				cout << "Enter House ID:" << endl;
				cin >> temp1;
				cout << "Enter Colour:" << endl;
				cin >> str1;	
				cout << "Enter Team ID:" << endl;
				cin >> temp2;
				cout << "Enter Team Sport:" << endl;
				cin >> str2;
				//Calls the class member function that carries the specified function
				Team1.Add_Team(temp, str, temp1, str1, temp2, str2);
				cout << endl << "Added!" << endl;
				system("cls");
			}

			if(choice==4)
			{
				//Requests the particulars of a Player object from the user
				cout <<  endl <<  "Enter initial points:" << endl;
				cin >> temp;
				cout << "Enter house Name:" << endl;
				cin >> str;
				cout << "Enter House ID:" << endl;
				cin >> temp1;
				cout << "Enter Colour:" << endl;
				cin >> str1;	
				cout << "Enter Player ID:" << endl;
				cin >> temp2;
				cout << "Enter Player Name:" << endl;
				cin >> str2;
				cout << "Enter Player Department:" << endl;
				cin >> str3;
				//Calls the class member function that carries the specified function
				Player1.Add_Player(temp, str, temp1, str1, temp2, str2, str3);
				cout << endl << "Added!" << endl;
				system("cls");
			}

			choice=0;
		}

		if(choice==2)
		{
			//Code for Deletion
			//It works on the principle that it requests the user for an ID, searches the Linked List for that object with the ID and if matched
			//deletes the coresponding object

			choice=0;
			cout << "Enter 1 for House,\nEnter 2 for Event,\nEnter 3 for Player,\nEnter 4 for Team" << endl;
			cin >> choice;
			if(choice==1)
			{
				cout << endl << "Enter ID to delete that house:" << endl;
				cin >> ID;
				House1.Delete_House(ID);
				cout << endl << "Deleted!" << endl;
				system("cls");
			}

			if(choice==2)
			{
				cout << endl << "Enter ID to delete that event:" << endl;
				cin >> ID;
				Event1.Delete_Event(ID);
				cout << endl << "Deleted!" << endl;
				system("cls");
			}

			if(choice==3)
			{
				cout << endl << "Enter ID to delete that Player:" << endl;
				cin >> ID;
				Player1.Delete_Player(ID);
				cout << endl << "Deleted!" << endl;
				system("cls");
			}

			if(choice==4)
			{
				cout << endl << "Enter ID to delete that Team:" << endl;
				cin >> ID;
				Team1.Delete_Team(ID);
				cout << endl << "Deleted!" << endl;
				system("cls");
			}

			choice=0;
		}

		if(choice==3)
		{
			//Code for Updating
			//Works on the principle that it asks the user for an ID, searches the Linked List for the object with that ID and then if matched
			//Updates the contents of that object by again asking the user to enter new data

			choice=0;
			cout << "Enter 1 for House,\nEnter 2 for Event,\nEnter 3 for Player,\nEnter 4 for Team" << endl;
			cin >> choice;
			if(choice==1)
			{
				cout << endl << "Enter ID to update that house:" << endl;
				cin >> ID;
				House1.Update_House(ID);
				cout << endl << "Updated!" << endl;
				system("cls");
			}

			if(choice==2)
			{
				cout << endl << "Enter ID to update that event:" << endl;
				cin >> ID;
				Event1.Update_Event(ID);
				cout << endl << "Updated!" << endl;
				system("cls");
			}

			if(choice==3)
			{
				cout << endl << "Enter ID to update that Player:" << endl;
				cin >> ID;
				Player1.Update_Player(ID);
				cout << endl << "Updated!" << endl;
				system("cls");
			}

			if(choice==4)
			{
				cout << endl << "Enter ID to update that Team:" << endl;
				cin >> ID;
				Team1.Update_Team(ID);
				cout << endl << "Updated!" << endl;
				system("cls");
			}

			choice=0;
		}

		if(choice==4)
		{
			//Code for Displaying all kinds of Data depending on user input. The function uses the extraction Operator overloading

			choice=0;
			cout << endl << "Enter 1 for House,\nEnter 2 for Event,\nEnter 3 for Player,\nEnter 4 for Team" << endl;
			cin >> choice;
			cout << endl;
			if(choice==1)
			{
				system("cls");
				House1.Display();
			}

			if(choice==2)
			{
				Event1.Display();
			}

			if(choice==3)
			{
				Player1.Display();
			}

			if(choice==4)
			{
				Team1.Display();
			}

			choice=0;
		}
	}

	system("pause");
	return 0;
}