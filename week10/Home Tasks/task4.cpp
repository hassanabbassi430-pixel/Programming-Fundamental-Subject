#include<iostream>
using namespace std;
//prototype
void ProjectTimeCalculation(float Hproject,int days,int workers);
//function
void ProjectTimeCalculation(float Hproject,int days,int workers){
    int neededhours;
    int hoursleft;
    int H;
    int workingDays;
    workingDays=days*0.9;
    H=workingDays*workers*(8+2);
    if(Hproject>H){
         neededhours=Hproject-H;
        cout<<"Not enough time!"<<neededhours<<" hours needed";

    } else{
        Hproject<=H;
         hoursleft=H-Hproject;
        cout<<"yes! "<<hoursleft<<" hours left";
    }
}
int main(){
    float Hproject;
    cout<<"Enter hours that needed for project:";
    cin>>Hproject;
    int days;
    cout<<"Enter the Number of days for firm:";
    cin>>days;
    int num;
    cout<<"Enter the Number of workers:";
    cin>>num;
    ProjectTimeCalculation(Hproject,days,num);
   return 0;

}