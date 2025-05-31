#pragma once
#include "student.h"
#include "degree.h"
#include <vector>
class roster
{
public:
	const int numStudents = 5; // num of students plus my info
	std::vector<student*> classRosterArray;

public:
	void add(
		std::string studentID, 
		std::string fName, 
		std::string lName, 
		std::string email, 
		int age, 
		int daysInCourse1, 
		int daysInCourse2, 
		int daysInCourse3, 
		DegreeProgram degreeProgram
	);
	
	void remove(std::string studentID);

	void printAll();

	void printAverageDaysInCourse(std::string studentID); // print average of days in the three courses for studentID

	void printInvalidEmails(); // verify valid email address

	void printByDegreeProgram(DegreeProgram degreeProgram); // print student information for a degree program

	// destructor to release memory 
	~roster();
};

