
// FOR OUR CLASS MANAGEMEMENT 



#include<iostream>
using namespace std;

struct Student{
    string name;
    int age;
    string major;
    string semester;
    float gpa;
    
};

void printStudentinfo(Student student[], int n){
    for(int i=0; i<n; i++){
     cout<<"Student Name : "<<student[i].name<<endl;
     cout<<"Student Age : "<<student[i].age<<endl;
     cout<<"Student major : "<<student[i].major<<endl;
     cout<<"Student semester : "<<student[i].semester<<endl;
     cout<<"Student Gpa : "<<student[i].gpa<<endl;
    }
    cout<<"\n"<<endl;
  int highest= 0, lowest=0;
   for(int i=1; i<n; i++){
      if(student[i].gpa>student[highest].gpa){
        highest=i;
      }
      if(student[i].gpa<student[lowest].gpa){
        lowest=i;
      }
}

cout<<"\n**********************************************"<<endl;
cout<<"**************** class Topper ******************"<<endl;

cout<<"Topper Name : "<<student[highest].name<<endl;
cout<<"Topper age : "<<student[highest].age<<endl;
cout<<"Topper major : "<<student[highest].major<<endl;
cout<<"Topper semester : "<<student[highest].semester<<endl;
cout<<"Topper Gpa : "<<student[highest].gpa<<endl;

cout<<"\n*****************************************"<<endl;
cout<<"************* class legend ****************"<<endl;
cout<<"legend Name : "<<student[lowest].name<<endl;
cout<<"legend age : "<<student[lowest].age<<endl;
cout<<"legend major : "<<student[lowest].major<<endl;
cout<<"legend semester : "<<student[lowest].semester<<endl;
cout<<"legend Gpa : "<<student[lowest].gpa<<endl;
}

int main(){
 Student student[4];
 for(int i=0; i<4; i++){
    cin>>student[i].name;
    cin>>student[i].age;
    cin>>student[i].major;
    cin>>student[i].semester;
    cin>>student[i].gpa;

 }
 
printStudentinfo(student,4);
}

