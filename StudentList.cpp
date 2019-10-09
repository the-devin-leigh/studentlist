#include <iostream>
#include <cstring>
using namespace std;

struct Student {
  char first[20];
  char last[20];
  int id;
  float gpa;
}

void add();
void print();
void del();

int main(){
  bool quit = false;
  vector<Student> students;
  
  while(quit == false){
    
  }  
  
  
}    

void add(Student newStudent){
  cout << "Enter student's first name: ";
  newStudent.first = cin.get(20);
  cout << endl;
  cout << "Enter student's last name: ";
  newStudent.last = cin.get(20);
  cout << endl;
  cout << "Enter student's ID number: "
  
  
}  

void print(){

}

void del(){

}  
