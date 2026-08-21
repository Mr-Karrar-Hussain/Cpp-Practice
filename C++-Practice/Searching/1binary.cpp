#include <iostream>
using namespace std;

int main(){
int arr[6]={0,2,4,6,8,10};
int key=2;
int mid,l=0,h=6-1;
while(l<=h){
    mid=(l+h)/2;
    if (key==arr[mid]){
   cout<<mid;
   return 0;
    }
    else if(key<arr[mid]) 
    h=mid-1;
    else
    h=mid+1;
}

}
