#include<iostream>
using namespace std;
main(){
    int choice, num1, num2;
    cout<<"=== Simple Calculator ==="<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Clear Screen"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter Your Choice "<<endl;
    cin>>choice;

    if(choice >= 1 && choice <= 4){
    cout<<"Enter First Number "<<endl;
    cin>>num1;
    cout<<"Enter Second Number "<<endl;
    cin>>num2;
    }

if(choice == 1){
int addition = num1 + num2;
cout<<"Results "<<addition;
}
else if(choice == 2){
    int subtraction = num1-num2;
    cout<<"Results "<<subtraction;
}
else if(choice == 3){
    int multiplication = num1*num2;
    cout<<"Results "<<multiplication;
}
else if(choice == 4){
    int divide = num1/num2;
    cout<<"Resultsn "<<divide;
}
else if(choice == 5){
cout<<"Screen Cleared"<<endl;
}
else{
    cout<<"Exiting the Calculator GoodBye!";
}
}