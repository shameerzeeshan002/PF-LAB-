#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"How many Numbers you want to enter ";
    cin>>num;
int number[num];
    for(int i=0; i<num; i++){
        cout<<"Enter ";
        cin>>number[i];
        
    }
    cout<<"The 1st element of array is:" <<number[0]<<endl;
    cout<<"The last element of array is:" <<number[num-1]<<endl;

}
