#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int stID, char Name[]) {
  studentId = stID;
  strcpy(name,Name);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID is " << studentId << endl;
    cout << "Student name is " << name <<endl;
}
