/*
Write a program to demonstrate function overriding using base and 
derived class
*/

#include <iostream>
using namespace std;

class Base{
public:
void addint(int a , int b){
    cout<<"THIS IS THE BASE CLASSES ADD FUNCTION: "<<a+b<<endl;
}

};

class Derived : public Base{
public:
 void addint(int a , int b){
    cout<<"THIS IS DERIVED CLASS ADD FUNCTION: "<<a+b<<endl;
 }
};

int main(){
    Derived d;
    d.addint(10,20);
}