#include <iostream>
using namespace std;
main(){
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;

    string customers[100];
    cout<<"Enter the names of "<<n<<" customers: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>customers[i];
    }
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(customers[i][0] == letter){
            count++;
        }
    }
    cout<<"Number of names starting with "<<letter<<" "<<count<<endl;
}