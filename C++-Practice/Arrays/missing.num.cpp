#include<iostream>
using namespace std;
int main( ){

int n;
cout<<"enter the size of array: ";
cin>>n;
int arr[n];

cout<<"enter the array value : ";
 int sum2=0;
 for(int i=0; i<n-1; i++){
    cin>>arr[i];
    sum2=sum2+arr[i];
 }
int sum1=0;
 sum1=n * (n+1) / 2;
cout<<"missing number : " <<sum1-sum2;
}

