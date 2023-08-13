#include<iostream>
using namespace std;
int main()
{
    float mealCharge=88.67,
          tax=6.5,
          tip=20,
          mealCost,
          tipAmount,
          taxAmount,
          totalBill; //initalization and declaration of variables
          taxAmount=88.67*(tax/100);
          mealCost=mealCharge+taxAmount;
          tipAmount=mealCost*(tip/100);
          totalBill=mealCharge+taxAmount+tipAmount; //all the formulation have been done on side before cout 
    cout<<"Meal Charge = "<<mealCharge<<"$"<<endl
        <<"        Tax = "<<tax<<"%"<<endl
        <<"        Tip = "<<tip<<"%"<<endl
        <<" Tax Amount = "<<taxAmount<<"$"<<endl
        <<" Tip Amount = "<<tipAmount<<"$"<<endl<<endl
        <<" Total Bill = Meal Charge + Tax Amount + Tip Amount"<<endl
        <<"            = "<<mealCharge<<"$ + "<<taxAmount<<"$ + "<<tipAmount<<"$"<<endl
        <<"            = "<<totalBill<<"$"; //the bill is all displayed after the cout
    return 0;
}