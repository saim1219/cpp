#include<iostream>
using namespace std;
int main()
{
    float milesTravelledByCar=375,
        gallonsOfGasoline=15;
    cout<<"Gallons of Gasoline = "<<gallonsOfGasoline<<" gallons"<<endl
        <<"       Miles Driven = "<<milesTravelledByCar<<" miles"<<endl<<endl
        <<"                MPG = Miles Driven/Gallons of Gas Used"<<endl
        <<"                    = "<<milesTravelledByCar<<" miles / "<<gallonsOfGasoline<<" gallons"<<endl
        <<"                    = "<<milesTravelledByCar/gallonsOfGasoline<<"mpg";
}