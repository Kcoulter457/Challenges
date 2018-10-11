/*
*Main.cpp
*
Version information
Author: Kelvyn Coulter
Date: 11/10/2018
Description: A main.cpp driver application to road test a simple person class
*Copyright notice
*/



#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

	int main() {

		Student Billy;

		Billy.SetName("Billy Bragg");
		Billy.SetYear(3);

		Billy.PrintName();

		string name = Billy.GetName;
		
		//Billy.studentNo_ = "B00578985";

		int year = Billy.GetYear;

		

		return 0;
	
}
