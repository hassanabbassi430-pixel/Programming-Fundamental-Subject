#include <iostream>
using namespace std;
int main(){
cout<<"Enter Age:" ;
int age;
cin>>age;

cout<<"Enter Moves:" ;
int moves;
cin>>moves;

float average_years;
average_years=(age)/(moves+1);
cout<<"Average years ="<<average_years;
}