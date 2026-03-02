#include <iostream>
using namespace std;
int main(){
cout<<"Number of Minutes:" ;
int min;
cin>>min;

cout<<"Frames per second:" ;
int fps;
cin>>fps;

int total_frames;
total_frames=min*60*fps;
cout<<"Total Number of Frames:"<<total_frames;
}