#include<iostream>
#include<climits>
using namespace std;


int main(){
  int size;
  cout<<"Enter the size of array: ";
  cin>>size;

  int arr[size];  //for small size of array;
  cout<<"Enter the element of array: ";
  for (int i=0 ; i<size;   i++ ){
        cin>>arr[i];
  }


     cout<<"\n ************** SUBARRAYS*************** "<<endl;
     cout<<"\n  Total SUBARRAYS of array are : "<< size*(size+1)/2<<endl;
            cout<<"\nSUBARRAYS\n";
     for(int start=0; start<size; start++){
        for(int end=start; end<size; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            
            cout<<"  ";
        }
        cout<<endl;
     }

           cout<<"\n************ MAX-SUM ************* "<<endl;

           cout<<" Kadane's Algorithm | Maximum Subarray Sum  : "<<endl;
           

           int currentSum=0 ,maxSum=INT_MIN;
           for(int value :arr){ 
           currentSum +=value;
           maxSum = max(currentSum , maxSum);
           if(currentSum<0){
            currentSum=0;
           }
           }
           cout<<"\n MAXIMUM--SUM : ";
           cout<<maxSum;

    }







