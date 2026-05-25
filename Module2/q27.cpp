/*
Analyze and implement a scenario where base class pointer accesses 
derived class object using overriding (runtime behavior explanation 
required).
*/

#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout<<"BASE CLASS"<<endl;
    }
};

class Derived : public Base{
    public:
    void display(){
        //ovveriding function
        cout<<"DERIVED CLASS"<<endl;
    }
};

int main(){
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->display();
}