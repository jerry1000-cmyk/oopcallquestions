/*
Develop a program using pure virtual function and abstract class
Shape.
*/
#include <iostream>
using namespace std;

// ABSTRACT CLASS
class Shape{
 public:
 virtual void calculateArea() = 0;//pure virtual function
};

class Circle : public Shape{
    public:
    int r;

    Circle(int R){
        r = R;
    }

    void calculateArea(){
       float area = (3.1415*r)*r;
       cout<<"AREA OF CIRCLE IS: "<<area<<endl;
    }

};

class Rectangle : public Shape{
    public:
    int l , b;

    Rectangle(int L , int B){
        l = L;
        b = B;
    }

    void calculateArea(){
        float area = l*b;
        cout<<"AREA OF RECTANGLE IS: "<<area<<endl;
    }
};

int main(){
    Shape* ptr;
    Circle c(5);
    Rectangle r(10,3);

    ptr = &c;
    ptr->calculateArea();

    ptr = &r;
    ptr->calculateArea();
}