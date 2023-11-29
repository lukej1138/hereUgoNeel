#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>
using namespace std;

class student{
 public:
  student(int id, float gpa, char* name);
  ~student();

  int i;
  float g;
  char* n;
};

#endif
