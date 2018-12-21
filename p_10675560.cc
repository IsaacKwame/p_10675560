#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Student.h"
#include "Admin.h"
#include "Lecturer.h"

using namespace std;

int main()
{

    // Variable declaration

    int my_option;
    string student_id;
    int studentNUM;
    int staffNUM;
    string staff_id;
    int courseNUM;

    Student SGPA;

    Admin SGPA;

    Lecturer SGPA;



    while(1)
    {
        system ("colour 3e");
m
        system ("colour 3e");


        // Menu to be displayed to the user
        cout << "          SGPA school management system    " << endl << endl;
        cout << "Enter an option: "<< endl;
        cout << "~[1] Student" << endl;
        cout << "~[2] Administrator" << endl;
        cout << "~[3] Staff" << endl;
        cout << "~[4] Exit"<<endl;
        cout << ">: ";
        cin >> my_option;

        // Switch statement to display a menu based on the user's input

        switch(my_option)
        {
        case 1:
            {
        cout << "~[1] Add Student" << endl;
        cout << "~[2] Edit Student details" << endl;
        cout << "~[3] Delete Student" << endl;
        cout << "~[4] Print student record" << endl;
        cout << "~[5]  Exit" << endl;
        cout << ">: ";
        cin >> my_option;



        switch(my_option)
        {
        case 1:
            {
                cout << "Enter the number of students: ";
            cin >> studentNUM;

            SGPA.add_student(studentNUM);
            }
            break;


        case 2:
            {
                cout << "Enter student id: ";
                cin >>student_id;

                SGPA.edit_student(student_id);
            }
            break;
        case 3:
            {

                cout << "Enter the id: ";
                cin >> student_id;

                SGPA.delete_student(student_id);
            }
            break;
        case 4:
            {
                SGPA.print_record();
                cout << "Done" << endl;
            }
            break;
        default:
            {
                break;
            }

        }

        case 2:
            {
        cout << "~[1] Add Staff" << endl;
        cout << "~[2] Edit Staff" << endl;
        cout << "~[3] Delete Staff" << endl;
        cout << "~[4]  Exit" << endl;
        cout << ">: ";
        cin >> my_option;

        switch(my_option)
        {
        case 1:
            {
                cout << "Enter the number of Staff: ";
                cin >> staffNUM;

                 SGPA.add_staff(staffNUM);

            }
            break;
        case 2:
            {
                cout << "Enter ID: ";
                cin >> staff_id;

                SGAP.edit_staff(staff_id);
            }
            break;
        case 3:
            {
                cout << "Enter ID: ";
                cin >> staff_id;

                SGPA.delete_staff(staff_id);


            }
            break;
        default:
            {
                break;
            }

        }
            }

        case 3:
            {
        cout << "Enter an option"<< endl;
        cout << "~[1] Assign course" << endl;
        cout << "~[2] Enter Marks" << endl;
        cout << "•[4]  Exit" << endl;
        cout << ">: ";
        cin >> my_option;

        switch(my_option)
        {
        case 1:
            {
                cout << "Enter Student ID: ";
                cin >> student_id;

               SGPA.assign_course(student_id);
            }
            break;
        case 2:
            {
                cout << "Enter the number of courses: ";
                cin >> courseNUM;

                SGPA.student_mark(courseNUM);
            }
            break;
        default:
            {
                break;
            }
            break;
        }

            }

            }
        }

    }

    return 0;
}



/**
This is a the Student class which helps us to create student objects.
The class contains functions and data members to help us process instances of this class
**/

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student
{
    // Data members of the Student class
    public:
        Student();
        int choice;
         string student_name[1000];   // Names of the student are stored in an array of size 1000
        string student_id[1000]; // student id of the students are stored in an array of size 1000 like wise the other data data members below
        string student_course[1000];
        string student_level[1000];
        string student_email[1000];
        string student_address[1000];
        int student_num;

        // Functions to process the instances of this class

        void add_student(int num);  // function to add a student.
        void delete_student(string std_id); // function to delete a student
        void edit_student(string std_id); // function to edit a student
        void show_student(int num); // function to display students
        void print_record(); // function to print out the records of students

    protected:

    private:

};

#endif // STUDENT_H

#include "Student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;


Student::Student()
{
    //ctor
}

void Student:: add_student(int num)
{
    num=student_num;

    for (int i=0;i < num; i++)
    {
        cout << "Name: ";
        cin >> student_name[i];
        cout << "Student ID: ";
        cin >> student_id[i];
        cout << "Course: ";
        cin >> student_course[i];
        cout << "Level: ";
        cin >> student_level[i];
        cout << "Email: ";
        cin >> student_email[i];
        cout << "Address: ";
        cin >> student_address[i];

    }
    cout << endl;
}

void Student::edit_student(string std_id)
{
    for (int i=0;i<student_number; i++)
    {
        if(std_id==student_id[i])
        {
            continue;
        }

        add_student(i);

    }
}

void Student::show_student(int num)
{
    for (int i=0; i<student_num; i++)
    {
        cout << "Name \t Id \t Course \t Level \t Email \t Address" << endl;
        cout << student_name[i] << "\t" << student_id[i] <<  "\t" << student_course[i] << "\t" << student_level[i] << "\t" <<student_email;
        cout << "\t" << student_address[i];
    }
    cout << endl;
}

void Student::delete_student(string std_id)

{


    for (int i=0; i<student_num; i++)
    {
        std_id=student_id[i];
       show_student(i);
       cout << "Do you want to delete this?" << endl;
       cout << "1.Yes" << endl;
       cout << "2.No" << endl;
       cout << ">: ";
       cin >> choice;

        switch(choice)
        {
        case 1:

            {
                student_name[i]="";
                student_id[i]="";
            }
            break;
        default:
            break;
        }

    }
}


void Student:: print_record()
{
    ofstream student;
    student.open("Mydatabase.txt",ios::app);

     student << "*************************************************************************************************" <<endl;

      student << " ID" << "  " << "Name " << "     " << "Course" << "      " << "Level " << "     " << "Email" << "       " << "Address " << "         "<< "Mark" << endl;


       for (int i=0; i <student_num;i++)
       {
           student << student_name[i]<< endl;
           student << student_id[i]<< endl;
           student << student_course[i]<< endl;
           student << student_level[i]<< endl;
           student << student_email[i]<< endl;
           student << student_address[i]<< endl;

        student <<  "************************************************************************************************" << endl;

       }
       student << endl;

       student <<  "************************************************************************************************" << endl;


}



/**
This is the administrator class which manages some specific aspects of the application
**/

#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>

using namespace std;

class Admin
{

    public:

        string staff_name[30];
        string staff_id[30];
        string staff_course[3];
        string staff_email[30];
        string staff_address[30];
        int staff_num;
        int choice


        // functions
        void add_staff(int staff_num);
        void edit_staff(string sf_id);
        void delete_staff(string sf_id);
        void show_staff(int staff_num);




    protected:

    private:
};

#endif // ADMIN_H


#include "Admin.h"
#include "Student.h"

#include <iostream>
#include <string>

using namespace std;



void Admin:: add_staff(int staff_num)
{
    for (int i=0; i<staff_num; i++)
    {
        cout << "Name: ";
        cin >> staff_name[i];
        cout << "ID: ";
        cin >> staff_id[i];
        cout << "Course: ";
        cin >> staff_course[i];
        cout << "Email: ";
        cin >> staff_email[i];
        cout << "Address: ";
        cin >> staff_address[i];
    }
    cout << endl;
}

void Admin:: edit_staff(string sf_id)
{
    for (int i=0;i<staff_num;i++)
    {
        sf_id=staff_id[i];

        if(sf_id==staff_id[i])
        {
            continue;
        }

        add_staff(i);
    }
}

void Admin:: show_staff(int staff_num)
{
        for (int i=0;i<staff_num;i++)
        {
            cout << "Staff_name \t Id \t Course \t Level \t Email \t Address" << endl;
        cout << staff_name[i] << "\t" << staff_id[i] <<  "\t" << staff_course[i] << "\t" << "\t" <<staff_email[i];
        cout << "\t" << staff_address[i];
        }

        cout << endl;


}



void Admin::delete_staff(string sf_id)

{


    for (int i=0; i<staff_num; i++)
    {
        sf_id=staff_id[i];
       show_staff(i);
       cout << "Do you want to delete this?" << endl;
       cout << "1.Yes" << endl;
       cout << "2.No" << endl;
       cout << ">: ";
       cin >> choice;

        switch(choice)
        {
        case 1:

            {
                staff_name[i]="";
                staff_id[i]="";
            }
            break;
        default:
            break;
        }

    }
}


/**
Lecturer class whose instances are the staff members in the school
**/
#ifndef LECTURER_H
#define LECTURER_H
#include <iostream>
#include <string>

#include "Student.h"

using namespace std;


class Lecturer
{

    // Data members
    public:
        string myst_course[5];
        double mark[5];
        string student_course[5];
        int student_num;


        // Functions
        void student_mark(int course_num);
        void assign_course(string student_id);


    protected:

    private:
            Student show_students;

};

#endif // LECTURER_H


#include "Lecturer.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

void Lecturer::student_mark(int course_num)

{
    for (int i=0; i<course_num;i++)
    {

        cout << student_course[i];
        cout << "\t\t\t ";
        cin >> mark[i];
    }
    cout << endl;
}

void Lecturer::assign_course(string student_id)
{

    for (int i=0;i< student_num;i++)
    {

        cout << student_course[i];
        cin >> student_course[i];
    }
    cout << endl;

}

return 0;
}