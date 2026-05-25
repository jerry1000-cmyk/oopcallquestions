/*
Develop a program to show the use of friend class in inheritance.
*/

#include <iostream>
using namespace std;

class Base {
private:
    int x = 100;

protected:
    int y = 200;

    // Declaring Derived as friend class
    friend class Derived;
};

class Derived : public Base {
public:
    void display() {
        cout << "Private member x (ACCESSED USING FRIEND FUNCTION)= " << x << endl;
        cout << "Protected member y (ACCESSED USING INHERITANCE)= " << y << endl;
    }
};

int main() {
    Derived d;

    d.display();

    return 0;
}