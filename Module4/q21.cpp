/*
Write a program to handle division by zero using exception handling.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

class Division{
    public:

    void divide(int a , int b){
        try{
            if(b==0){
                throw runtime_error("Divide by 0 is not allowed");
            }
            cout<<"THE DIVISION IS: "<<a/b<<endl;
        }
        catch(runtime_error e){
           cout<<"Error: "<<e.what()<<endl;
        }
    }
};

int main(){
    Division d;
    d.divide(10,0);
}