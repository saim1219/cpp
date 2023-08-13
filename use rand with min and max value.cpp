#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    const int minVal=0,
              maxVal=6;
    unsigned seed=time(0);
    srand(seed);
    int y=(rand()%(maxVal-minVal+1))+minVal,
        z=(rand()%(maxVal-minVal+1))+minVal;
    cout<<"Rolling the dice....\n"
        <<"("<<y<<","<<z<<")";
}