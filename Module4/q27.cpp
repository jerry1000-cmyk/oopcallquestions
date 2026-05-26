// Write a program to append data into an existing file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler{
 public:
 void putdata(string s){
     ofstream file("sample2.txt",ios::app);
    file<<s<<endl;
 }
};

int main(){
    FileHandler f;
    f.putdata("THIS IS A VERY NEW DOCUMENT");
}