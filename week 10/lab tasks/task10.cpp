#include <iostream>
using namespace std;

string numberToText(int n) {
    if (n == 1) return "One";
    else if (n == 2) return "Two";
    else if (n == 3) return "Three";
    else if (n == 4) return "Four";
    else if (n == 5) return "Five";
    else if (n == 6) return "Six";
    else if (n == 7) return "Seven";
    else if (n == 8) return "Eight";
    else if (n == 9) return "Nine";
    else if (n == 10) return "Ten";
    else if (n == 11) return "Eleven";
    else if (n == 12) return "Twelve";
    else if (n == 13) return "Thirteen";
    else if (n == 14) return "Fourteen";
    else if (n == 15) return "Fifteen";
    else if (n == 16) return "Sixteen";
    else if (n == 17) return "Seventeen";
    else if (n == 18) return "Eighteen";
    else if (n == 19) return "Nineteen";

    else if (n >= 20 && n < 30) {
        if (n == 20) return "Twenty";
        else return "Twenty " + numberToText(n % 10);
    }
    else if (n >= 30 && n < 40) {
        if (n == 30) return "Thirty";
        else return "Thirty " + numberToText(n % 10);
    }
    else if (n >= 40 && n < 50) {
        if (n == 40) return "Forty";
        else return "Forty " + numberToText(n % 10);
    }
    else if (n >= 50 && n < 60) {
        if (n == 50) return "Fifty";
        else return "Fifty " + numberToText(n % 10);
    }
    else if (n >= 60 && n < 70) {
        if (n == 60) return "Sixty";
        else return "Sixty " + numberToText(n % 10);
    }
    else if (n >= 70 && n < 80) {
        if (n == 70) return "Seventy";
        else return "Seventy " + numberToText(n % 10);
    }
    else if (n >= 80 && n < 90) {
        if (n == 80) return "Eighty";
        else return "Eighty " + numberToText(n % 10);
    }
    else if (n >= 90 && n < 100) {
        if (n == 90) return "Ninety";
        else return "Ninety " + numberToText(n % 10);
    }

    return "Invalid";
}

int main() {
    int num;

    cin >> num;

    cout << numberToText(num);

    return 0;
}