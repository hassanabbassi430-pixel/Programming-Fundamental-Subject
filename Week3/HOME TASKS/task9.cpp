#include <iostream>
using namespace std;
int main(){
cout<<"Enter a 4-digit number:";
int number;
cin>>number;

int sum;
sum +=number % 10;
number /=10;
sum +=number % 10;
number /=10;
sum +=number % 10;
number /=10;
sum +=number;
cout<<"sum of the individual digits:"<<sum<<endl;
}