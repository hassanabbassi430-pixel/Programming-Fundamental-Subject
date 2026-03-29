#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter the number of resistors in series circuit:";
    cin>>count;
    float values[count];
    cout<<"Enter the resistance values (in ohms) of the "<<count<<" resistors,one per line:"<<endl;
    for(int i=0;i<count;i++){
        cin>>values[i];
    }
   int sum=0;
   cout<<"The total resistance of the series circuit is:";
   for(int i=0;i<count;i++){
    sum=sum+values[i];
   }
   cout<<sum<<" ohms";
   return 0;
}