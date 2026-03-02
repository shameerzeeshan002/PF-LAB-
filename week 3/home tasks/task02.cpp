#include<iostream>
using namespace std;
main(){

int minutes;
cout<<"Number of Minutes:";
cin>>minutes;

int frames;
cout<<"Frames per second:";
cin>>frames;

int totalframes;
totalframes = minutes*60*frames;

cout<<" Total Number of Frames:" <<totalframes ;
}