#include<iostream>
using namespace std;
int main(){
    string word;
    char length=0;
    cout<<"Enter the word:";
    cin>>word;
    while(word[length]!='\0'){
        length++;
    }
    cout<<"original word is:"<<word<<endl;
    cout<<"reversed word is:";
    for(int i=length-1;i>=0;i--)
    { cout<<word[i];}
}