#include <iostream>
using namespace std;
int findLargest(int arr[], int size){
    int largest = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int findSmallest(int arr[], int size){
    int smallest = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int numbers[n];
    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    int largest = findLargest(numbers, n);
    int smallest = findSmallest(numbers, n);
    cout << "Largest number " << largest << endl;
    cout << "Smallest number " << smallest << endl;
}