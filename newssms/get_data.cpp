#include "headers/data_structures.h"
#include "headers/headers.h"

using namespace std;

/*Getter Functions Accept data form users*/

void get_string(char *data)
{
    try
    {
        if (!(cin.getline(data, 100)))
        {
            if (cin.eof())
            {
                cerr << "\t\n\033[32m End of file reached.\nEXITING!!!\n\033[0m";
                exit(1);
            }
            throw runtime_error("\033[32mInvalid Input. Please Enter an Invalid Data\033[0m");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        get_string(data);
    }
}

void get_student_data(Student *student)
{
    cout << "Enter your Data Accurately" << endl;
    get_personal_data(&(student->personal_info));
    get_guardian_info(student->parent_data);
    get_address(&(student->address));
}

void get_address(Address *address)
{
    cout << "Enter your city: ";
    cin >> address->city;
    cout << "Enter your sub-city: ";
    cin >> address->subcity;
    cout << "Enter your Home Number: ";
    cin >> address->home_no;
}

void get_personal_data(PersonalData *p_data)
{
    cout << "Enter your full Name: ";
    get_string(p_data->full_name);
    cout << "Enter p_data Age: ";
    cin >> p_data->age;
    cout << "Enter Department Name: ";
    cin >> p_data->department_name;
    cout << "\033[32mRegistered Successfully\033[0m" << endl;
}

void get_guardian_info(ParentInformation *par)
{
    cout << "Enter Guardian's Full Name: ";
    get_string(par->full_name);
    cout << "Enter The Relation With YourGuardian: ";
    cin >> par->relation;
}
