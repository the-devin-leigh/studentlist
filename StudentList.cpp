#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct Student {
  char first[20];
  char last[20];
  int id;
  float gpa;
};

void add(vector<Student> &students);
void print();
void del();

int main(){
  int i = 0;
  char input;
  bool quit = false;
  vector<Student> students;
  
  while(quit == false){
    cout << "Would you like to ADD, PRINT, or DELETE? ";
    cin >> input;
    cout << endl;
    if(tolower(input) == 'a'){
      add(students);
    }
    if(tolower(input) == 'p'){
      
    }
    if(tolower(input) == 'd'){

    }  
  }  
  
  
}    

void add(vector<Student> &students){
  Student s;
  cout << "Enter student's first name: ";
  cin >> s.first;
  cout << endl;
  cout << "Enter student's last name: ";
  cin >> s.last;
  cout << endl;
  cout << "Enter student's ID number: ";
  cin >> s.id;
  cout << endl;
  cout << "Enter student's GPA: ";
  cin >> s.gpa;
  cout << endl;

  students.push_back(s);
}  

void print(){

}

void del(){

}  
