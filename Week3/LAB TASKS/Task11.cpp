#include <iostream>
using namespace std;
int main(){
cout<<"Enter the number of wins:" ;
int wins;
cin>>wins;

cout<<"Enter the number of draws:" ;
int draws;
cin>>draws;

cout<<"Enter the number of losses:" ;
int losses;
cin>>losses;

int points;
points=wins*3+draws*1+losses*0;
cout<<"pakistan has obtained "<<points <<" in Asia cup Tournment";
} 