#include<iostream>
using namespace std;
//prototype
void alphabet(char character);
int main(){
    char character;
    cout<<"Enter a character(A/a):";
    cin>>character;
    alphabet(character);
    return 0;
}
void alphabet(char character){
if(character=='A'){
     cout<<"your entered character is A";
}
     else if(character=='a'){
        cout<<"your entered character is a";
    }
    else{
        cout<<"you enterd character other than A and a";
    }
}
