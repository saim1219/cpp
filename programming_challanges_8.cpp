#include<iostream>
using namespace std;
int main()
{
    float P_O_P_P_CitrusFlavour=58,
          surveyedCustomers=16500,
          P_O_P_BuyedDrinks=14.9;
    int   N_O_P_BuyedDrinks=(P_O_P_BuyedDrinks/100)*surveyedCustomers,
          N_O_P_P_CitrusFlavour=(P_O_P_P_CitrusFlavour/100)*N_O_P_BuyedDrinks;
    cout<<"Solution 1 :"<<endl<<endl
        <<"        No of customers purchased Drinks = "<<N_O_P_BuyedDrinks<<" persons"<<endl<<endl
        <<"Solution 2 :"<<endl<<endl
        <<"        No of customers prefered Citrus Flavour = "<<N_O_P_P_CitrusFlavour<<" persons"<<endl<<endl;
    return 0;
}