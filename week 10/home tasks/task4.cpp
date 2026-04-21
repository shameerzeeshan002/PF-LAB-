#include <iostream>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers);

int main() {
    int needed, days, workers;

    cout << "Enter needed hours: ";
    cin >> needed;

    cout << "Enter days: ";
    cin >> days;

    cout << "Enter workers: ";
    cin >> workers;

    cout << projectTimeCalculation(needed, days, workers) << endl;

    return 0;
}
string projectTimeCalculation(int neededHours, int days, int workers) {
    double workingDays = days * 0.9; // 10% training days removed
    double totalHours = workingDays * (8 + 2) * workers;

    double diff = totalHours - neededHours;

    if (totalHours >= neededHours) {
        return "Yes!" + to_string((int)diff) + " hours left.";
    } else {
        return "Not enough time!" + to_string((int)(-diff)) + " hours needed.";
    }
}