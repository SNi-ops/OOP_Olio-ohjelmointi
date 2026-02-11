#include "student.h"
#include <iostream>

using namespace std;


Student::Student(string n, int a) {
    Name = n;
    Age = a;
}

void Student::setAge(int newAge)
{
    Age = newAge;
}

void Student::setName(string &newName)
{
    Name = newName;
}

int Student::getAge()
{
    return Age;
}

string Student::getName()
{
    return Name;
}

void Student::printStudentInfo()
{
    cout << "Name: " << Name <<" Age: " << Age << endl;
}
