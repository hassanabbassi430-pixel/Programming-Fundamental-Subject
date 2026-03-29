#include<iostream>
using namespace std;
int main(){
    char letters;
    string word;
    cout<<"Enter the word:";
    cin>>word;
     for(int i=0; i<word[i]!='\0';i=i+1){
        cout<<"The character "<<word[i]<<" is at "<<i<<" position"<<endl;
     }
}