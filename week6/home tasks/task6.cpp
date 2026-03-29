#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of students: ";
    cin>>num;
    string name[num];
    cout<<"Enter the Name of "<<num<<" students one by one: "<<endl;
    for(int i=0;i<num;i++){
        cin>>name[i];
    }
    for(int i = 0; i < num - 1; i++) {
        for(int j = 0; j < num - i - 1; j++) {
            
            if(name[j] > name[j+1]) {
                string temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }

    cout << "\nStudents in alphabetical order:" << endl;
    for(int i = 0; i < num; i++) {
        cout << name[i] << endl;
    }
}