#include<iostream>
using namespace std;
int main()
{
    int sec=10055;
    int mins=sec/60;
    int rem_sec=sec%60;
    cout<<"Mins : "<<mins<<" Secs : "<<rem_sec;
}