#include "school.h"

using namespace std;

/**
 * main_menu - the menu displayed for main menu.
 * 
 * Return: void.
*/
void main_menu(void)
{
	int choice;
cho:
	cout << "                         Main Menu                          \n";
	cout << "==========================================================\n";
	cout << "\t1. LOGIN\n";
	cout << "\t2. REGISTER\n";
	cout << "\t3. EXIT\n";
	cout << "Enter your choice: ";
	cin >> choice;
	if (choice > 3 || choice < 0)
	{
		cout << "Invalid input Enter your input again\n";
		goto cho;
	}
	else
	{
		switch (choice)
		{
			case 1:
				login();
				break;
			case 2:
				registeration();
				break;
			case 3:
			{
				system("clear");
				cout << "Thanks for using our product\n";
				exit(0);
			}
			default:
				break;
		}
	}
}

void menu_student(void)
{
	int choice;

	cout << "Menu\n"
	     << "1. Display personal data\n"
	     << "2. Edit personal data\n"
	     << "3. Watch classmates\n"
	     << "4. Watch teachers\n"
	     << "5. Register for courses\n"
	     << "6. Watch available courses\n"
	     << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
		case (1):
			//Display data
			break;
		case (2):
			//Edit data
			break;
		case (3):
			//Display student at same class
			break;
		case (4):
			//Display teachers
			break;
		case (5):
			//Register for courses
			break;
		case (6):
			//Display available courses
			break;
		default:
			//Error
			break;
	}
}


void menu_teacher(void)
{
	int choice;

	cout << "Menu\n"
	     << "1. Display personal data\n"
	     << "2. Edit personal data\n"
	     << "3. Watch all available student\n"
	     << "Enter your choice: ";
	 cin >> choice;
	 switch (choice)
	 {
		case (1): break;
		case (2): break;
		case (3): break;
		case (4): break;
		default: break;
	 }
}





/*This is the menu that will be displayed for persons who have an admin previlage*/
void menu_admin(void)
{
	int choice1, choice2;
	char file_name[20];

choice:
	cout << "Welcome to the admins page\n"
	     << "Menu \n"
	     << "\t1. Import files from file\n"
	     << "\t2. Add multiple records\n"
	     << "\t3. See all registered students and teachers\n"
	     << "\t4. Exit\n"
	     << "Enter your choice: ";
	cin >> choice1;

	switch (choice1)
	{
		case (1):
		{
			cout << "Menu\n 1. Import teachers file\t\t 2. Import student file\n"
			     << "Enter your choice: ";
			cin >> choice2;
			cout << "Enter the file name to import: ";
			cin >> file_name;
			//import from file
			break;
		}
		case (2):
		{
			cout << "Menu\n 1. Add multiple students\t\t2. Add multiple teachers\n"
			     << "Enter your choice: ";
			cin >> choice2;
			//add multiple datas.
			break;
		}
		case (3):
		{
			//Display all the files in teachers.txt and students.txt
			break;
		}
		case (4):
		{
			system("clear");
			exit(1);
		}
		default:
		{
			cout << "Invalid Input\n Please enter the valid input again\n";
			goto choice;
		}
	}
}

