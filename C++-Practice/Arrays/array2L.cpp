/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int solve(int arr[], int n){
    int max=0, smax=-1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[max]){
            smax=max;
            max=i;
        }
        else if(arr[i]>arr[smax] && arr[i]!=arr[max]){
            smax=i;
        }
    }
    return arr[smax];
}


int main(){
   
   int n=8;
    
    int arr[n]={12 ,5, 19,7,3, 15, 10,17};
    cout<<solve(arr, n);

    return 0;
}