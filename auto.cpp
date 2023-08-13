#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a=10;
    auto s="namee";
    cout<<"datatype : "<<typeid(a).name()<<endl;
    cout<<"datatype : "<<typeid(s).name()<<endl;
}