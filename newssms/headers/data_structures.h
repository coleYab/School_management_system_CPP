#ifndef __DATAS__
#define __DATAS__

struct PersonalData
{
    char full_name[50];
    int age;
    char department_name[50];
    char email[40];
};

struct Address
{
    char city[20];
    char subcity[20];
    char home_no[8];
};

struct ParentInformation
{
    char full_name[80];
    char relation[20];
};

struct Courses
{
    int courseid;
    char course_name[20];
};

struct Student
{
    PersonalData personal_info;
    Address address;
    ParentInformation parent_data[2];
    Courses course[6];
};

struct Teacher
{
    PersonalData personal_info;
    Address address;
    ParentInformation parent_data[2];
};


/****************************************************************************
 * Function Prototypes: This is the overall collection of function prototypes
 *****************************************************************************
 * 
 * Function Descriptions
 * =====================
 * 
 * Getter Functions: Get the data from users.
 * Displayer Functions: Function to display the actual data to users.
 * File Handler: They are the function that is used to handle the file
 *               operations.
 * 
*/

/*Getter Functions*/
/**
 * get_student_data - functon to get student data
*/
void get_student_data(Student *student);

/**
 * get_address - fuction to get address of users.
*/
void get_address(Address *address);

/**
 * get_personal_data - the function to get personal data from users.
*/
void get_personal_data(PersonalData *p_data);

/**
 * get_guardian_info - the function to the info of their guardians.
*/
void get_guardian_info(ParentInformation *par);

/**
 * get_string - this is the function to accept a string effectively
 *                 from users
 * 
 * @data: the string to be accepted.
 * @size: the size of the actual string.
 *
 * Description: Uses try: catch statements to deal with error
 *               and exits whenever EOF is reached.
 *
*/
void get_string(char *data);



#endif