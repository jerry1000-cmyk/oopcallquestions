/*
Write a C++ program to overload << and >> operators for a class Student.
*/

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:

    // Overloading >> operator
    friend istream& operator>>(istream& in, Student& s) {

        cout << "Enter Roll Number: ";
        in >> s.rollNo;

        cout << "Enter Name: ";
        in >> s.name;

        return in;
    }

    // Overloading << operator
    friend ostream& operator<<(ostream& out, Student& s) {

        out << "Roll Number: "
            << s.rollNo << endl;

        out << "Name: "
            << s.name << endl;

        return out;
    }
};

int main() {

    Student s;

    cin >> s;

    cout << endl;

    cout << s;

    return 0;
}