#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the first Word:";
    string word1;
    cin>>word1;
    cout<<"Enter the second Word:";
    string word2;
    cin>>word2;
    if(word1 == word2){
        cout<<"These words are same";
    }
    else {
        cout<<"These words  are different";
    }

}