// Write a program to copy contents from one file to another.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler{
public:

ifstream file1{"sample2.txt"};
ofstream file2{"sample3.txt"};

 void copydata(){
    string line;
    while(getline(file1,line)){
        file2<<line<<endl;
    }
 }
file1.close();
file2.close();
};

int main(){
    FileHandler f;
    f.copydata();
}
