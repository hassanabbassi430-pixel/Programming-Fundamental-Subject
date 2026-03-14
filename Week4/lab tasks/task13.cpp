#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to the calculator"<<endl;
    int num1;
    cout<<"Enter the first Number:";
    cin>>num1;
     char op;
    cout<<"Enter the operator:";
    cin>>op;
    int num2;
    cout<<"Enter the second Number:";
    cin>>num2;
    int result;
    if(op=='+'){
      result=num1-num2;
      cout<<num1<<"-"<<num2 <<"="<<result<<endl; 
    }
    if(op=='-'){
     result=num1+num2;
    cout<<num1<<"+"<<num2<<"="<<result<<endl;
    }
    if(op=='*'){
        result=num1/num2;
        cout<<num1<<"/"<<num2<<"="<<result<<endl;
    }
    if(op=='/'){
        result=num1*num2;
        cout<<num1<<"*"<<num2<<"="<<result<<endl;
    }


}