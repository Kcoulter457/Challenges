#include "Person.h"


Person::Person(){

	std::cout << "Default constructor of the Module class called" << std::endl;

}

Person::Person(std::string Name, std::string Email) :

	Name_{ Name }, Email_{ Email }

{}



Person::Person(std::string Name) :

	Name_{ Name }

{}



std::string Person::getName() const {

	return Name_;

}

void Person::setName(std::string Name) {

	Name_ = Name;

}



std::string Person::getEmail() const {

	return Email_;

}

void Person::setEmail(std::string Email) {

	Email_ = Email;

}



std::string Person::ToString() {

	std::string output = Name_ + " " + Email_ + "\n";

	return output;

}