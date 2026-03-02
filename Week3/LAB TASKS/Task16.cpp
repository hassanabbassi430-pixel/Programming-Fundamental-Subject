#include <iostream>
using namespace std;
int main(){
cout<<"Enter imposters:" ;
int imposters;
cin>>imposters;

cout<<"Enter players:" ;
float players;
cin>>players;

float chance;
chance=100 * (imposters/players);
cout<<"chance=" <<chance <<"%";
}