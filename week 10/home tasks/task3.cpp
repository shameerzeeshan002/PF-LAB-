#include<iostream>
using namespace std;

float taxCalculator(char type, float price){
    float tax = 0;
    if(type == 'M') tax = price * 6 / 100;
    else if(type == 'E') tax = price * 8 / 100;
    else if(type == 'S') tax = price * 10 / 100;
    else if(type == 'V') tax = price * 12 / 100;
    else if(type == 'T') tax = price * 15 / 100;
    return price + tax;
}

int main(){
    char code;
    float vehiclepri;
    cout << "Enter vehicle type code (M/E/S/V/T): ";
    cin >> code;
    cout << "Enter vehicle price: ";
    cin >> vehiclepri;

    float final = taxCalculator(code, vehiclepri);

    if(code == 'M')
        cout << "The final price of type Motorcycle after adding the tax is $" << final << endl;
    else if(code == 'E')
        cout << "The final price of type Electric after adding the tax is $" << final << endl;
    else if(code == 'S')
        cout << "The final price of type Sedan after adding the tax is $" << final << endl;
    else if(code == 'V')
        cout << "The final price of type Van after adding the tax is $" << final << endl;
    else if(code == 'T')
        cout << "The final price of type Truck after adding the tax is $" << final << endl;

    return 0;
}