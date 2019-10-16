#include <iostream>
#include <cstring>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct Student {
  char first[20];
  char last[20];
  int id;
  float gpa;
};

void add(vector<Student> &students);
void print(vector<Student> students);
void del(vector<Student> &students, int checkNum);

int main(){
  int i = 0;
  char input;
  char delInput[6];
  int delID;
  bool quit = false;
  vector<Student> students;
  
  while(quit == false){
    cout << "Would you like to ADD, PRINT, or DELETE? ";
    cin >> input;
    cout << endl;
    if(tolower(input) == 'a'){
      add(students);
      cout << endl;
    }else if(tolower(input) == 'p'){
      print(students);
      cout << endl;
    }else if(tolower(input) == 'd'){
      cout << "Please enter the ID number of the student you'd like to delete: ";
      cout << endl;
      cin >> delInput;
      cin.get();
      del(students, delID);
    }else if(tolower(input) == 'q'){
      quit = true;
    }else{
      cout << "Please enter a valid command." << endl;
    }
  }
  
}    

void add(vector<Student> &students){
  char first[20];
  char last[20];
  int idNum = 0;
  float gpaNum = 0;
  cout << "Enter student's first name: ";
  cin >> first;
  cin.get();
  cout << endl;
  cout << "Enter student's last name: ";
  cin >> last;
  cin.get();
  cout << endl;
  cout << "Enter student's ID number: ";
  cin >> idNum;
  cin.get();
  cout << endl;
  cout << "Enter student's GPA: ";
  cin >> gpaNum;
  cin.get();
  cout << endl;

  Student s;
  strcpy(s.first, first);
  strcpy(s.last, last);
  s.id = idNum;
  s.gpa = gpaNum;
  students.push_back(s);
}  
 
void print(vector<Student> students){
  //vector<Student>::iterator ptr;
  for(int i = 0; i < students.size(); i++){
    cout << "Name: " << students[i].last << ", ";
    cout << students[i].first << endl;
    cout << "ID Number: " << students[i].id << endl;
    cout << "GPA: " << fixed << setprecision(2) << students[i].gpa << endl;
    cout << endl;
  }
}

void del(vector<Student> &students, int checkNum){
  int deletedCount = 0;
  //vector<Student>::iterator ptr;
  for(int i = 0; i < students.size(); i++){
    if(checkNum == students[i].id){
      cout << "Student " << students[i].id << " has been deleted." << endl;
      students.erase(students.begin()+i);
      deletedCount++;
    }
  }

  if(deletedCount == 0){
    cout << "No students matched that ID number." << endl;
  }
}
