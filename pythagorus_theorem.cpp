#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the lenght of a : ";
    cin>>a;
    cout<<"Enter the lenght of b : ";
    cin>>b;
    c=sqrt(pow(a,2.0)+pow(b,2.0));
    cout<<"The lenght of c is : "
        <<setprecision(2)<<c<<endl;
    return 0 ;
}