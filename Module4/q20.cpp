/*
Write a C++ program to demonstrate simple exception handling using
try and catch.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {

        if(b == 0) {
            throw runtime_error("Division by zero is not allowed");
        }

        cout << "Result = " << a / b << endl;
    }

    catch(const runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}