// C867GitLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roster.h"
#include "student.h"

int main()
{
    std::cout << "C867 C++ 012513011 Derek Hertzell\n";
    // roster class instance
    roster classRoster;

    // add all students in studentData Table
    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("A5", "Derek", "Hertzell", "Dhertz1@wgu.edu", 24, 10, 15, 20, SOFTWARE);


    classRoster.printAll();

    classRoster.printInvalidEmails();



    //loop through classRosterArray and for each element:
    for (int i = 0; i < classRoster.classRosterArray.size(); i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray.at(i)->getStudentID());
    }

    classRoster.printByDegreeProgram(SOFTWARE);

    classRoster.remove("A3");

    classRoster.printAll();

    classRoster.remove("A3");

    //expected: the above line should print a message saying such a student with this ID was not found.

    //call the destructor to release the roster object from memory
	classRoster.~roster();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
