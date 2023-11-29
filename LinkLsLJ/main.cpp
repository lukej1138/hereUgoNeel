#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"
using namespace std;

int main(){
  student* s1 = new student(312803, 3.1, "LjCoolJ");
  student* s2 = new student(341203, 3.4, "KoolKevin");

  node* n1 = new node(s1);
  node* n2 = new node(s2);

  n1->setNode(n2);
  n2->setNode(n1);

  cout << n1->getNode() << endl;
  cout << n2->getNode() << endl;
  cout << endl;

  cout << n1->getStudent() << endl;
  cout << n2->getStudent() << endl;
  cout << endl;

  n1->setStudent(s2);
  n2->setStudent(s1);

  cout << n1->getStudent() << endl;
  cout << n2->getStudent() << endl;

}
