/*
Write a program to overload binary operator (+) to add two objects.
*/

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:

    Number(int v = 0) {
        value = v;
    }

    // Overloading + operator
    Number operator+(Number obj) {

        Number temp;

        temp.value = value + obj.value;

        return temp;
    }

    void display() {
        cout << "Value = "
             << value << endl;
    }
};

int main() {

    Number n1(10);
    Number n2(20);

    Number n3;

    n3 = n1 + n2;

    n3.display();

    return 0;
}