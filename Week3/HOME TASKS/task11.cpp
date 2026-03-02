#include <iostream>
using namespace std;
int main(){
cout<<"Number of square meters you can paint:";
int area;
cin>>area;

cout<<"width of the single wall (in meters):";
int width;
cin>>width;

cout<<"Height of sngle wall (in meters):";
int height;
cin>>height;

int walls_No;
walls_No=(area)/(width*height);
cout<<"Number of walls you can paint:"<<walls_No;
}