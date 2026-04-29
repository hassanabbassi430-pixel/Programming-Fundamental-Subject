#include<iostream>
using  namespace std;
//prototype
void calculatePoolState(int P1,int P2,float H,int V);
//function
void calculatePoolState(int P1,int P2,float H,int V){
    int overflow;
    float poolPer;
    float pipe1Per;
    float pipe2Per;
    float totalWater;
    totalWater=(P1+P2)*H;
    if(totalWater<=V){
    poolPer=(totalWater/V)*100;
    pipe1Per=(P1*H/totalWater)*100;
    pipe2Per=(P2*H/totalWater)*100;
    cout<<"Pool fill percentage:"<<poolPer<<"%"<<endl;
    cout<<"Pipe 1 contribution:"<<pipe1Per<<"%"<<endl;
    cout<<"Pipe 2 contribution:"<<pipe2Per<<"%"<<endl;
    } else if(totalWater>V){
          overflow=totalWater-V;
          cout<<"for "<<H<<" hours,the pool overflown with "<<overflow<<" liters";
    } else{
        cout<<"Invalid inputs";
    }

}
 int main(){
    int V;
    cout<<"Enter volume of the pool in liters:";
    cin>>V;
    int P1;
    cout<<"Enter Flow Rate of First Pipe per hour:";
    cin>>P1;
    int P2;
    cout<<"Enter Flow Rate of Second Pipe per hour:";
    cin>>P2;
    float H;
    cout<<"Enter the hours that worker is absent:";
    cin>>H;
    calculatePoolState(P1,P2,H,V);
    return 0;
 }