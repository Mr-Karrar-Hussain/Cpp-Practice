#include <iostream>
using namespace std;

int solve(int arr[], int size){
    int max=0;
    for(int i=1; i<size; i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    return max;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<solve(arr,n);

}