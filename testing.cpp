#include<iostream>
using namespace std;
int main()
{
    int a=5,b=12;
    cout<<b/static_cast<double>(a)<<endl;
    a%=a/5;
    cout<<a;
}