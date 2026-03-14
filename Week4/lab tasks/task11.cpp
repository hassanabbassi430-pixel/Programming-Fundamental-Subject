#include <iostream>
using namespace std;
int main(){
    cout<<"Enter your bill:";
    int bill;
    cin>>bill;
    int discounted_price;
    if (bill >5000){
    discounted_price=bill-(bill* 0.10);
    }
    if (bill<=5000){
    discounted_price=bill -(bill*0.05);
    }
    cout<<"BILL after discount is :"<<discounted_price;
}