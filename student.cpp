#include "student.h"
#include "degree.h"

// initialize helper function to convert enum degree program to string
std::string student::degreeToString(DegreeProgram degreeProgram) {
	switch (degreeProgram) {
	case DegreeProgram::SECURITY:
		return "Security";
	case DegreeProgram::NETWORK:
		return "Network";
	case DegreeProgram::SOFTWARE:
		return "Software";
	}
}

// initialize getter functions to access private members
std::string student::getStudentID() const { return studentID; }

std::string student::getfName() const { return fName; }

std::string student::getlName() const { return lName; }

std::string student::getEmail() const { return email; }

std::vector<int> student::getDaysToComplete() const { return daysToComplete; }

int student::getAge() const { return age; }

DegreeProgram student::getDegreeProgram() const { return degreeProgram; }

// initialize setter functions to modify private members
void student::setStudentID(std::string studentID) { this->studentID = studentID; }

void student::setfName(std::string fName) { this->fName = fName; }

void student::setlName(std::string lName) { this->lName = lName; }

void student::setEmail(std::string email) { this->email = email; }

void student::setDaysToComplete(std::vector<int> daysToComplete) { this->daysToComplete = daysToComplete; }

void student::setAge(int age) { this->age = age; }

void student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }


// constructor
student::student(std::string studentID, std::string fName, std::string lName, std::string email, std::vector<int> daysToComplete, int age, DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->fName = fName;
	this->lName = lName;
	this->email = email;
	this->daysToComplete = daysToComplete;
	this->age = age;
	this->degreeProgram = degreeProgram;
}

std::string student::printInfo() {
	std::string studentInfo = studentID + "\tFirst Name: " + fName + "\tLast Name: " + lName + "\tEmail: " + email + "\tAge: " + std::to_string(age) + "\t";
	std::string daysInCourse = "daysInCourse: {" + std::to_string(daysToComplete.at(0)) + ", " + std::to_string(daysToComplete.at(1)) + ", " + std::to_string(daysToComplete.at(2)) + "} ";
	std::string program = "Degree Program: " + degreeToString(degreeProgram);

	return studentInfo + daysInCourse + program;
}