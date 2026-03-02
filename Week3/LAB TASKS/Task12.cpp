#include <iostream>
using namespace std;
int main(){
cout<<"Enter the current world population:" ;
int population;
cin>>population;

cout<<"Enter the monthly birth rate (number of births per month):" ;
int birth;
cin>>birth;

int decades;
decades=360*birth+population;
cout<<"population in three decades will be:"<<decades;
}