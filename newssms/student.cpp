#include "headers/data_structures.h"
#include "headers/headers.h"

using namespace std;

int main()
{
    Student student;
    while (true)
    {
        char name[121];
        cout << "Enter your name: ";
        get_string(name);
        cout << name;
    }
    //get_student_data(&student);
}

void display_student_info(Student s)
{
    cout << "This is the Student Informations\n";
    disp_personal_info(s.personal_info);
    disp_address(s.address);
    disp_guardian_info(s.parent_data);
    //disp_courses_registered(s.course);    
}

void disp_personal_info(PersonalData p_data)
{
    cout << "Personal Data\n";
    cout << "Full Name: " << p_data.full_name << endl;
    cout << "Age: " << p_data.age << endl;
    cout << "Department Name: " << p_data.department_name << endl;
}


void disp_guardian_info(ParentInformation *p)
{
    cout << "Guardian Info" << endl;
    cout << "Name: " << p->full_name << endl;
    cout << "Relation: " << p->relation << endl;
}

void disp_address(Address a)
{
    cout  << "Address" << endl;
    cout << "City: " << a.city << endl;
    cout << "Subcity: " << a.subcity << endl;
    cout << "Home Number: " << a.home_no << endl;
}