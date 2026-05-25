/*
Write a program to overload unary operator (++) to increment object
value.
*/

#include <iostream>
using namespace std;

class Operator {
public:
    int value;

    // Postfix increment
    void operator++(int) {
        value+=2;
    }
};

int main() {

    Operator op;

    op.value = 20;

    // Before increment
    cout << op.value << endl;

    op++;

    // After increment
    cout << op.value << endl;

    return 0;
}