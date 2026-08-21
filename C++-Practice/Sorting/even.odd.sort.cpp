#include<iostream>
using namespace std;
int main(){
int size;
cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cin >> arr[i];
   
    
}
int j=0;
for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            swap(arr[i],arr[j]);
        j++;
        }
    }

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
}