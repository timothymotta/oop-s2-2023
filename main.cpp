// In the main.cpp file you should:

// 1) Create a university;
// 2) Add a course to this university;
// 3) Add a student to this course;
// 4) Add a grade for this student for some of the assignments.

#include <string.h>

#include <iostream>

#include "Person.h"
#include "University.h"

using namespace std;

int main() {
  // Create a Uni & student
  University UofA;
  Person Tim;
  UofA.setUni("University of Adelade", "South Australia");
  Tim.setName("Tim");

  // Add a course to uni
  UofA.addCourse(112, "OOP");

  // Add a student to this course

  // Add grade
  cout << UofA.name << endl;
  cout << Tim.name << endl;
  // cout << UofA.cs.courseName << endl;

  return 0;
}