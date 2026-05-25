/*
Develop a C++ program to demonstrate hierarchical inheritance.
*/
#include <iostream>
using namespace std;

class A{public: int a = 10;};
class B : public A{public: int b = 20;};
class C : public A{public: int c = 30;};
class D : public B{public: int d = 40;};
class E : public B{public: int e = 50;};
class F : public C{public: int f = 60;};
class G : public C{public: int g = 70;};

/*
                A
              /   \
             /     \
            B       C
           / \     / \
          /   \   /   \
         D     E F     G
*/

int main(){
    D d;
    E e;

    F f;
    G g;

    cout<<d.a<<endl;
    cout<<e.a<<endl;

}