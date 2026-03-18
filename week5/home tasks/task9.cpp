#include<iostream>
using namespace std;
int main(){
    int num1;cout<<"Enter a large number: ";
    cin>>num1;
    int freq;cout<<"Enter the number for frequency: ";
    cin>>freq;
    int count;
    int num2=num1;
    for(;num1>0;num1=num1/10){
        int lastdigit= num1%10;
        if(lastdigit==freq){
            count++;
        }
    }        
       if(num2==0&&freq==0){
        count=1;
    }
          cout<<"Frequency of "<<freq<<" in "<<num2<<" is :"<<count;
            
}