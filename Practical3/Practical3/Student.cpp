/* Person.cpp
*
*Version Information v0.1
*Author: Kelvyn Coulter
*Date : 11/10/2018
* Description : class definition .cpp file for the Person Class
*Copyright notice
*/

#include "Student.h"
//Default constructor
Student::Student() {
	std::cout << name_ << "Is alive!" << std::endl;
}

//Non default constructors
Student::Student(std::string name_) {
	:name_ { name } {
	std::cout << name_ << "Is alive!" << std::endl;
}
Student::Student(int YearofStudy_) {
	: year_{ YearofStudy_ } {
		std::cout << "I am in Year" << YearofStudy_ << std::endl;
}

	Student::Student(std::string name, int YearofStudy) {
		:name_{ name }, year_{ year } {

		std::cout << name_ << "Is alive!" << std::endl;
		std::cout << "I am in Year" << YearofStudy_ << std::endl;
		}
	}

	// Getters and setters
void Student::PrintName() const {
	std::cout << name_ << std::endl;
}

void Student::SetName(std::string name) {
	name_ = name;
}

std::string Student::GetName() const; {
	return name_;
}

void Student::SetYear(int YearofStudy_) {
	year_ = YearofStudy_;
}

int Student::GetYear() const; {
	return year_;
}



