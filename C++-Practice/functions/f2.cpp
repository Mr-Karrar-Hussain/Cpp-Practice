// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int days(int);


  int main() {
    // Write C++ code here
   int month;
   cout<<"Enetr the month: ";
   cin>>month;
   cout<<"total days in a month are: "<<days(month);
   
    return 0;
}
int days(int a){
    if(a==4||a==6||a==9||a==11)
    return 30;
    else if(a==2)
    return 28;
    else
    return 31;
    
    
}



