#pragma once
#include "degree.h"

#include <string>
#include<vector>
class student
{
private:
	std::string studentID;
	std::string fName;
	std::string lName;
	std::string email;
	std::vector<int> daysToComplete;
	DegreeProgram degreeProgram; // enumerated type from deghree.h
	int age;
	
public:

	// declare helper function to convert enum degree to string
	std::string degreeToString(DegreeProgram degreeprogram);

	// declare getter functions
	std::string getStudentID() const;

	std::string getfName() const;

	std::string getlName()  const;

	std::string getEmail() const;

	std::vector<int> getDaysToComplete()  const;

	DegreeProgram getDegreeProgram() const;

	int getAge() const;


	// declare setter functions
	void setStudentID(std::string studentID);

	void setfName(std::string fName);

	void setlName(std::string lName);

	void setEmail(std::string email);

	void setDaysToComplete(std::vector<int> daysToComplete);

	void setDegreeProgram(DegreeProgram degreeProgram);

	void setAge(int age);

	// constructor
	student(
		std::string studentID, 
		std::string fName, 
		std::string lName, 
		std::string email, 
		std::vector<int> daysToComplete, 
		int age, 
		DegreeProgram degreeProgram
	);
	

	std::string printInfo();


};

