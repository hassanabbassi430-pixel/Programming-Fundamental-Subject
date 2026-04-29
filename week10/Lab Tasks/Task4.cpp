#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float num1;
    float num2;
    cout<<"Enter 1st Number:";
    cin>>num1;
    cout<<"Enter 2nd Number:";
    cin>>num2;
    cout<<"Minimun Number between "<<num1 << " and"<<num2 <<" is:"<<min(num1,num2);
    return 0;
}