#pragma once;
#include <iostream>
#include <string>
#include <vector>
#include "Event.h";
#include "Team.h";
#include "Player.h";
#include "House.h";

//HEADER FOR ALL LINKED LISTS

class Linked_List_For_Houses
{
	public:
		House* first;

	public:
		void Add_House(int a, string b, int c, string d);
		void Delete_House(int ID);
		void Display();
		void Update_House(int Index);

		Linked_List_For_Houses()
		{
			first=NULL;
		}
};

void Linked_List_For_Houses::Add_House(int a, string b, int c, string d)
{
		House * newlink = new House;

		newlink->points=a;
		newlink->name=b;
		newlink->House_ID=c;
		newlink->colour=d;

		House* current = first;
		House* previous = NULL;

		 while(current!=NULL)
		 {
			 previous = current;
			 current = current->Next;
		 }

		if(previous==NULL)
		{
			newlink->Next=first;
			first = newlink;
		}

		else
		{
			// estabiling link in the linked list
			previous->Next = newlink; 
			newlink->Next = current;		 
		}
	      
		cout<<"Inserted "<<endl;

}

void Linked_List_For_Houses::Delete_House(int ID)
{
	if(first == NULL)
	{
			return ;	
	}

	else if(first->House_ID == ID)
	{
		House* tmp = first;
		first= first->Next;
		delete tmp;

	}

	else
	{
		House* current = first->Next;
		House* previous = first;
	   

		while(current!=NULL && current->House_ID != ID)
		{
			previous = current;
			current = current->Next;
		}

		if(current !=NULL)
		{
			previous->Next = current->Next;
			delete current;
		}

		else
		{
			cout<<"No node with value "<<endl;
		}
	}
}

void Linked_List_For_Houses::Display()
{
	House* current = first; 
	while( current != NULL )
	{
		cout << *current << endl; 
		current = current->Next; 
	}

	cout<<"End of display LinkedList "<<endl << endl;
}

void Linked_List_For_Houses::Update_House(int index)
{
	House * Current=first;
	while(Current != NULL || Current->House_ID!=index)
	{
		Current= Current->Next;
	}

	if (Current->House_ID == index)
	{

		cout << "Enter New House colour:" << endl;
		cin >> Current->colour;
		cout << "Enter New House ID:" << endl;
		cin >> Current->House_ID;
		cout << "Enter New House Name:" << endl;
		cin >> Current->name;
		cout << "Enter New House points:" << endl;
		cin >> Current->points;
	}

	else 
	{
		cout << "not found" << endl;
	}

}

class Linked_List_For_Events
{
	private:
		Event* first;

	public:
		void Add_Event(string str, string str1, string str3, int temp1, string str2, int temp2);
		void Delete_Event(int ID);
		void Display();
		void Update_Event(int Index);

		Linked_List_For_Events()
		{
			first=NULL;
		}
};

void Linked_List_For_Events::Add_Event(string str, string str1, string str3, int temp1, string str2, int temp2)
{
		Event * newlink = new Event;
		
		newlink->Event_Type=str;
		newlink->Venue=str1;
		newlink->Date=str3;
		newlink->Time=temp1;
		newlink->Winner=str2;
		newlink->Event_ID=temp2;

		Event* current = first;
		Event* previous = NULL;

		 while(current!=NULL)
		 {
			 previous = current;
			 current = current->Next;
		 }

		if(previous==NULL)
		{
			newlink->Next=first;
			first = newlink;
		}
		
		else
		{
			// estabiling link in the linked list
			previous->Next = newlink; 
			newlink->Next = current;		 
		}
	      
		cout<<"Inserted "<<endl;

}

void Linked_List_For_Events::Delete_Event(int ID)
{
	if(first == NULL)
	{
			return ;	
	}

	else if(first->Event_ID == ID)
	{
		Event* tmp = first;
		first= first->Next;
		delete tmp;
	}
	
	else
		{
			Event* current = first->Next;
			Event* previous = first;
	   

			while(current!=NULL && current->Event_ID != ID)
			{
				previous = current;
				current = current->Next;
			}

			if(current !=NULL)
			{
				previous->Next = current->Next;
				delete current;
			}

			else
			{
				cout<<"ID not present "<<endl;
			}

		}
}

void Linked_List_For_Events::Display()
{
	Event* current = first; 
	while( current != NULL )
	{
		cout << *current << endl; 
		current = current->Next; 
	}

	cout<<"End of List "<<endl << endl;
}

void Linked_List_For_Events::Update_Event(int index)
{
	Event * Current=first;
	while(Current != NULL &&Current->Event_ID==index)
	{
		Current= Current->Next;
	}

	if (Current->Event_ID == index)
	{

		cout << "Enter New Event:" << endl;
		cin >> Current->Event_Type;
		cout << "Enter New Event ID:" << endl;
		cin >> Current->Event_ID;
		cout << "Enter New Event Time:" << endl;
		cin >> Current->Time;
		cout << "Enter New Event Date:" << endl;
		cin >> Current->Date;
		cout << "Enter New Event Venue:" << endl;
		cin >> Current->Venue;
		cout << "Enter New Winner:" << endl;
		cin >> Current->Winner;
	}

	else 
	{
		cout << "Event not found" << endl;
	}

}

class Linked_List_For_Teams
{
	public:
		Team* first;

	public:
		void Add_Team(int temp, string str, int temp1, string str1, int temp2, string str2);
		void Delete_Team(int ID);
		void Display();
		void Update_Team(int Index);

		Linked_List_For_Teams()
		{
			first=NULL;
		}
};

void Linked_List_For_Teams::Add_Team(int temp, string str, int temp1, string str1, int temp2, string str2)
{
		Team * newlink = new Team;
		
		newlink->points=temp;
		newlink->name=str;
		newlink->House_ID=temp1;
		newlink->colour=str1;
		newlink->Team_ID=temp2;
		newlink->Sport=str2;

		Team* current = first;
		Team* previous = NULL;

		 while(current!=NULL)
		 {
			 previous = current;
			 current = current->Next;
		 }

		if(previous==NULL)
		{
			newlink->Next=first;
			first = newlink;
		}
		
		else
		{
			// estabiling link in the linked list
			previous->Next = newlink; 
			newlink->Next = current;		 
		}
	      
		cout<<"Inserted "<<endl;

}

void Linked_List_For_Teams::Delete_Team(int ID)
{
	if(first == NULL)
	{
			return ;	
	}

	else if(first->Team_ID == ID)
	{
		Team* tmp = first;
		first= first->Next;
		delete tmp;
	}

	else
	{
		Team* current = first->Next;
		Team* previous = first;
	   

		while(current!=NULL && current->Team_ID != ID)
		{
			previous = current;
			current = current->Next;
		}

		if(current !=NULL)
		{
			previous->Next = current->Next;
			delete current;
		}

		else
		{
			cout<<"ID not present "<<endl;
		}

	}
}

void Linked_List_For_Teams::Display()
{
	Team* current = first; 
	while( current != NULL )
	{
			cout << *current << endl; 
			current = current->Next; 
	}

	cout<<"End of List "<<endl << endl;
}

void Linked_List_For_Teams::Update_Team(int index)
{
	Team * Current=first;
	while(Current != NULL &&Current->Team_ID==index)
	{
		Current= Current->Next;
	}

	if (Current->Team_ID == index)
	{
		cout << "Enter New House name:" << endl;
		cin >> Current->name;
		cout << "Enter New House ID:" << endl;
		cin >> Current->House_ID;
		cout << "Enter New Points:" << endl;
		cin >> Current->points;
		cout << "Enter New house Colour:" << endl;
		cin >> Current->colour;
		cout << "Enter New Sport(s):" << endl;
		cin >> Current->Sport;
		cout << "Enter New Team ID:" << endl;
		cin >> Current->Team_ID;
	}

	else 
	{
		cout << "Event not found" << endl;
	}

}

class Linked_List_For_Players
{
	public:
		Player * first;

	public:
		void Add_Player(int temp, string str, int temp1, string str1, int temp2, string str2, string str3);
		void Delete_Player(int ID);
		void Display();
		void Update_Player(int Index);

		~Linked_List_For_Players()
		{
	   		if(first == NULL)
				return ;
			Player* newlink;

			while(first!=NULL)
			{
				newlink =first;
				first = first->Next;
				delete newlink;
			}
		}

		Linked_List_For_Players()
		{
			first=NULL;
		}
};

void Linked_List_For_Players::Add_Player(int temp, string str, int temp1, string str1, int temp2, string str2, string str3)
{
		Player * newlink = new Player;
		
		newlink->points=temp;
		newlink->name=str;
		newlink->House_ID=temp1;
		newlink->colour=str1;
		newlink->Player_ID=temp2;
		newlink->Name=str2;
		newlink->Department=str3;

		Player* current = first;
		Player* previous = NULL;

		 while(current!=NULL)
		 {
			 previous = current;
			 current = current->Next;
		 }

		if(previous==NULL)
		{
			newlink->Next=first;
			first = newlink;
		}

		else
		{
				// estabiling link in the linked list
				previous->Next = newlink; 
				newlink->Next = current;		 
		}
	      
		cout<<"Inserted "<< endl << endl;

}

void Linked_List_For_Players::Delete_Player(int ID)
{
	if(first == NULL)
	{
			return ;	
	}

	else if(first->Player_ID == ID)
	{
		Player* tmp = first;
		first= first->Next;
		delete tmp;

	}

	else
	{
		Player* current = first->Next;
		Player* previous = first;
	   
		while(current!=NULL && current->Player_ID != ID)
		{
			previous = current;
			current = current->Next;
		}

		if(current !=NULL)
		{
			previous->Next = current->Next;
			delete current;
		}

		else
		{
			cout<<"ID not present "<<endl;
		}

	}
}

void Linked_List_For_Players::Display()
{
	Player* current = first; 
	while( current != NULL )
	{
			cout << *current << endl; 
			current = current->Next; 
	}

	cout<< "End of List "<<endl << endl;
}

void Linked_List_For_Players::Update_Player(int index)
{
	Player * Current=first;
	while(Current != NULL &&Current->Player_ID==index)
	{
		Current= Current->Next;
	}

	if (Current->Player_ID == index)
	{
		cout << "Enter New House name:" << endl;
		cin >> Current->name;
		cout << "Enter New House ID:" << endl;
		cin >> Current->House_ID;
		cout << "Enter New Points:" << endl;
		cin >> Current->points;
		cout << "Enter New house Colour:" << endl;
		cin >> Current->colour;
		cout << "Enter New Player name:" << endl;
		cin >> Current->Name;
		cout << "Enter New Player ID:" << endl;
		cin >> Current->Player_ID;
		cout << "Enter New Player Department:" << endl;
		cin >> Current->Department;
	}

	else 
	{
		cout << "Event not found" << endl;
	}

}