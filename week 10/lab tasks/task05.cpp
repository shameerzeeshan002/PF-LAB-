#include<iostream>
#include<cmath>
using namespace std;

double D(double a, double b, double c){
    return b*b-4*a*c;
}
double zero(double a, double b, double c){
    return -b/(2*a);
}
double greater1(double a, double b, double c){
double disc = D(a,b,c);
    return (-b+sqrt(disc))/(2*a);
}
double greater2(double a, double b, double c){
double disc = D(a,b,c);
    return (-b-sqrt(disc))/(2*a);
}
double less1(double a, double b, double c){
    return (-b)/(2*a);
}
double less2(double a, double b, double c){
double disc = D(a,b,c);
    return sqrt(-disc)/(2*a);
}

main(){
    double a , b , c;
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;
    
    cout<<"Enter the value of c: ";
    cin>>c;

    double disc = D(a,b,c);

    if(disc==0){
        cout<<"Solution : x "<<zero(a,b,c);
    }
    else if(disc<0){
        cout<<"Complex Solution : x = "<<less1(a,b,c)<<" + "<<less2(a,b,c)<<" and x = "<<less1(a,b,c)<<" - "<<less2(a,b,c);
    }
    else if(disc>0){
        cout<<"Solutions : x = "<<greater1(a,b,c)<<" and "<<greater2(a,b,c);
    }
}