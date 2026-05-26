// Write a C++ program to create a file and write data into it.

#include <iostream>
#include <fstream>
using namespace std;

class FileHandler{
public:
 void writedata(){
    ofstream file("sample.txt");
    file<<"Hello World"<<endl;

    file.close();
 }

};

int main(){
    FileHandler f;
    f.writedata();
}