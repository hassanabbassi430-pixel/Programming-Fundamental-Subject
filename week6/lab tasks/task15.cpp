#include <iostream>
using namespace std;
int main() {
    int change[4];
    cout << "Enter quarters: ";
    cin >> change[0];
    cout << "Enter dimes: ";
    cin >> change[1];
    cout << "Enter nickels: ";
    cin >> change[2];
    cout << "Enter pennies: ";
    cin >> change[3];
    cout<<endl;
    float total=change[0]*0.25+change[1]*0.10+change[2]*0.05+change[3]*0.01;
    float totalamount=0;
    cout<<"Enter the total amount due: $";
    cin>>totalamount;
    if(totalamount<=total){
        cout<<"can you pay the amount? :YES";
    }
    else{
        cout<<"can you pay the amount? : NO";
    }
    }

