#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Number:";
    int n;
    cin>>n;
    int count=0;
    for( int i=n ;i>0;i=i/10 ){
        count=count+1;
    }
    cout<<"total number of digits:"<<count;

}