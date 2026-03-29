#include<iostream>
using namespace std;
int main(){
    int arr1[2];
    cout<<"Enter the number of elements for the first array(must be 2):2"<<endl;
    cout<<"Enter the 2 elements for the first array ;one per line:"<<endl;
    for(int i=0;i<2;i++){
        cin>>arr1[i];
    }
    int count;
    int arr2[100];
    cout<<"Enter the number of elements for the second array :";
    cin>>count;
    cout<<"Enter the "<<count<<" elements for the second array,onr per line:"<<endl;
    for(int i=0;i<count;i++){
        cin>>arr2[i];
    }
    int newarray[102];
    newarray[0]=arr1[0];
    for(int i=0;i<count;i++) {
    newarray[i+1]=arr2[i];
    }
    newarray[count+1]=arr1[1];

    cout<<" Resulting array: [";
    for(int i=0;i<count+2;i++){
        cout<<newarray[i];
        if(i<count+1)
        cout<<",";
    }
    cout<<"]"<<endl;
    return 0;
}
