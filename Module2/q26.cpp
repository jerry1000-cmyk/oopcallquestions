/*
Write a program to demonstrate constructor execution order in multilevel 
inheritance
*/
#include <iostream>
using namespace std;

class A{
 public:
  A(){
    cout<<"CONSTRUCTOR OF A WAS CALLED"<<endl;
  }
};

class B : public A{
 public:
  B(){
    cout<<"CONSTRUCTOR OF B WAS CALLED"<<endl;
  }
};

class C : public B{
 public:
  C(){
    cout<<"CONSTRUCTOR OF C WAS CALLED"<<endl;
  }
};

int main(){
    C cobj;
}
/*
OUTPUT:
CONSTRUCTOR OF A WAS CALLED
CONSTRUCTOR OF B WAS CALLED
CONSTRUCTOR OF C WAS CALLED
*/