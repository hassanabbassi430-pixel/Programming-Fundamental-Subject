#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the temprature of the city 1:";
    float temp1;
    cin>>temp1;
    cout<<"Enter the temprature of the city 2:";
    float temp2;
    cin>>temp2;
    if(temp1-temp2 >10 || temp2-temp1>10){
        cout<<"Difference is too Big"<<endl;
        cout<<"Programm End";
    }
    else {
        cout<<"program End";
    }
}