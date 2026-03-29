#include<iostream>
using namespace std;
int main(){
    int num[5]={1,2,3,4,5};
   int sum=0;
   float avg=0;
   for(int i=0; i<5; i=i+1){
    sum=sum+num[i];
   }
    cout<<"sum of first five natural number is :"<<sum<<endl;

        avg=sum/5;
    cout<<"average of first five natural numbers is:"<<avg<<endl;
   
}

