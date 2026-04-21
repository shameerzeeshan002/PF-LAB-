#include<iostream>
using namespace std;

int val1 = 10;
int val2 = 20;
int sum(){
    val1 = 40;
    return val1+val2;
}
main(){
    int x = val1;
    val1 = 100;
    x = 20;
    val2 = sum();
    cout<<val1<<" "<<val2;
}