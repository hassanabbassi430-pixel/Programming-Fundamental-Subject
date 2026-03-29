#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of flights: ";
    cin>>num;
    cout<<endl;
    string flightnum[num];
    string destinations[num];
    float seatsavailable[num];
    int count=0;
    for(int i=0;i<num;i++){
        cout<<"Enter Flight number for Flight "<<i+1<<" : ";
        cin>>flightnum[i];
        cout<<"Enter Destination of Flight "<<flightnum[i]<<" : ";
        cin>>destinations[i];
        cout<<"Enter seats available for Flight "<<flightnum[i]<<" : ";
        cin>>seatsavailable[i];
        cout<<endl;
    }
    
    cout<<endl;
    cout<<"Flight Information"<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0;i<num;i++){
        cout<<"Flight "<<flightnum[i]<<" to "<<destinations[i]<<" has "<<seatsavailable[i]<<" seats available."<<endl;
    }
}