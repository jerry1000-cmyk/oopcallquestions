/*
Write a program to demonstrate inline function to calculate square of a number
*/
#include <iostream>
using namespace std;

class Square{
 public:
  inline int calculatesquare(int n){
    return n*n;
  }

  void showsquare(int n){
    cout<<"THE SQUARE OF "<<n<<" IS: "<<calculatesquare(n)<<endl;
  }
};

int main(){
    Square s;
    s.showsquare(10);
}