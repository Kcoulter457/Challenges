#include "Lecturer.h"


Lecturer::Lecturer() {

	std::cout << "Default constructor of the Lecturer class called" << std::endl;

}

Lecturer::Lecturer(std::string staffID, std::string subjectArea) :

	staffID_{ staffID }, subjectArea_{ subjectArea }

{}

Lecturer::Lecturer(std::string staffID):

	staffID_{ staffID }

{}

std::string Lecturer::getstaffID() const {

	return staffID_;

}

void Lecturer::setstaffID(std::string staffID) {

	staffID_ = staffID;

}

std::string Lecturer::getsubjectArea() const {

	return subjectArea_;

}

void Lecturer::setsubjectArea(std::string subjectArea) {

	subjectArea_ = subjectArea;

}


std::string Lecturer::ToString() {

	std::string output = staffID_ + " " + subjectArea_ + "\n";

	return output;

}