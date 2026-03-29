#include<iostream>
using namespace std;
int main(){
    int count;
    int num[count];
    cout<<"Enter numbers you wants to enter:";
    cin>>count;
    if(count<=0){
        cout<<"invalid input.Number of elements must be greater than 0."<<endl;
        return 0;
    }
    cout<<"enter "<<count<<" numbers,one per line:"<<endl;
    for(int i=0;i<count;i=i+1){
     cin>>num[i];
    }
    cout<<"reverse order in array is:";
    for(int i=count-1;i>=0;i--){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;

}