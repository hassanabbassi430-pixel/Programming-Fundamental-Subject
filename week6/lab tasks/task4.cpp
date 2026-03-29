#include<iostream>
using namespace std;
int main(){
     int num[5];
     for(int x=0; x<5; x=x+1){
        cout<<"Enter the "<<x+1<<" Number:";
        cin>>num[x];
     }
     cout<<"The 1st element in array is:"<<num[0]<<endl;
     cout<<"The last element in array is:"<<num[4]<<endl;
    return 0;
}