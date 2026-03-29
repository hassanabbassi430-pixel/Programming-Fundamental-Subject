#include<iostream>
using namespace std;
int main(){
    int asciiCode;
    string word;
    cout<<"Enter the word:";
    cin>>word;
    cout<<"original word is:"<<word<<endl;
    cout<<"shifted word is:";
    for(int i=0;i<word[i]!='\0';i++){
    if(isalpha(word[i])){
        if(word[i]=='z'){
            word[i]=='a';
        } else if(word[i]=='Z'){
            word[i]=='A';
        } else {
            word[i]=word[i]+1;
        }
    }
    cout<<word[i];
    }
}