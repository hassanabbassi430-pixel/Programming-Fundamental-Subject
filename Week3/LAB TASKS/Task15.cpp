#include <iostream>
using namespace std;
int main(){
cout<<"Enter minutes:" ;
int min;
cin>>min;
cout <<"Enter fps:" ;
int fps;
cin>>fps;
int total_frames;
total_frames=min*60*fps;
cout<<"total frames="<<total_frames;
}