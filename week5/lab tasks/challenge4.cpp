#include<iostream>
using namespace std;
int main(){
    for(int x=1;x<=5;x++){
        for(int y=1;y<=x;y++)
        cout<<"*";
        cout<<"\n";
    }
    for(int a=5;a>=1;a--){
       for(int b=1;b<=a;b++)
       cout<<"*";
       cout<<"\n";
    }    

}