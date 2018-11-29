#pragma once



#include <string>
#include <iostream>
#include "Person.h"



class Lecturer {

private:

	std::string staffID_;
	std::string subjectArea_;
	std::string moduleTitle_;
	



public:

	Lecturer();
	Lecturer(std::string staffID, std::string subjectArea);
	Lecturer(std::string subjectArea);

	//Getters and setters for each member variable

	std::string getstaffID() const;
	void setstaffID(std::string staffID);

	std::string getsubjectArea() const;
	void setsubjectArea(std::string subjectArea);

	std::string getModuleTitle() const;
	void setModuleTitle(std::string moduleTitle);


	virtual std::string ToString();

};
