#include<iostream>
using namespace std;
main()
{
string name;
cout<<"Enter your name";
cin>>name;

int matric;
cout<<"Enter your matric marks (out of 1100)";
cin>>matric;

int intermediate;
cout<<"Enter your intermediate marks:";
cin>>intermediate;

int ecat;
cout<<" Enter your ecat marks ( out of 400 ):";
cin>>ecat;

float matricperc;
matricperc = (matricperc/1100.0)*100;

float interperc;
interperc = (interperc/550.0)*100;

float ecatperc;
ecatperc = (ecat/400.0)*100;

float matricweight;
matricweight = (matricperc*0.10);

float interweight;
interweight = (interperc*0.40);

float ecatweight;
ecatweight = (ecatperc*0.50);

float aggregate;
aggregate = matricweight+interweight+ecatweight;

cout<<"Aggregate score for "<<name<<" is" <<aggregate<<"%";
















}


