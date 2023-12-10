#include "school.h"

login_t loginData;
teacher_t teacherData;
admin_t adminData;
student_t studentData;

using namespace std;

int registeration(void)
{
	int temp_choice;

	cout << "==========================================================\n";
	cout << "\t\tRegistration page\n";
	cout << "==========================================================\n";
role:
	cout << "\tWhat is your role\n1. Teacher 			2. Student 		3. Admin\nEnter your choice: ";
	cin >> temp_choice;
	if (temp_choice == 2)
		accept_data(temp_choice, &studentData);
	else if (temp_choice == 1)
		accept_data(temp_choice, &teacherData);
	else if (temp_choice == 3)
		accept_data(temp_choice, &adminData);
	else
	{
		cout << "\n\tplease enter the vaild answer\n";
		goto role;
	}

	return (0);
}

void login()
{
	bool login_check = false;
	cout << "==========================================================\n";
	cout << "\t\tLogin page\n";
log:
	cout << "==========================================================\n";
	cout << "Enter your ID number: ";
	cin >> loginData.id_number;
	cout << "Enter your password: ";
	cin >> loginData.password;
	
	//if (strcmp(loginData.password == search_from_file(loginData.id_number)))
		login_check = true;

	if (login_check)
	{
		cout << "======================================================================\n";
		cout << "\nLOGIN WAS SCCESSFULL!!\n You will be redirected to your landing age.\n";
		sleep(1);
		/*redirect to the page and make it look really amazing*/
	}
	else
	{
		cout << "\n\t\bLOGIN FAILED please try again\b\n";
		goto log;
	}
}


void accept_data(int x, student_t *storage)
{
	char sex;
	cout << "Welcome to student registration page\n";
	cout << "Enter your name: ";
	cin >> storage->full_name;
gender:
	cout << "Enter yout gender(Either M or F): ";
	cin >> sex;
	if (sex != 'm' && sex != 'f' && sex != 'M' && sex && 'F')
	{
		cout << "Invalid input\n";
		goto gender;
	}
	else
		storage->gender = sex;
	cout << "Enter your nationality: ";
	cin >> storage->nationality;
	cout << "Enter your phone_number: ";
	cin >> storage->phone_number;
	cout << "Enter your department: ";
	cin >> storage->department;
	cout << "Enter your parent name: ";
	cin >> storage->parent_name;
	cout << "Enter your parent phone_number: ";
	cin >> storage->parent_phone;
}

void accept_data(int x, teacher_t *storage)
{
	char sex;
	cout << "Welcome to teachers registration page\n";

	cout << "Enter your name: ";
	cin >> storage->full_name;
gender:
	cout << "Enter yout gender(Either M or F): ";
	cin >> sex;
	if (sex != 'm' && sex != 'f' && sex != 'M' && sex && 'F')
	{
		cout << "Invalid input\n";
		goto gender;
	}
	else
		storage->gender = sex;
	cout << "Enter your nationality: ";
	cin >> storage->nationality;
	cout << "Enter your phone_number: ";
	cin >> storage->phone_number;
	cout << "Enter your department: ";
	cin >> storage->department;
	cout << "Enter the subjet you teach: ";
	cin >> storage->subject_thought;
}

void accept_data(int x, admin_t *storage)
{
	char sex;
	cout << "Welcome to admins registration page\n";
	cout << "Enter your name: ";
	cin >> storage->full_name;
gender:
	cout << "Enter yout gender(Either M or F): ";
	cin >> sex;
	if (sex != 'm' && sex != 'f' && sex != 'M' && sex && 'F')
	{
		cout << "Invalid input\n";
		goto gender;
	}
	else
		storage->gender = sex;
	cout << "Enter your nationality: ";
	cin >> storage->nationality;
	cout << "Enter your phone_number: ";
	cin >> storage->phone_number;
	cout << "Enter the year you join the school: ";
	cin >> storage->joining_year;
}

