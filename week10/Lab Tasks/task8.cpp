#include<iostream>
#include<cmath>
using namespace std;
//function to calculate roots
void solveQuadritic(float a, float b,float c){
    float deter=b*b-4*a*c;
    cout<<"Determinant="<<deter<<endl;
    if(deter>0)
    {
        float root1=(-b+sqrt(deter)/2*a);
        float root2=(-b-(sqrt(deter))/2*a);
        cout<<"Two real and distinct roots:"<<root1<<" and "<<root2<<endl;
    }
    else if(deter==0){
        float root=-b/(2*a);
        cout<<"One Real root:"<<root<<endl;
    }
    else{
       float realpart=-b/(2*a);
       float imaginarypart=sqrt(-deter)/(2*a);
       cout<<"Complex roots:"<<realpart<<"+"<<imaginarypart<<"i and"<<realpart<<"-"<<imaginarypart<<"i"<<endl;
    }
}
int main(){
    float a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
    //function call
    solveQuadritic(a,b,c);
    return 0;
    
}