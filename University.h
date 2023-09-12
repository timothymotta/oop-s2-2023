#ifndef UNIVERSITY_H
#define UNIVERISTY_H

#include <iostream>
#include <string>

class University{
public:
	std::string name;
	std::string location;
	Course* courses;

	void setUni(std::string n, std::string l){
		name = n;
		location = l;
	}
	void addCourse (int id, std::string name);
};

#endif
