#include <iostream>
#include <string>
using namespace std;
string checkAlphabetCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return "You have entered Capital " + string(1, ch);
    } else if (ch >= 'a' && ch <= 'z') {
        return "You have entered small " + string(1, ch);
    } else {
        return "Invalid input! Please enter an alphabet only.";
    }
}

int main() {
    char ch;
    cout << "Enter a character (A/a): ";
    cin >> ch;

    string result = checkAlphabetCase(ch);
    cout << result << endl;

    return 0;
}