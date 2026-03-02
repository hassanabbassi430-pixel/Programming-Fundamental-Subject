#include <iostream>
using namespace std;
int main(){
int number[15];
int sum_first5 =0, product_next5 =1 , subtract_last5 =0;
for(int i = 0; i <15; i++) {
cout<<"Enter number "<< (i +1)<< ":" ;
cin>>number[i];
}
for (int i=0; i<5; i++) {
sum_first5 += number[i];
}
for(int i =5; i <10; i++){
product_next5 *=number[i];
}
subtract_last5 =number[10];
for (int i=11; i <15; i++) {
subtract_last5 -=number[i];
}
int final_result=(sum_first5 + product_next5)-subtract_last5;
cout<<"The final result is :"<<final_result<<endl;
}
 