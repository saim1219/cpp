#include<iostream>
using namespace std;
int main()
{
    int height,width,area;
    cout<<"This program calculates the area of the rectangle.\n"
        <<"You just have to put the space between the values you give us."<<endl;
    cin>>height>>width;
    area=height*width;
    cout<<"Area = "<<area;
    return 0;
}