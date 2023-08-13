#include<iostream>
using namespace std;
int main()
{
    double numerator,denomerator;
    cout<<"This program show you that if you give it two values\n"
        <<"it converts them in decimal value.\n";
    cout<<"Enter the numerator : ";
    cin>>numerator;
    cout<<"Enter the denomrator: ";
    cin>>denomerator;
    cout<<"The decimal value is: "<<numerator/denomerator;
    return 0;
}