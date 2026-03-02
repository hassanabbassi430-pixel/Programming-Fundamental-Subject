#include <iostream>
using namespace std;
int main(){
cout<<"Enter vegetable price per kilogram (in coins):";
float vegetable_price;
cin>>vegetable_price;

cout<<"Enter fruit price per kilogram (in coins):";
float fruit_price;
cin>>fruit_price;

cout<<"Enter total kilograms of vegetables:";
int vegetable_kilogram;
cin>>vegetable_kilogram;

cout<<"Enter total kilograms of fruits:";
int fruit_kilogram;
cin>>fruit_kilogram;

float totalearningincoins;
totalearningincoins=(vegetable_price*vegetable_kilogram)+(fruit_price*fruit_kilogram);
float earning_Rps;
earning_Rps=totalearningincoins/1.94;
cout<<"Total earnings in Rupees (Rps):"<<earning_Rps;
}
 