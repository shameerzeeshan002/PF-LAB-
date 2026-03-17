#include<iostream>
using namespace std;
main(){
    int age,machineprice,toyprice;
    cout<<"Enter Lilly's Age ";
    cin>>age;

    cout<<"Enter the price of washing machine ";
    cin>>machineprice;

    cout<<"Enter the unit price of each toy ";
    cin>>toyprice;

    int money = 0, toys = 0, evenmoney = 0;
    for(int i =1; i<=age; i++){
        if(i%2 == 0){
            money = money + evenmoney - 1;
            evenmoney = evenmoney+10;
        }
        else{
            toys++;
        }
    }

    money = money + (toys*toyprice);
    if(money >= machineprice){
        cout<<"Yes!"<<endl;
        cout<<money - machineprice;
    }
else {
        cout<<"No!"<<endl;
        cout<< machineprice-money;
    }
}