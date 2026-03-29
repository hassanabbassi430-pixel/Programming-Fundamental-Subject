#include<iostream>
using namespace std;
int main(){
    int num[5]={15,12,19,9,10};
    for(int i=0; i<5; i=i+1){
    cout<<" The "<< i+1<<" element at location "<<i<<" is:"<<num[i]<<endl;
    }
}