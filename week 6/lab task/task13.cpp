#include <iostream>
using namespace std;
main(){
    int n;
    cout << "Enter number of chords: ";
    cin >> n;

    string chords[100]; 

    cout << "Enter the number of chords:";
    for (int i = 0; i < n; i++){
        cin >> chords[i]; 
    }
    for (int i = 0; i < n; i++){
        int len = 0;
        while (chords[i][len] != '\0'){
            len++;
        }

        if (chords[i][len - 1] != '7'){
            chords[i] = chords[i] + '7';
        }
    }
    cout << "Jazzified chords:\n";
    for (int i = 0; i < n; i++) {
        cout << chords[i] << " ";
    }
    cout << endl;
}