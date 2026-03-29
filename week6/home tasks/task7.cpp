#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of products: ";
    cin>>num;
    string productNames[num];
    float prices[num];
    float total[num];
    int stock[num];
    for(int i=0;i<num;i++){
        cout<<"Enter name of product "<<i+1<<" : ";
        cin>>productNames[i];
        cout<<"Enter price of "<<productNames[i]<<" : $";
        cin>>prices[i];
        cout<<"Enter quantity of "<<productNames[i]<<" : ";
        cin>>stock[i];
        cout<<endl;
        total[i]=prices[i]*stock[i];
    }
    
    cout<<endl;
    cout<<"Product Inventory Report"<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0;i<num;i++){
        cout<<productNames[i]<<": $"<<prices[i]<<", "<<stock[i]<<" in stock, Total value: $"<<total[i]<<endl;
    }
}