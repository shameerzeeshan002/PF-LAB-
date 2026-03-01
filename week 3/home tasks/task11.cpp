#include<iostream>
using namespace std;
main(){
int age;
cout<<"Enter the person's age:";
cin>>age;

int moves;
cout<<"Enter the number of times they've moved:";
cin>>moves;

int average;
average = age/(moves+1);

cout<<"Average number of years lived in the same house:"<<average;

}
