#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter number of elements: ";
    cin>>count;
    int num[count];
    cout<<"Enter Numbers one per line: "<<endl;
    for(int i=0;i<count;i++){
        cin>>num[i];

    }
    int sum=0;
    for(int i=0;i<count;i++){
        sum=sum+num[i];
    }
    cout<<"Sum of all elements: "<<sum;
}