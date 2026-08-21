#include <iostream>
using namespace std;
int ispalindrome(int arr[] , int n){
    bool flag=true;
for(int i=0; i<n/2;i++){
    
    if(arr[i]!=arr[n-i-1]){
        flag=false;
        break;
    }
}
return flag;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n ; i++){
    cin>>arr[i];

}
bool flag=ispalindrome(arr,n);
if(flag){
    cout<<"YES";
}else{
    cout<<"NO";
}
}