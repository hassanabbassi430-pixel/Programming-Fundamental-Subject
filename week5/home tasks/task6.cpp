#include<iostream>
using namespace std;
int main(){
    int conclusion;
    int number=0;
    cout<<"Enter number for table: ";
    cin>>number;
    
    for(int i=1;i<=10;i++){
        conclusion=number*i;
        cout<<number<<" x "<< i <<" = "<<conclusion<<endl;

    }

}