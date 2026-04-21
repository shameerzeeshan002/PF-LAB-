#include<iostream>
#include<cmath>
using namespace std;

double heightoftree(double distance, double angle){
    double angleinradian;
    angleinradian = angle*(3.14159265/180.0);
    return distance*tan(angleinradian);
}

main(){
    double distance;
    double angle;
    cout<<"Enter the distace from the base of te tree (in Feet) ";
    cin>>distance;

    cout<<"Enter the angle of elivation (in degree) ";
    cin>>angle;
    cout<<"The height of the tree is "<<heightoftree(distance,angle);
}
//convert in funtion