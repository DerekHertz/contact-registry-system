#include <iostream>
#include "roster.h"
#include "student.h"

int main()
{
    // roster class instance
    roster classRoster;

    // add all students in studentData Table
    classRoster.add("A5", "Derek", "Hertzell", "derekhertzell@gmail.com", 24, 10, 15, 20, SOFTWARE);


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
