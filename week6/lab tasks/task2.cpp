#include<iostream>
using namespace std;
int main(){
    int num[5]={43,23,54,67,12};
    for(int i=1 ; i<5; i=i+2){
        cout<<"The "<<i+1<<" element at the location "<<i+1<<" is:"<<num[i]<<endl;
    }
}