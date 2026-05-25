/*
Write a C++ program to pass parameters to the base class constructor 
and display values.
*/

#include <iostream>
using namespace std;

class Base{
 public:
  int b;
  Base(int n){
    b = n;
    cout<<"BASE CONSTRUCTOR CALLED AND INITIALIZED WITH VALUE: "<<b<<endl;
  }
};

class Derived : public Base{
  public:
    int a;
    Derived(int d , int b) : Base(b){
        a = d;
        cout<<"DERIVED CLASS CONSTRUCTOR CALLED AND INITIALIZED WITH VALUE: "<<a<<endl;
    }
};

int main(){
    Derived d(10,20);

    return 0;
}