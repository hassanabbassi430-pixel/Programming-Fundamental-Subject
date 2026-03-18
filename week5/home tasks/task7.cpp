#include <iostream>
using namespace std;
main()
{
    int num1 = 0, num2 = 1, next;
    int n;
    cout << "Enter the length of the fibonacci series: ";
    cin >> n;
    if(n==1){
        cout<<"0"; 
    
    }
    else{
        cout << num1 << ", ";
        cout << num2;
    
    for(int x = 1; x < n - 1; x = x + 1)
    {
        next = num1 + num2;
        cout << ", " << next;
        num1 = num2;
        num2 = next;
    }
}
}