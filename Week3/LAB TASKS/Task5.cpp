#include <iostream>
using namespace std;
int main(){
cout<<"Enter the charge(Q) in coulomb: " ;
int charge;
cin>>charge;

cout<<"Enter the time(t) in seconds: ";
float time;
cin>>time;


cout<<"The current(I) is = ";
float current;
current=charge/time;
cout<<current<<" Ampere";
}
