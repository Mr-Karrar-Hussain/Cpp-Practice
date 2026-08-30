#include<iostream>
using namespace std;

struct Student{
     string name;
    int rollNo;
    float marks;
};
void printStudentinfo(Student student[], int n){
for(int i=0; i<n; i++){
    cout<<student[i].name<<"  ";
    cout<<student[i].rollNo<<"  ";
    cout<<student[i].marks<<"  ";
    cout<<endl;

 }
 int maxim = 0;
for(int i=1; i<n; i++){
    if(student[i].marks>student[maxim].marks){
        maxim=i;
    }
}
cout<<student[maxim].name<<endl;
cout<<student[maxim].rollNo<<endl;
cout<<student[maxim].marks<<endl;
}

int main(){

 Student student[5];
 for(int i=0; i<5; i++){
    cin>>student[i].name;
    cin>>student[i].rollNo;
    cin>>student[i].marks;
 }
printStudentinfo(student, 5);
}

