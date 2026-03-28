#include<iostream>
using namespace std;

bool canPay(int coins[], float due);

main(){
    int coins[4]; 
    float due;

    cout<<"Enter coins (quarters, dimes, nickels, pennies): "<<endl;
    for(int i=0; i<4; i++){
        cin>>coins[i];
    }

    cout<<"Enter total due: ";
    cin>>due;

    if(canPay(coins, due)){
        cout<<"true"<<endl;
    } else
    {
        cout<<"false"<<endl;
    }

}
bool canPay(int coins[], float due){
    float total = 0;

    total += coins[0] * 0.25;
    total += coins[1] * 0.10; 
    total += coins[2] * 0.05; 
    total += coins[3] * 0.01; 

    if(total >= due){
        return true;
    } else
    {
        return false;
    }
}