#include<iostream>
using namespace std;
int peak(int arr[], int n){
    for(int i=1; i<n-1; i++){
        if(arr[i]>arr[i-1]  && arr[i]>arr[i+1])
        return i;    
}
return -1;
};
int main( ){
int s;
cin>>s;
int arr[s];
for(int i=0; i<s; i++){
    cin>>arr[i];
}
cout<<peak(arr,s );

}
