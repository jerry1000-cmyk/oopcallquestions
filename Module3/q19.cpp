/*
Write a program to demonstrate friend function accessing private
members of a class.
*/

#include <iostream>
using namespace std;

class Number {
private:
    int secret = 500;

    // Friend function declaration
    friend void display(Number obj);
};

// Friend function definition
void display(Number obj) {
    cout << "Private member secret = "
         << obj.secret << endl;
}

int main() {

    Number n;

    display(n);

    return 0;
}