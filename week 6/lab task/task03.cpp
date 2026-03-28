#include<iostream>
using namespace std;
main(){
    char word[100];
    cout<<"Enter a String ";
    cin>>word;
    for(int idx=0; word[idx]!='\0'; idx++){
        if (word[idx]=='z'){
            word[idx] = 'a';
        }
        else{
            word[idx] = word[idx]+1;
        }
    }
    cout<<"Shifted String "<<word;
}