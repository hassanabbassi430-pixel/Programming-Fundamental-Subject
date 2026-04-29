#include<iostream>
using namespace std;
//prototype
void add( int num1,int num2);

int main(){
    int num1;
    int num2;
    cout<<"Enter the 1st number :";
    cin>>num1;
    cout<<"Enter the 2nd Number:";
    cin>>num2;
    //functional cell
    add(num1,num2);
    return 0;
}
    
    void add(int num1,int num2){
    cout<<"sum:"<<num1+num2;
    }
    
