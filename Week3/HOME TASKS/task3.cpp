#include <iostream>
using namespace std;
int main(){
cout<<"Enter Initial Velocity (m/s):" ;
int initial_velocity;
cin>>initial_velocity;

cout<<"Enter Accelaration (m/s^2):" ;
int accelaration;
cin>>accelaration;

cout<<"Enter Time (s):" ;
int time;
cin>>time;

int final_velocity;
final_velocity=(time*accelaration)+initial_velocity;
cout<<"Final Velocity:"<<final_velocity;
}