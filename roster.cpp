#include "roster.h"
#include "student.h"
#include "degree.h"
#include <iostream>
#include <cctype>
#include <string>

void roster::add(
	std::string studentID,
	std::string fName,
	std::string lName,
	std::string email,
	int age,
	int daysInCourse1,
	int daysInCourse2,
	int daysInCourse3,
	DegreeProgram degreeProgram) {
	std::vector<int> daysArray = { daysInCourse1, daysInCourse2, daysInCourse3 };
	student* newStudent = new student(studentID, fName, lName, email, age, daysArray, degreeProgram);
	classRosterArray.push_back(newStudent);
}

void roster::remove(std::string studentID) {
	for (int i = 0; i < classRosterArray.size(); i++) {
		if (classRosterArray.at(i)->getStudentID().compare(studentID) == 0) { // get classRosterArray at i, call student class getStudentID() function, and compare to studentID input
			classRosterArray.erase(classRosterArray.begin() + i);
			return;
		}
	}
	std::cout << "Student ID " << studentID << " not found!\n";
}

void roster::printAll() {
	for (int i = 0; i < classRosterArray.size(); i++) {
		classRosterArray.at(i)->printInfo(); // student class printInfo function
	}
}

void roster::printAverageDaysInCourse(std::string studentID) {
	for (int i = 0; i < classRosterArray.size(); i++) {
		if (classRosterArray.at(i)->getStudentID().compare(studentID) == 0) { // get classRosterArray at i, call student class getStudentID() function, and compare to studentID input 
			std::vector<int> days = classRosterArray.at(i)->getDaysToComplete(); // call student class getDaysToComplete()
			int averageDays = (days[0] + days[1] + days[2]) / days.size();
			std::cout << "Average days in the three courses for " << studentID << ": " << averageDays << " days.\n";
			return;
		}
	}
	std::cout << "Student ID " << studentID << " not found!\n";
}

void roster::printInvalidEmails() {
	for (int i = 0; i < classRosterArray.size(); i++) {
		std::string email = classRosterArray.at(i)->getEmail(); // call student class getEmail() at i in classRosterArray
		if (email.empty() ||
			email.find(" ") != std::string::npos || 
			email.find("@") == std::string::npos ||
			email.find(".") == std::string::npos) { // check for whitespace or empty string or @ present or . present 
			std::cout << "Invalid email: " << email << "\nStudent ID: " << classRosterArray.at(i)->getStudentID() << "\n"; // print student id with invalid email
		}
	}
}

void roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	for (int i = 0; i < classRosterArray.size(); i++) {
		if (classRosterArray.at(i)->getDegreeProgram() == degreeProgram) { // call student class getDegreeProgram() at i in classRosterArray
			classRosterArray.at(i)->printInfo(); // call student class printInfo() for matching degree
		}
	}
}

roster::~roster() {
	for (student* s : classRosterArray) {
		delete s; // delete each student
	}
	classRosterArray.clear(); // clear vector
}

