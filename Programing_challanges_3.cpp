#include<iostream>
using namespace std;
int main()
{
    int payPeriods=26;
    float payAmount=2200,
          annualPay=payAmount*payPeriods;
    cout<<"Pay Periods = "<<payPeriods<<" times"<<endl
        <<" Pay Amount = "<<payAmount<<"$"<<endl<<endl
        <<" Annual Pay = Pay Periods x Amount Pay"<<endl
        <<"            = "<<payPeriods<<"times x "<<payAmount<<"$"<<endl
        <<"            = "<<annualPay<<"$";
        return 0;
}