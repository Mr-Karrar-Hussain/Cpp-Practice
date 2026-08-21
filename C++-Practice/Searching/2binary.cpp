// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n;
   cin>>n;
   int arr[n];//just for small size array;
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
  int start=0,end=n-1,mid;
    while(start<=end){
        int target=33;
    mid=(start+end)/2;
    if(target>arr[mid]){
        start=mid+1;
    }
    else if(target<arr[mid]){
    end=mid-1;
    }
     else{
       cout<<mid;
       return 0;
     }

    }

    return -1;
}