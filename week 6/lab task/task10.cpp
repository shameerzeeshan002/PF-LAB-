#include<iostream>
using namespace std;
main(){
    string arr[10];
    int n=1;

    for(int i=0; i<n; i++){
        getline(cin,arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<"something "<<arr[i];
    }
}