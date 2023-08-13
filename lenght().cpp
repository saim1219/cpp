#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name and i will count your name letters : ";
    getline(cin,name);
    cout<<"Your name have "<<name.length()<<" letters.";
    return 0;
}