#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of customers: ";
    cin>>num;
    string cust[num];
    for(int i=0;i<num;i++){
        cin>>cust[i];
    }
    char c;
    cout<<"Enter character: ";
    cin>>c;
    int count=0;
    for(int i=0;i<num;i++){
        if(cust[i][0]==c){
            count++;
        }

    }
    cout<<"Total names starting with "<<c<<" are "<<count;
}