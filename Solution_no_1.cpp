#include<iostream> //include a library in c++ programn
using namespace std;
int main()
{
    int speed = 20, //defination of speed
        time = 10, //defination of time
        distance = speed * time; //defination of distance and writting its formula to find distance
    cout<<"Speed = "<<speed<<endl//printing the value of speed
        <<"Time  = "<<time<<endl //printing the value of the time
        <<"Distance = Speed x Time "<<endl//wittting the formula
        <<"Distance = "<<speed<<" x "<<time<<endl//putting the values here
        <<"Distance = "<<distance; // find the distance
        return 0;
}