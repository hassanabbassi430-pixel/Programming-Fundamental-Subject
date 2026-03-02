#include <iostream>
using namespace std;
int main(){
cout<<"Enter Voltage (in volts):";
int voltage;
cin>>voltage;

cout<<"Enter Current (in Amperes):";
int current;
cin>>current;
cout<<" The Power is ";
int power;
power=voltage*current;
cout<<power<<" watts";
}