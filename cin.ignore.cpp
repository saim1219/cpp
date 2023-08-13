#include<iostream>
using namespace std;
int main()
{
    int i=0;
    cout<<"Enter the number : ";
    cin>>i;
    cin.ignore(1,'\n');
    cout<<i;
    return 0;
}