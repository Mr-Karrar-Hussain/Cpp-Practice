#include<iostream>
#include <vector>
using namespace std;



int main(){
int size;
cout<<"enter the size: ";
cin>>size;
int count=0;
vector <int> v(size);
for(int i=0; i<=size; i++){
cin>>v[i];
if(v[i]%2==0){
    cout<<"even numbers: "<<v[i]<<endl;
    count++;
}
}
cout<<count;
}