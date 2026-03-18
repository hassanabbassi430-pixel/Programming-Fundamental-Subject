#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int tempnum=num;
    int digit;
    while(num!=0){
        num=num/10;
        digit++;
    }
    if(tempnum==0){
        digit=1;
    }
    cout<<"There are "<<digit<<" digits in "<<tempnum;
}