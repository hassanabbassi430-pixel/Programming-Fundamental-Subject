#include <iostream>
using namespace std;
int main(){
    int n1=0,n2=1,next;
    int n;
    cin>>n;
    cout<<"how many numbers of Fibonacci Series you want to ptrint:"<<n<<endl;
    cout<<n1<<";"<<n2<<";";
    for( int i=2 ; i < n ; i=i+1){
    next=n1+n2;
    cout<<next;
    n1=n2;
    n2=next;
    }

}
