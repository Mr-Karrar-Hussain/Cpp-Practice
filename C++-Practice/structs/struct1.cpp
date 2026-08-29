#include<iostream>
using namespace std;

struct Smartphone{
    string name;
    string color;
    int storage;
    float price;
    float battery;
};
struct Person{
    string name;
    int age;
    string city;
    Smartphone smartphone;
};
void printSmartphoneinfo(Smartphone smartphone1){
cout<<" Mobile Model : "<<smartphone1.name<<endl;
cout<<" Color : "<<smartphone1.color<<endl;
cout<<" Stroage : "<<smartphone1.storage<<" GB "<<endl;
cout<<" Price : "<<smartphone1.price<<" $ "<<endl;
cout<<" Battery : "<<smartphone1.battery<<" mAH"<<endl;
cout<<"\n****************************************"<<endl;
cout<<endl;
}
void printPersoninfo(Person person){
cout<<" Owner name : "<<person.name<<endl;
cout<<" age : "<<person.age<<endl;
cout<<" City : "<<person.city<<endl;
printSmartphoneinfo(person.smartphone);



}


int main(){

Smartphone smartphone1; 
smartphone1.name = "Iphone 17 pro  ";
smartphone1.color = " Orange ";
smartphone1.storage = 128 ;
smartphone1.price = 9999.99;
smartphone1.battery = 6000; 

Smartphone smartphone2;
smartphone2.name = "Google pixel  ";
smartphone2.color = " Gray ";
smartphone2.storage = 128 ;
smartphone2.price = 8888.99;
smartphone2.battery = 5000; 

// printSmartphoneinfo(smartphone1);
// printSmartphoneinfo(smartphone2);

Person person;
person.name = " Temoori ";
person.age = 15;
person.city = " Skardu ";
person.smartphone = smartphone1;

printPersoninfo(person);


}