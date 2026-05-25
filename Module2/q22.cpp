/*
Write a C++ program to demonstrate nested classes and access their members.
*/

#include <iostream>
using namespace std;

class Outer {
private:
    int x = 10;

public:
    // Nested class
    class Inner {
    public:
        int y = 20;

        void display() {
            cout << "Inside Inner class" << endl;
            cout << "y = " << y << endl;
        }
    };

    void show() {
        cout << "Inside Outer class" << endl;
        cout << "x = " << x << endl;
    }
};

int main() {
    Outer obj1;
    obj1.show();

    // Creating object of nested class
    Outer::Inner obj2;
    obj2.display();

    return 0;
}