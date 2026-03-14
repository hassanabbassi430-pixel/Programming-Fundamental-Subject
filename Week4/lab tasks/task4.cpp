#include <iostream>
using namespace std;
int main(){
    cout<<"Enter teh cost of the dress:";
    int cost;
    cin>>cost;
    if (cost<1500){
        cout<<"you will buy the dress";
    }
    if (cost>1500){
        cout<<"you will not buy the dress";
    }
}