/*
* Person.h
*
*Version Information
*Author: Kelvyn Coulter
*Date: 11/10/2018
* Description: class delcaration header file for the Person Class
*Copyright notice
*/


#pragma once

#include <iostream>
#include <string>


class Student {

//Data members private
private:
	std::string name_;
	std::string studentNo_;
	std::string courseName_;
	int YearofStudy_;
	int M1Mark_;
	int M2Mark_;
	int M3Mark_;

public:
	Student();

	explicit Student(std::string name_);
	explicit Student(int YearofStudy_);
	
	Student(std::string name, int YearofStudy);

	void SetName(std::string name_);
	std::string GetName() const;

	void SetYear(int YearofStudy_);
	int GetYear() const;
	void PrintName() const;
	
	};