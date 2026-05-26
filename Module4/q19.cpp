/*
Write a C++ program to store student records in a file, read and display
them.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream record("records.txt",ios::in | ios::out);//The file will not be automatically created 
 
class Student{
  public:
    string name;
    int rollno;
    Student(string Name , int Rollno){
        name = Name;
        rollno = Rollno;
    }

    void writedata(fstream &file){
      string s = "Name: "+name+"\n"+"Rollno: "+to_string(rollno)+"\n"+"------------"+"\n";
      file<<s;
    }

    static void getdata(fstream &file){
       string output;
       while(getline(record,output)){
        cout<< output <<endl;
       }
    }
};

int main(){
   Student s1("David",2);
   Student s2("Bob",4);
   Student s3("Harry",8);

   s1.writedata(record);
   s2.writedata(record);
   s3.writedata(record);
   
   record.seekg(0,ios::beg);
   /*THIS IS VERY IMPORTANT AS AFTER YOU WRITE THE FILE THE POINTER IS ALDREADY AT END HENCE 
   NOTHHING GETS PRINTED TO AVOID THAT USE THIS TO RESET THE POINTER TO START*/

   Student::getdata(record);

    record.close();
}