#include<iostream>
using namespace std;
main(){
    string word;
    char letter;
    cout<<"Enter a word: ";
    cin>>word;

    cout<<"Enter a character you want to find: ";
    cin>>letter;
    bool isfound = false;
    for(int idx = 0; word[idx]!='\0'; idx = idx+1){
        if(word[idx]==letter){
            isfound = true;
            break;
        }
    }
    if(isfound){
        cout<<letter<<" is found in "<<word;
    }
    else{
        cout<<letter<<" is not found in "<<word;
    }
}

    