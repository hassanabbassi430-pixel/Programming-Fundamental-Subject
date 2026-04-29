#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int distanceBase;
    cout<<"Enter the distance from the base of the tree(in feet):";
    cin>>distanceBase;
    int angle;
    cout<<"Enter the angle of elevation (in degrees):";
    cin>>angle;
    float rad=angle*3.14/180;
    cout<<"Height is:"<<tan(rad)*distanceBase;
    return 0;
    
}
