#include<iostream>
using namespace std;        
bool isSorted(int arr[], int n){
    bool flag=true;
for(int i=0; i<n-1; i++){
    if(arr[i]>arr[i+1]){
        flag = false;
        break;
    }
}
return flag;
}
int main(){
int size;
cin>>size;
int arr[size];
for(int i=0; i<size; i++){
    cin>>arr[i];
}
if(isSorted(arr, size)){
    cout<<"YES";
}else{
    cout<<"NO";
}
}   