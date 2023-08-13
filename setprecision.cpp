#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const double f=10212.121212;
    const double a=10212.121212;
    cout<<setprecision(2)<<fixed<<f<<endl<<setprecision(3);
    cout<<a<<endl <<f;
}