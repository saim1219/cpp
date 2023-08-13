#include<iostream>
using namespace std;
class Myclass
{
    public:
    void tame();
    int val1;
    int val2;
    int sum()
    {
        return val1+val2;
    }
};
void Myclass::tame()
{
    cout<<"hello";
};
int main()
{
    Myclass obj;
    obj.val1=100;
    obj.val2=100;
    cout<<obj.sum();
    obj.tame();
    return 0;
}