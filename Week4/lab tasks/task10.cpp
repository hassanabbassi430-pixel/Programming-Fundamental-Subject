#include <iostream>
using namespace std;
int main(){
    string my_password;
    my_password="spring2026";
    string user_password;
    cout<<"Enter the pssword:";
    cin>>user_password;
    if(user_password == my_password){
        cout<<"match";
    }
        else {
            cout<<"This is not the same password , try again";
        }
}