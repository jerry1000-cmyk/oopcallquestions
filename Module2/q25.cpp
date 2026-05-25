/*
Develop a program using abstract class Shape and derive classes Circle 
and Rectangle to calculate area.
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
    Circle c(25);
    Rectangle r(10,4);

    c.calculateArea();
    r.calculateArea();
}

