#include<iostream> 
using namespace std;
void copyarray(int arr1[], int s){
    cout<<"array 2 : ";
    int arr2[s];
for(int i=0; i<s; i++){
    arr2[i]=arr1[i];
    cout<<arr2[i];
}
}
int main(){
int size;
cin>>size;
int arr1[size];

cout<<"array 1: ";
for(int i=0; i<size; i++){
    cin>>arr1[i];
}
 copyarray(arr1,size);




}