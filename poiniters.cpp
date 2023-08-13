#include<iostream>
using namespace std;
int main()
{
    int a = 1000000000;
    int *ptr=&a;
    cout<<a<<endl<<&a<<endl;
    *ptr=1;
    cout<<a<<endl<<&a;
    //0x61ff08
}