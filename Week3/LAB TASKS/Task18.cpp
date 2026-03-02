#include <iostream>
using namespace std;
int main(){
cout<<"Enter paint area:" ;
int area;
cin>>area;

cout<<"Enter width:" ;
int width;
cin>>width;

cout<<"Enter height:" ;
int height;
cin>>height;
int walls_painted;
walls_painted=(area)/(width*height);
cout<<"Walls painted= "<<walls_painted;
}