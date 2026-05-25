/*
Write a program to demonstrate ambiguity problem in multiple 
inheritance and resolve it using scope resolution. 
*/
#include <iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"THIS IS CLASS A"<<endl;
    }
};

class B{
    public:
    void show(){
        cout<<"THIS IS CLASS B"<<endl;
    }
};

class C :public A, public B{

};

int main(){
    C cobj;
    // cobj.show(); this will throw an abiguity error
    cobj.A::show();
    cobj.B::show();

    return 0;
}
