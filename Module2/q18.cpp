/*
Write a program to demonstrate hybrid inheritance using virtual base 
class
*/
#include <iostream>
using namespace std;

class A {
public:
    int a = 10;
};

// Hierarchical inheritance
class B : virtual public A {
public:
    int b = 20;
};

class C : virtual public A {
public:
    int c = 30;
};

// Multilevel inheritance
class D : public B {
public:
    int d = 40;
};

class E : public C {
public:
    int e = 50;
};

/*
          A
        /   \
       /     \
      B       C
      |       |
      |       |
      D       E

      heirarchical plus multilevel inheritance

*/
int main() {
    D obj1;
    E obj2;

    cout << "Object of D" << endl;
    cout << obj1.a << endl;
    cout << obj1.b << endl;
    cout << obj1.d << endl;

    cout << endl;

    cout << "Object of E" << endl;
    cout << obj2.a << endl;
    cout << obj2.c << endl;
    cout << obj2.e << endl;

    return 0;
}

