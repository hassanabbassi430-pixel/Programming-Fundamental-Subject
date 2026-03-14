#include<iostream>
using namespace std;
int main(){
cout<<"Enter any character in lower case:";
char character;
cin>>character;
if (character=='a'|| character=='e' ||character=='i' ||character=='o' ||character=='u')
 {
    cout<<"it is vowel";
} else if(character>='a' &&  character<='z'){
    cout<<"it is consonant";
  }else if(character>='0' && character<='9'){
        cout<<"it is number";
    }
}