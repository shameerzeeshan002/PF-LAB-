#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of flights: ";
    cin>>n;
    int flightNumber[n];
    string destination[n];
    int seats[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter flight number for flight "<<i+1<<": ";
        cin>>flightNumber[i];

        cout<<"Enter destination for flight "<<flightNumber[i]<<": ";
        cin>>destination[i];

        cout<<"Enter seats available for flight "<<flightNumber[i]<<": ";
        cin>>seats[i];
    }
    cout<<"Flight Information:"<<endl;
    cout<<"----------------------"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<"Flight "<<flightNumber[i]<<" to "<<destination[i]<<" has "<<seats[i]<<" seats available"<<endl;
    }
    cout<<"Flights with less than 5 seats available:"<<endl;
    cout<<"-----------------------------------------"<<endl;
    bool found = false;

    for(int i = 0; i < n; i++){
        if(seats[i] < 5){
            cout<<"Flight "<<flightNumber[i]<<" to "<<destination[i]<<" has only "<<seats[i]<<" seats left!";
            found = true;
        }
    }
    if(!found){
        cout<<"No flights with less than 5 seats available."<<endl;
    }
}