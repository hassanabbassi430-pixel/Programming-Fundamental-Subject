#include<iostream>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter the string:";
    getline(cin,sentence);
    char vowels[5]={'a','e','i','o','u'};
    cout<<"String with vowels removed:";
    for(int i=0;sentence[i]!='\0';i++){
        char c=sentence[i];
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U'){
          cout<<c ; 
        }
    }
    }