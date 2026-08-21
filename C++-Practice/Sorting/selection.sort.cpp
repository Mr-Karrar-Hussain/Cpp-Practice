#include<iostream> 
using namespace std;

int main(){
  cout<<"Enter the size of array: ";
int size;
cin>>size;
int arr[size];
cout<<"enter the array element : ";
for(int i=0; i<size; i++){
    cin>>arr[i];
}
for(int i=0; i<size-1; i++){
  int   smallindex=i;
    for(int j=i+1; j<size; j++){
      if(arr[j] < arr[smallindex]){ 
       
        smallindex=j;
       }
    
      }
    swap(arr[i],arr[smallindex]);
}
cout<<"\n ..............selection sort...........\n  "<<endl;
for(int i=0; i<size; i++){
    cout<<arr[i]<<"  ";
}




}