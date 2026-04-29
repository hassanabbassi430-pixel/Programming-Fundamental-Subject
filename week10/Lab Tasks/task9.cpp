#include <iostream>
using namespace std;
//protptype
int multiply(int num);
int main(){
    int num,result;
    cout<<"Enter the Number that you want to mulitply with 5:";
    cin>>num;
    //function cell
    result=multiply(num);
    cout<<"Result:"<<result;
    return 0;

}
    int multiply(int num){
    int result;
    result=num*5;
    return result;
}