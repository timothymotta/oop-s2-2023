#ifndef COURSE_H
#define COURSE_H

#include <string.h>
#include <iostream>

class Course {
    private:
    Person* persons;

    public:
	int courseID;
	std::string courseName;
	
};