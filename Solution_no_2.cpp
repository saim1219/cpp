#include<iostream> //include a library in c++ programn
using namespace std;
int main()
{
    float force = 172.5, //defination of force
          area = 27.5, //defination of area
          pressure = force / area; //defination of pressure and writting its formula to find pressure
    cout<<"Force = "<<force<<endl//printing the value of force
        <<"Area  = "<<area<<endl //printing the value of the area
        <<"Pressure = Force / Area "<<endl//wittting the formula
        <<"Pressure = "<<force<<" / "<<area<<endl//putting the values here
        <<"Pressure = "<<pressure; // find the pressure
        return 0;
}