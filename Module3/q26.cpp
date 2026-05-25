/*
Write a program to demonstrate runtime polymorphism using virtual
function.
*/

#include <iostream>
using namespace std;

class Base{
public:
  virtual void show(){
    cout<<"THIS IS BASE CLASS"<<endl;
  }

};

class Derived1 : public Base{
public:
 virtual void show(){
    cout<<"THIS IS A DERIVED1 CLASS"<<endl;
 }
};

class Derived2 : public Base{
public:
 virtual void show(){
    cout<<"THIS IS A DERIVED2 CLASS"<<endl;
 }
};

int main(){
    Base* ptr = new Base;
    Derived1 d1;
    Derived2 d2;
    
    ptr->show();

    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();

    return 0;
}