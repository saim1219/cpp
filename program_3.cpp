#include<iostream>
using namespace std;
int main()
{
    string name,city;
    int age;
    cout<<"First you have to enter the name,age and then city!"<<endl;
    cin>>name>>age>>city;
    cout<<"Lines are ready!"<<endl<<endl;
    cout<<"My name is "<<name<<".\n"
        <<"I am from "<<city<<".\n"
        <<"I am of "<<age<<".";
}