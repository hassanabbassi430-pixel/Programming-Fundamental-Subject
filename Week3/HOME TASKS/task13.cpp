#include <iostream>
using namespace std;
int main(){
int number, sum=0;
cout<<"Enter 5 integers:"<<endl;
for(int i=0; i<5; i++) {
cin>>number;
sum +=number;
}
cout<<"sum = "<<sum <<endl;
}