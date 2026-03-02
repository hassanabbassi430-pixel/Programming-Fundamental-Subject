#include <iostream>
using namespace std;
int main(){
cout<<"Enter the Name of the person:" ;
string Name;
cin>>Name;

cout<<"Enter the target weight loss in kilograms:" ;
int weight_loss;
cin>>weight_loss;

float daysRequired=weight_loss*15;
cout<<Name<<" will need"<<daysRequired<<" days to lose"<<weight_loss<<" kg of weight by followingthe doctor's  suggestions." ;
}