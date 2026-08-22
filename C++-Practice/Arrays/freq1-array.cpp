#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int maxim=0,m=0,mini=INT_MAX,p=0;
for(int i=0; i<n; i++){
  bool  check = false;
  for(int j=0; j<i; j++){
    if(arr[i]==arr[j]){
        check = true;
        break;
    }
  }
if(check){
    continue;
}
int count=0;
for(int k=0; k<n; k++){
    if(arr[k]==arr[i]){
        count++;
    }
}
if(count>maxim){
    maxim=count;
     m=i;
}
if(count<mini){
    mini=count;
    p=i;
}
}
cout<<"FOR MAXIMUM TIME: "<<arr[m]<<" is  "<<maxim<<"TIME"<<endl;
cout<<"FOR MINIMUM TIME : "<<arr[p]<<" is "<<mini<<"TIME";
}





