#include<iostream>
using namespace std;
int main()
{
    int books,
        months;
    double perMonth;
    cout<<"How many books do you plan to read?";
    cin>>books;
    cout<<"How many months will it take you to read them?";
    cin>>months;
    perMonth = static_cast<double>(books)/months;
    cout<<"That is "<<perMonth<<" Books per Month.\n";
    return 0;
}