/*
Write a C++ program to demonstrate multilevel inheritance using a 
real-life example. 
 */

#include <iostream>
using namespace std;

class A{
 public:
  int a = 10;
  int b = 20;
};

class B : public A{
 public:
  int c = 30;
};

class C : public B{
 public:
  int d = 40;
};


int main(){
   C cobj;
   cout<<cobj.a<<endl;
   cout<<cobj.b<<endl;
   cout<<cobj.c<<endl;
    return 0;

}