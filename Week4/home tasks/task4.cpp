#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of RED ROSES:";
    int RED_ROSES;
    cin>>RED_ROSES;
    cout<<"Enter the number of WHITE ROSES:";
    int WHITE_ROSES;
    cin>>WHITE_ROSES;
    cout<<"Enter the number of TULIP:";
    int TULIP;
    cin>>TULIP;
    float original_price;
    original_price=(RED_ROSES*2)+(WHITE_ROSES*4.10)+(TULIP*2.50);
    cout<<"original price:"<<original_price<<endl;
    if(original_price > 200){
    (original_price*0.20);
    }
    float discount_price;
    discount_price=original_price-(original_price*0.20);
    cout<<"price after Discount:"<<discount_price;
}