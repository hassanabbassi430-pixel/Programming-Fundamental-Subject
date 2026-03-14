#include<iostream>
using namespace std;
int main(){
    cout<<"Number of Holidays in a year:";
    int Holidays;
    cin>>Holidays;
    int working_days;
    working_days=365-Holidays;
    int play_timew;
    play_timew=working_days*63;
    int play_timeh;
    play_timeh=Holidays*127;
   int actual_time;
   actual_time=play_timeh+play_timew;
   int norm_time;
   norm_time=30000;
   int hours;
   int min;
  int diff_time;
    diff_time=(norm_time-actual_time);
    hours=abs(diff_time)/60;
    min=abs(diff_time) % 60;
   if(diff_time>=0 ){
cout<<"Tom sleeps well "<<hours<<" hours and " <<min<<" minutes less for paly";
   }
   if (diff_time<0){
    cout<<"Tom will run away "<<hours<<" hours and "<<min<<" minutes for play";
   }
}