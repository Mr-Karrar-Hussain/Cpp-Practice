#include<iostream>
using namespace std;



int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int target;
cin>>target;
int mid=0,st=0,end=n-1,j=0;
while(st<=end){
mid=st+(end-st)/2;

if(arr[mid]<target){
    st=mid+1;
    
}else if(arr[mid]>target){
    end=mid-1;
}
else if(arr[mid]==target){
    cout<<mid<<"  "<<arr[mid]<<"  ";
    cout<<mid-1<<"  "<<arr[mid-1]<<"  ";
    cout<<mid+1<<"  "<<arr[mid+1];
    
    break;
}

}



}