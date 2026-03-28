#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter number of resistors ";
    cin>>n;

    float resistance[n];
    float total;

    cout<<"Enter resistance values "<<endl;
        for(int i=0; i<n; i++){
            cin>>resistance[i];
            total += resistance[i];
        }
    cout<<"Total Resistance = "<<total<<" ohm"<<endl;

}