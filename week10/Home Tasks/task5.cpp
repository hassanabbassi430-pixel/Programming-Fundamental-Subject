#include<iostream>
using namespace std;
//prototype
void calculateSalary(float baseSalary,int score,int experience);
//function
void calculateSalary(float baseSalary,int score,int experience){
    int Bonus;
    if(score>=90){
        Bonus=0.2;
    } else if(score>=75){
        Bonus=0.1;
    } else{
        Bonus=0.5;
    }
    int extraBonus;
        if(experience>=5){
            extraBonus=0.5;
        }
        int finalSalary=baseSalary+Bonus+extraBonus;
        cout<<finalSalary;
    }
    int main(){
        float baseSalary;
        int score,experience;
        cout<<"Enter Base Salary,score,Experience:";
        cin>>baseSalary;
        cin>>score;
        cin>>experience;
        cout<<"Final Salary:";
        calculateSalary(baseSalary,score,experience);
        return 0;

    }