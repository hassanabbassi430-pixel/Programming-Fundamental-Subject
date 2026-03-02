#include <iostream>
using namespace std;
int main(){
cout<<"Enter the movie name:" ;
string Name;
cin>>Name;

cout<<"Enter the adult ticket price: $";
float Adult_price;
cin>>Adult_price;

cout<<"Enter the child ticket price: $";
float Child_amount;
cin>>Child_amount;

cout<<"Enter the number of adult tickets sold:" ;
int Adult_sold;
cin>>Adult_sold;

cout<<"Enter the number of child tickets sold:" ;
int Child_sold;
cin>>Child_sold;

cout<<"Enter the percentage of amount to be donated to charity:";
float Percentage;
cin>>Percentage;
cout<<endl<<endl<<endl;

cout<<"movie:"<<Name<<endl;

float total_amount;
total_amount=(Adult_price*Adult_sold)+(Child_amount*Child_sold);
cout<<"Total Amount Generated from ticket sales: $"<<total_amount<<endl;

float donation_amount;
donation_amount=(total_amount)*(Percentage/100);
cout<<"Donation to charity: $"<<donation_amount<<endl;

float remain_amount;
remain_amount=(total_amount)-(donation_amount);
cout<<"Remaining amount after donation: $"<<remain_amount<<endl;
}