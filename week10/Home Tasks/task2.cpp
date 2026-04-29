#include<iostream>
using namespace std;
//prototype
void pyramidVolume(int L,int W,int H,string unit,float &V );
//function
void pyramidVolume(int L,int W,int H,string unit,float &V){
    V=(1.0/3)*L*W*H;
    if (unit=="meter"){
        cout<<V<<" cubic meter";
    } else if(unit=="kilometer"){
        cout<<V/1000000000<<" cubic kilometer";
    } else if(unit=="centimeter"){
        cout<<V*1000000<<" cubic centimeter";
    } else{
        unit=="milimeter";
        cout<<V*1000000000<<" cubic milimeter";
    }
}
int main(){
    int L,W,H;
     float V;
    string  unit;
    cout<<"Enter Length,Width,Height(in meters):";
    cin>>L;
    cin>> W;
    cin>> H;
    cout<<"Enter output unit(killometer,meter,centimeter,milimeter):";
    cin>>unit;
    pyramidVolume(L,W,H,unit,V);
    return 0;
}