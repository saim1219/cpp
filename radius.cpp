#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double PI=3.141592653589793238462643383279502884197;
    double area,radius;
    cout<<"This program calculates the area of a circle.\n";
    cout<<"Write the radius of the circle : ";
    cin>>radius;
    area=PI*pow(radius,2.0);
    cout<<"The area is "<<area<<endl;
    return 0;
}