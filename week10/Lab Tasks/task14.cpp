#include<iostream>
using namespace std;
//prototype
void numbertoWords(int num);
//function
void numbertowords(int num){
    string ones[]={"","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    string teens[]={"TENS","ELEVEN","TWELVE","THIRTEEN","FORTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};
    string tens[]={"","","TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTTY","NINETY"};
    if (num<10){
        cout<<ones[num];
    } else if(num<20){
        cout<<teens[num-10];
    } else{
        cout<<tens[num/10];
        if(num%10!=0){
            cout<<" "<<ones[num%10];
        }
    }
}
int main(){
    int num;
    cout<<"Enter Number(1-99):";
    cin>>num;
    if (num>=1 && num<=99){
   numbertowords(num);
    } else {
        cout<<"Invalid input.Please enetr a number between 1 and 99:";
    }
    return 0;
}