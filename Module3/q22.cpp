/*
Develop a program to demonstrate constructor overloading.
*/

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:

    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Roll Number: "
             << rollNo << endl;

        cout << "Name: "
             << name << endl;
    }
};

int main() {

    // Calls default constructor
    Student s1;

    // Calls parameterized constructor
    Student s2(101, "Shounak");

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2 Details:" << endl;
    s2.display();

    return 0;
}