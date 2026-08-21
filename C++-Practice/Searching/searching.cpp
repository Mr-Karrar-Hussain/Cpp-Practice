#include<iostream>
using namespace std;
int search(int arr[], int n; int t){
    for(it i=0; i<n; i++){
        if(arr[i]==t){
            return i;
        }
    }
}

int smaller(int arr[]. int n; int t){
    int mini=0,j;
   for(int i=1; i<n; i++){
   if(arr[i]<t ){
       if(arr[i]>arr[min]){
         j=i;
       }
       mini++;
   }
}
return j;
}
int large(int arr[], int n, int t){
    int maxi=0 , k;
    for(int i=1; i<n; i++){
        if(arr[i]>target){
            if(arr[i]<arr[maxi]){
                k = i;
            }
            maxi++;
        }
    }
    return k;
}


int main(){
int m;
cin>>m;
int arr[m];
for(int i=0; i<m; i++){
    cin>>arr[i];
}
int t;
cin>>t;
cout<<search(arr,m,t);
cout<<small(arr,m,t);
cout<<large(arr,m,t);

}

