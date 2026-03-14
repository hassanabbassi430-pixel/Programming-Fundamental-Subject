#include <iostream>
using namespace std;
int main(){
    cout<<" Enter the name of the figure:";
    string shape;
    cin>>shape;
    double area=0;
   if (shape=="square"){
    int l;
    cin>>l;
    area=l*l;
    } else if(shape=="rectangle"){
    float length;
    cin>>length;
    float width;
    cin>>width;
    area=length*width;
    } else if(shape=="circle"){
    int radius;
    cin>>radius;
    area=3.1415*radius*radius;
    } else  if(shape=="triangle"){
    float base;
    cin>>base;
    float height;
    cin>>height;
    area=0.5*base*height;
    }else{
        cout<<"unknown shape";
    }
    cout<<"area is:"<<area;
}