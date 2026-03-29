#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter how many number you want to enter: ";
    cin>>count;
    int num[count];
    for(int i=0; i<count; i=i+1){
        cout<<"The "<<i+1<<" element is:";
        cin>>num[i];
    }
    cout<<"you entered numbers are:";
    for(int i=0;i<count;i++){
    cout<<num[i]<<" ";
}
    cout<<endl;

}