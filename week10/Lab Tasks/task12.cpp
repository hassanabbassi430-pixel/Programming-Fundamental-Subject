#include<iostream>
using namespace std;
//prototype
void findEvenOdd(int num);
//Function
void findEvenOdd(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    if(sum % 2 == 0){
     cout<<"Evenish";
    } else{
     cout<<"Oddish";
    }
}
  int main(){
    int num;
    cout<<"Enter a 5-digits Number:";
    cin>>num;
    findEvenOdd(num);
    return 0;
  }