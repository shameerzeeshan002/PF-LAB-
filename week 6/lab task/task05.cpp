#include<iostream>
using namespace std;
bool isalreadyentered(int arr[], int size, int number){
    for(int i=0; i<size; i++){
        if(arr[i]==number){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter number of elements ";
    cin>>n;

    int arr[n];
    int i=0;
    while(i<n){
        int num;
        cout<<"Enter number ";
        cin>>num;

        if(isalreadyentered(arr,i,num)){
            cout<<"Already entered"<<endl;
        }
        else{
            arr[i]=num;
            i++;
        }
    }
    cout<<"Final Array ";
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}
