#include<iostream>
using namespace std;
//protptype
void symmetricalNum(int num);
 //funtion
void symmetricalNum(int num){
    int original=num;
    int reversed=0;
    while(num!=0){
        int digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
 if(original==reversed){
    cout<<"Number is symmertical";
 }
 else {
    cout<<"Number is not symmetrical";
 }
}


int main(){
    int num;
    cout<<"Enter 3 digits number:";
    cin>>num;
    symmetricalNum(num);
    return 0;
}