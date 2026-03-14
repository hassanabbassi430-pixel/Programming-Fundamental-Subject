#include <iostream>
using namespace std;
int main(){
    cout<<"enter monthly salary:";
    int salary;
    cin>>salary;
    cout<<"laptop price:";
    int laptop_price;
    cin>>laptop_price;
    int advancesalary;
    advancesalary=(salary)*(0.5);
    int advancesalary_month;
    cout<<"advance salary for months:";
    cin>>advancesalary_month;
    int income;
    income=(advancesalary)*advancesalary_month;
    if(income>=laptop_price){
        cout<<"you can buy a laptop";
    }
    else{
        cout<<"you can't buy a laptop";
    }
   cout <<endl<<endl;
    int month_required;
    month_required=laptop_price/advancesalary;
    cout<<"Months required to buy a laptop:"<<month_required;

}