#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

int n;
cout<<"size of vector: ";
cin>>n;
int sum=0;
vector<int> v(n);
cout<<"enter the values: ";
for(auto i=0; i<n; i++){   
cin>>v[i];
sum=sum+v[i];

}

cout<<"the values are: ";
for(int i=0; i<n; i++)
cout<<v[i]<<" ";
cout<<endl;
 int largest = *max_element(v.begin(),v.end()-1);
 cout<<"largest: "<<largest<<endl;
cout<<"sum of the vector: "<<sum;
}

