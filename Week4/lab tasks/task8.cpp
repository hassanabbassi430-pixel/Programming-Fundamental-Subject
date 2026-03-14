#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the first Number:";
    int num1;
    cin>>num1;
    cout<<"Enter the second Number:";
    int num2;
    cin>>num2;
    if(num1<num2){
    cout<<"Number "<<num2<<" is greater than "<<num1;
    }
    else {
        cout<<"Number "<<num1<<" is greater than "<<num2;
     }
}