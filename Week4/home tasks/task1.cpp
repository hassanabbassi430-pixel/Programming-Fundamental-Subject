#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the  country name:";
    string name;
    cin>>name;
    cout<<"Enter ticket price:";
    int price;
    cin>>price;
    int discount_price;
    if(name=="ireland"){
     discount_price =price-(price*0.10);
    }
    else{
        discount_price=price-(price*0.05);
    }
    cout<<"discounted price is:"<<discount_price;
    
}