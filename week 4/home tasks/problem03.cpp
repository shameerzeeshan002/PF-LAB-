#include<iostream>
using namespace std;
main(){
    int temperature1;
    cout<<"Enter Temperateure of City 1:";
    cin>>temperature1;

    int temperature2;
    cout<<"Enter Temperature of City 2:";
    cin>>temperature2;

    int difference;
    difference = temperature1 - temperature2;
    if( difference > 10){
        cout<<"Difference is too Big:"<<endl;
        cout<<"Program Ends";
    }
else{
    cout<<"Program Ends";
}

}