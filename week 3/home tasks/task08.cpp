#include<iostream>
using namespace std;
main(){

float vegprice;
cout<<"Enter the vegetable price per kilogram:";
cin>>vegprice;

float fruitprice;
cout<<"Enter the fruit price per kilogram:";
cin>>fruitprice;

int vegkg;
cout<<"Enter the total kilograms of vegetables:";
cin>>vegkg;

int fruitkg;
cout<<"Enter the total kilograms of fruits:";
cin>>fruitkg;

float total;
total = (vegprice*vegkg)+(fruitprice*fruitkg);


float totalearning;
totalearning = (total/1.94);

cout<<"Total Earning in Rupees (Rps):"<<totalearning;



















}