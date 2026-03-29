#include <iostream>
using namespace std;
int main(){
    int num[5];
    for(int i=0; i<5 ; i=i+1){
        cout<<"Enter the "<<i+1<<" Number:";
        cin>>num[i];
    }
        cout<<"The 1st element in array is:"<<num[0]<<endl;
        cout<<"The last element in array is:"<<num[4]<<endl;
    
}
