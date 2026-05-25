/*
Write a C++ program to demonstrate use of static data member and
static function.
*/

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;

public:
    // Static data member
    static int count;

    Student() {
        count++;
        rollNo = count;
    }

    void display() {
        cout << "Roll Number: "
             << rollNo << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students: "
             << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {

    Student s1, s2, s3;

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}