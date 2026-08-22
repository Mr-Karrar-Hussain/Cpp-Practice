#include <iostream>
using namespace std;


int main(){
int n=8;
int arr[]={2,1 ,2,3,1,2, 4 ,3};

for(int i=0; i<n; i++){
bool already=false;

    
    for(int j=0; j<i; j++){
        if(arr[i]==arr[j]){
            already=true;
            break;
        
        }
    }
    if(already){
        continue;
    }
    int count=0;
    for(int k=0; k<n; k++){
        if(arr[k]==arr[i]){
             count++;
        }
    }
    cout<<"count for"<<"  "<<arr[i]<<" "<<count<<endl;
}
}