#include <iostream>
using namespace std;
int main(){
    cout<<" enter number:";
    int num;
    cin>>num;
    cout<<" enter digit:";
    int digit;
    cin>>digit;
    int count=0;
    for(; num>0;num/=10)
    if(num%10==digit){
        count++;
    }
    cout<<"frequency of "<<digit<<" is: "<<count;
}