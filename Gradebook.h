#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>

class Gradebook {
    public:
    void addGrade(int stud_id, int course_id, std::string assignment, int value);
};

#endif