/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void solve(int arr[], int n){
  for(int i=0; i<n; i++){
    int max=i;
    for(int j=i; j<n-1; j++){
        if(arr[j]==0){
            swap(arr[j],arr[j+1]);
         }
       }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
     
    void solve1(int arr[], int n) {
    int j = 0;

    for(int i=0; i<n; i++) {

        if(arr[i]!= 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
}









}

int main(){
   
   int n=8;
    
    int arr[n]={0,5, 0,7,3, 0, 10,17};
    solve(arr, n);
     solve1(arr,n);
    return 0;
}