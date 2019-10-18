/*
Author: Devin Leigh
Date: 10/18/2019
Project: Student database using structs and vector pointers
 */

#include <iostream>
#include <cstring>
#include <vector>
#include <bits/stdc++.h> //allows me to use setprecision()
using namespace std;

struct Student { //student struct contains all characteristics of student
  char first[20];
  char last[20];
  int id;
  float gpa;
};

//function delarations
void add(vector<Student> &students);
void print(vector<Student> students);
void del(vector<Student> &students);

int main(){
  int i = 0;
  char input[10];
  char delInput[6];
  bool quit = false;
  vector<Student> students; //vector points to all Student structs created
  
  while(quit == false){
    cout << "Would you like to ADD, PRINT, or DELETE? " << endl;
    cout << "Or type QUIT to quit." << endl;
    cin >> input;
    cout << endl;
    if(tolower(input[0]) == 'a'){ //runs add function
      add(students);
      cout << endl;
    }else if(tolower(input[0]) == 'p'){ //runs print function
      print(students);
      cout << endl;
    }else if(tolower(input[0]) == 'd'){ //runs delete function
      del(students);
      cout << endl;
    }else if(tolower(input[0]) == 'q'){ //quit boolean change
      quit = true;
    }else{
      cout << "Please enter a valid command." << endl;
    }
  }
  
}    

//add function
void add(vector<Student> &students){
  char first[20]; //new vars for student credentials
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
  strcpy(s.first, first); //copies vars into struct characteristics
  strcpy(s.last, last);
  s.id = idNum;
  s.gpa = gpaNum;
  students.push_back(s); //push_back creates new struct within vector w/ characteristics of s
}  

//print function
void print(vector<Student> students){
  for(int i = 0; i < students.size(); i++){ //for loop prints all characteristics of students in order of addition to vector
    cout << "Name: " << students[i].last << ", ";
    cout << students[i].first << endl;
    cout << "ID Number: " << students[i].id << endl;
    cout << "GPA: " << fixed << setprecision(2) << students[i].gpa << endl; //set precision to 2 decimal places to print out correct GPA
    cout << endl;
  }
}

//delete function
void del(vector<Student> &students){
  int deletedCount = 0; //counter to see if the input student is not in vector
  int delInput; //var for comparison to student id numbers
  cout << "Please enter the ID number of the student you'd like to delete: ";
  cin >> delInput;
  for(int i = 0; i < students.size(); i++){
    if(delInput == students[i].id){
      cout << "Student " << students[i].id << " has been deleted." << endl;
      students.erase(students.begin()+i); //delete struct from vector
      deletedCount++;
    }
  }

  //if no students in vector exist with that id number
  if(deletedCount == 0){
    cout << "No students matched that ID number." << endl;
  }
}
