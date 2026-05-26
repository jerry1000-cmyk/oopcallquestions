// Write a program demonstrating multiple catch blocks for different data
// types.
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

    try {

        cout << "Outer try block" << endl;

        try {

            cout << "Inner try block" << endl;

            throw invalid_argument("Error inside inner try block");
        }

        catch(const invalid_argument& e) {

            cout << "Inner catch: " << e.what() << endl;

            throw;
        }
    }

    catch(const exception& e) {

        cout << "Outer catch: " << e.what() << endl;
    }

    return 0;
}