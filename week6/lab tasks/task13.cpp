#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter number of elemnets you want to enter:";
    cin>>count;
    int num[count];
    cout<<"Enter "<<count<<" numbers;onr per line:"<<endl;
    for(int i=0;i<count;i=i+1){
        cin>>num[i];
    }
    cout<<"Numbers in the array:"<<endl;
    for(int i=0;i<count;i++){
        cout<<"num["<<i<<"]="<<num[i]<<endl;
    }
    int largernum;
    cout<<"Largest number in the array is:";
    largernum=num[0];
    for(int i=1;i<count;i++){
    if(largernum<num[i]){
        largernum=num[i];
    }
    }
    cout<<largernum;
}
