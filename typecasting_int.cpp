#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int value;
    string f;
    f=typeid(static_cast<float>(value)).name();
    cout<<f;
}