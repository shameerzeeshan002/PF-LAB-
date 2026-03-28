#include<iostream>
using namespace std;
main(){
    char word[100];
    cout<<"Enter a word ";
    cin>>word;

    for(int idx=0; word[idx] != '\0'; idx++){

    }
    int length = 0;
    for(int idx=0; word[idx] != '\0'; idx++){
        length++;
    }
    cout<<"Reversed ";
    for(int idx = length-1; idx>=0; idx--){
        cout<<word[idx];
    }
}