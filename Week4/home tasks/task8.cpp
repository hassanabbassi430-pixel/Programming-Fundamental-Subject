#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number [0-100] :";
    int num1;
    cin>>num1;
    int num2;
    num2=num1 % 10;
    string t1="", t2="";

    if(num1==0){t1="zero";}

    if(num2==1){t1="one";}
    if(num2==2){t1="two";}
    if(num2==3){t1="three";}
    if(num2==4){t1="four";}
    if(num2==5){t1="five";}
    if(num2==6){t1="six";}
    if(num2==7){t1="seven";}
    if(num2==8){t1="eight";}

    if(num1==10){t1="ten";}
    if(num1==11){t1="eleven";}
    if(num1==12){t1="twelve";}
    if(num1==13){t1="thirteen";}
    if(num1==14){t1="fourteen";}
    if(num1==15){t1="fifteen";}
    if(num1==16){t1="sixteen";}
    if(num1==17){t1="seventeen";}
    if(num1==18){t1=="eighteen";}
    if(num1==19){t1=="ninteen";}

    if(num1>=20){t2="twenty";}
    if(num1>=30){t2="thirty";}
    if(num1>=40){t2="fourty";}
    if(num1>=50){t2="fifty";}
    if(num1>=60){t2="sixty";}
    if(num1>=70){t2="seventy";}
    if(num1>=80){t2="eighty";}
    if(num1>=90){t2="ninety";}

    if(num1==100){t2="one hundered";}
    cout<<t2<<""<<t1;
}