#include <iostream>
using namespace std;
int main(){
cout<<"Enter the number of sides of the polygon :" ;
int sides;
cin>>sides;
cout<<"The total sum of internal angles of a:" ;
cout<<sides<<"-sided polygon is :" ;
int angles;
angles=(sides-2)*180;
cout<<angles<<" degrees";
}