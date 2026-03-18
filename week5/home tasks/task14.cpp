#include<iostream>
using namespace std;
int main(){
    int year_target, inher;
    cout<<"Enter Inheritence: ";
    cin>>inher;
    cout<<"Enter target year: ";
    cin>>year_target;
    int age=18;

    for(int year=1800;year<=year_target;year++){
        if(year % 2 == 0){
            inher-= 12000;
        
        }
        else{
            inher-=(12000+50*age);
        }
        age++;
    }
    if(inher>=0){
        cout<<"YES!, He will live a carefree life and will have "<<inher<<" dollars left";

    }
    else{
        cout<<"He will need "<<-inher<<" dollars to survive";
    }
}