#include<iostream>
using namespace std;
main(){

int sq;
cout<<"Number of square meters you can paint:";
cin>>sq;

int width;
cout<<"Width of single wall in metres:";
cin>>width;

int height;
cout<<"Height of singe wall in metres:";
cin>>height;

int area;
area = width*height;

int walls;
walls = sq/area;

cout<<"Number of walls you can paint:"<<walls;





}