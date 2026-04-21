#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience);

int main() {
    float base;
    int score, experience;

    cout << "Enter base salary: ";
    cin >> base;

    cout << "Enter score: ";
    cin >> score;

    cout << "Enter experience: ";
    cin >> experience;

    cout << "Final Salary: " << calculateSalary(base, score, experience) << endl;

    return 0;
}

float calculateSalary(float base, int score, int experience) {
    float bonus = 0;

    if (score >= 90) bonus += 0.20;
    else if (score >= 75) bonus += 0.10;
    else bonus += 0.05;

    if (experience >= 5) bonus += 0.05;

    return base + (base * bonus);
}