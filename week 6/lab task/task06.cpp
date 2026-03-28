#include<iostream>
using namespace std;
int findlargestnumber(int arr[],int size);
main(){
int n;
cout<<"Enter number of elements ";
cin>>n;

int arr[n];
cout<<"Enter "<<n<<" numbers one per line "<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int largest = findlargestnumber(arr,n);
cout<<"Largest Number is "<<largest<<endl;
}

    int findlargestnumber(int arr[],int size){
        int max = arr[0];
        for(int i=1; i<size; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }