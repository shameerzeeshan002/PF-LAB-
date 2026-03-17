#include<iostream>
using namespace std;
main(){
int choice;
int deposit;
int withdraw;
int current_balance = 1000;
   int correctpin = 1234;
   int currentpin;
   for(int i=1; i<=3; i++){
   cout<<"Enter PIN "<<endl;
   cin>>currentpin;
   if(currentpin==correctpin){
    break;
   }
 }
if(correctpin==currentpin){
    cout<<"Login Successfully"<<endl;
cout<<"1    Check Balance"<<endl;
cout<<"2    Deposit Money"<<endl;
cout<<"3    Withdraw Money"<<endl;
cout<<"4    Exit"<<endl;
cout<<"Select an Option "<<endl;
cin>>choice;
}
if(choice == 1){
    cout<<"Your Current Balance is "<<current_balance<<endl;
}
else if(choice == 2){
cout<<"Enter Money You Want To Deposit: ";
cin>>deposit;
int money_after_deposit = current_balance + deposit;
cout<<"Money Deposited Successfully "<<deposit;
}
else if(choice == 3){
    if(withdraw <= current_balance){
        cout<<"Enter Money You Want To Withdraw ";
        cin>>withdraw;
        if(withdraw > current_balance){
            cout<<"Insufficent Balance ";
         }
         if(withdraw <= current_balance){
            cout<<"Please Collect Your Cash";
            int money_after_withdraw = current_balance - withdraw;
         }
        }
         
    }
else if(choice == 4){
    cout<<"Thank You for using ATM";
}
else{
    cout<<"Card Blocked";
}

}