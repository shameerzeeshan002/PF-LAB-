#include<iostream>
using namespace std;
main(){
    double money;
    cout<<"Enter Enherited Money ";
    cin>>money;
    int year;
    cout<<"Enter Year ";
    cin>>year;

    int age = 18;
    double totalspent = 0;
for(int y = 1800; y <= year; y++){
    if(y%2 ==0 ){
        totalspent += 12000;
    }
    else{
        totalspent += 12000+(50*age);
    }
    age++;
}
if(money >= totalspent){
    cout<<"Yes! He will live a carefree Life and will have ";
    cout<< money - totalspent<<" dollars left";
}
else{
    cout<<"He will need ";
    cout<<totalspent-money <<" dollars to survive";
}

}