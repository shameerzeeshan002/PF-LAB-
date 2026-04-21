#include<iostream>
using namespace std;
double CalcPoolState(int v, int p1, int p2, float h){
    return (p1+p2)*h;
}
main(){
    int v,p1,p2;
    float h;
    double totalwaterfilled;
    cout<<"Enter volume of pool in liters ";
    cin>>v;

    cout<<"Enter flow rate of first pipe per hour ";
    cin>>p1;

    
    cout<<"Enter flow rate of second pipe per hour ";
    cin>>p2;

    cout<<"Enter hour that the worker is absent ";
    cin>>h;
    totalwaterfilled = CalcPoolState(v,p1,p2,h);
    if(totalwaterfilled <= v){
        // pool fill percentage 
    int poolperc = (totalwaterfilled/v)*100;
    cout<<"The pool is "<<poolperc<<"% full. ";

       // pipe contributions
    int pipe1perc = (p1*h/totalwaterfilled)*100;
    cout<<"Pipe 1 : "<<pipe1perc<<"%. ";
    int pipe2perc = (p2*h/totalwaterfilled)*100;   
    cout<<"pipe 2 : "<<pipe2perc<<"%. ";
    }else if(totalwaterfilled > v){
         double overflow = totalwaterfilled - v;
         cout<<"For "<<h<<" hours the pool overflows with "<<overflow<<" liters";
        }
     
}   
