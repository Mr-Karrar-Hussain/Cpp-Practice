#include <iostream>
#include <vector>


using namespace std;


int main(){
int n;
cout<<"enter the size: ";
cin>>n;
vector <int > v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
int dup=v[0];
for(int i=1; i<n; i++){
if(v[i]!=dup)
dup=v[i];
else cout<<"duplicates : "<<v[i];
}

}