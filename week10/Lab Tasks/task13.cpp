#include<iostream>
using namespace std;
//prototype
void timeTravel(int hours,int min);
//function
void timeTravel(int hours,int min){
  min+=15;
  if(min>=60){
    hours+=min/60;
    min%=60;
  }
  //handle 24-hours 
  hours%=24;
  cout<<"updated time  "<<hours<<":"<<min;
}
 int main(){
    int hours,min;
    cout<<"Enter Hours:";
    cin>>hours;
    cout<<"Enter minutes:";
    cin>>min;
    timeTravel(hours,min);
    return 0;
 }