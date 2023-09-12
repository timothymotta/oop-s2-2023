#ifndef PERSON_H
#define PERSON_H

#include <string.h>
#include <iostream>

class Person{
public:
	std::string name;

	void setName(std::string n){
		name = n;
	}
};

#endif