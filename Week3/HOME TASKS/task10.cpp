#include <iostream>
using namespace std;
int main(){
cout<<"Enter the person's age:" ;
int age;
cin>>age;

cout<<"Enter the number of times they have moved:";
int move;
cin>>move;

int avg_years;
avg_years=(age)/(move+1);
cout<<"Average number of year lived in the same house:"<<avg_years;
}