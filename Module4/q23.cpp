/*
Develop a program to throw and catch user-defined exceptions.
*/
#include <iostream>
#include <exception>
using namespace std;

class NegativeNumberException : public exception {
public:
    const char* what() const noexcept override {
        return "Negative number is not allowed";
    }
};

int main() {

    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    try {

        if(num < 0) {
            throw NegativeNumberException();
        }

        cout << "You entered: " << num << endl;
    }

    catch(const NegativeNumberException& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}