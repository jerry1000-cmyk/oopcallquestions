// Write a program to read data from a file and display it on screen.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler{
  public:
   void readdata(){
    ifstream file("sample.txt");
    string line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
   }
};

int main(){
    FileHandler f;
    f.readdata();
}