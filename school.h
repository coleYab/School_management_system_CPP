#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include <ctime>
#include <fstream>
#include <cstring>

using namespace std;

/**
 * Administrators - are the persons who have an ultimate right in this school management system.
*/
typedef struct Administrators
{
	char full_name[20];
	short int birth_year;
	char gender;
	char nationality[15];
	char id_number[10];
	char phone_number[11];
	char school_name[20];
	short int joining_year;
} admin_t;

/**
 * login_data - a struct to store the id number and the password for registered users.
*/
typedef struct Login_data
{
	char id_number[20];
	char password[9];
} login_t;

/**
 * student - is the struct to store the data of stdent.
*/
typedef struct Student
{
	char full_name[20];
	short int birth_year;
	char gender;
	char nationality[15];
	char id_number[10];
	char phone_number[11];
	char school_name[20];
	char department[20];
	char parent_name[20];
	char parent_phone[20];
} student_t;

/**
 * Teacher - are those who give serveral courses for the students.
*/
typedef struct Teacher
{
	char full_name[20];
	short int birth_year;
	char gender;
	char nationality[15];
	char id_number[10];
	char phone_number[11];
	char school_name[20];
	char department[20];
	char subject_thought[20];
} teacher_t;

/*Checking the enviroment that the program is running*/
#ifdef _WIN32
	#include <conio.h>
	#define OS "cls"
#else
	#include <unistd.h>
	#define OS "clear"

#endif


/*Function prototypes*/
void accept_data(int x, student_t *storage);
void accept_data(int x, teacher_t *storage);
int registeration(void);
void main_menu(void);
char *search_from_file(char *id_number);
void accept_data(int x, admin_t *storage);
void login(void);
void menu_student(void);
void menu_teacher(void);
void menu_admin(void);

#endif
