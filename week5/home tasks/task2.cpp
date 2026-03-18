#include<iostream>
using namespace std;
int main(){
    int number=0, sum=0;
    while(number>=0){
        sum=sum+number;
        cout<<"Enter number for sum: ";
        cin>>number;
    }
    cout<<"Sum : "<<sum;
}