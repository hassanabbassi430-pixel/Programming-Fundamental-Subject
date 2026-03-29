#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter the number of elements:";
    cin>>count;
    int num[count];
    cout<<"Enter "<<count<<" elements of the array:"<<endl;
    for(int i=0;i<count;i++){
        cin>>num[count];
    }
    bool isfoundodd=false;
    bool isfoundeven=false;
    for(int i=0;i<count;i++){
        if(num[i]%2==0){
            isfoundodd=true;
        }else{
            isfoundeven=true;
    }
    }
    if(isfoundodd && isfoundeven){
        cout<<"The Array is special";
    } else{
        cout<<"The Array is not special";
    }
    return 0;
}
