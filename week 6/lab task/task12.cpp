#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0)
        {
            if (arr[i] % 2 != 0){
                return false;
            }
        }
        else{
            if(arr[i] % 2 == 0){
                return false;
            }
        }
    }
    return true;
}

main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSpecialArray(arr, n)) {
        cout << "The array is special." << endl;
    } 
    else{
        cout << "The array is NOT special." << endl;
    }
}