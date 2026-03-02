#include <iostream>
using namespace std;
int main(){
cout<<"Enter the student's Name:" ;
string Name;
cin>>Name;

cout<<"Enter matriculation marks (out of 1100):";
float matricmarks;
cin>>matricmarks;

cout<<"Enter intermediate marks (out of 550):";
float intermarks;
cin>>intermarks;

cout<<"Enter ecat marks (out of 400):";
float ecatmarks;
cin>>ecatmarks;

cout<<"Aggregate score is :";
float Aggregate;
Aggregate= matricmarks/1100 *10 +intermarks/550 * 40 +ecatmarks/400 *50;
cout<<Aggregate<<"%";
}
