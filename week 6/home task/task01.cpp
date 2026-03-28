#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter number of elements ";
    cin>>n;

    int number[n];
    int total;

    cout<<"Enter "<<n<<" numbers "<<endl;
        for(int i=0; i<n; i++){
            cin>>number[i];
            total += number[i];
        }
    cout<<"Sum of all elements = "<<total<<endl;

}