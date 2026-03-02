#include <iostream>
using namespace std;
int main(){
cout<<"Enter the size of the fertilizer bag in pounds:" ;
float size;
cin>>size;

cout<<"Enter the cost of the bag: $" ;
float bag_cost;
cin>>bag_cost;

cout<<"Enter the area in square feet that can be covered by the bag:"<<endl ;
int area;
cin>>area;

float fertilizer_cost ;
fertilizer_cost=bag_cost/size;
cout<<"cost of fertilizer per pound: $"<<fertilizer_cost<<endl;

float area_cost;
area_cost=bag_cost/area;
cout<<"cost of fertilizing per square foot: $"<<area_cost<<endl;
} 