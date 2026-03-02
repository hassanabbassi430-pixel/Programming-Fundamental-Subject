#include <iostream>
using namespace std;
int main(){
cout<<"Enter Imposter Count:" ;
int imposter_count;
cin>>imposter_count;

cout<<"Enter Player Count:" ;
float player_count;
cin>>player_count;

float chance;
chance=100*(imposter_count/player_count);
cout<<"Chance of being an imposter:"<<chance<<"%";
} 
