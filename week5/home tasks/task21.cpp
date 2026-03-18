#include<iostream>
using namespace std;
int main(){
    
    for(int x=1;x<=5;x++){
        int number=5;
    
            for(int y=1;y<=x;y++){
                    cout<<number<< " ";
                    number--;
            }
        cout<<endl;
    }
}