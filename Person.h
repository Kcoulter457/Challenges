#pragma once

#include <string>
#include <iostream>

class Person {
private:
	std::string Name_;
	std::string Email_;

public:
	Person();

	Person(std::string Name, std::string Email);

	Person(std::string Name);

	//Getters and setters for each member variable
	std::string getName() const;
	void setName(std::string Name);

	std::string getEmail() const;
	void setEmail(std::string Email);


	virtual std::string ToString();
};
