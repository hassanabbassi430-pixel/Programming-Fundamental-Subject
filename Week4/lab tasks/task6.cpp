#include <iostream>
using namespace std;
int main(){
    cout<<"Are your friends going?(press y for yes N for no):";
    char going;
    cin>>going;
    if (going =='y'){
        cout<<"you are going!";
    }
    if (going == 'N' ){
        cout<<"you are not going!";
    }
}