#include<iostream>
using namespace std;
main(){
    float n, number;
    float p1=0,p2=0,p3=0,p4=0,p5=0;
cout<<"Enter Numbers Count ";
cin>>n;

for(int i=1; i<=n; i++){
    cout<<"Enter Your Number ";
    cin>>number;
    if(number < 200){
        p1 = p1+1;
    }
    else if(number >= 200 && number <= 399){
        p2 = p2+1;
    }
    else if(number >= 400 && number <= 599){
        p3 = p3+1;
    }
    else if(number >= 600 && number <= 799){
        p4 = p4+1;
    }
else{
    p5 + p5+1;
}
}
cout<<(p1*100)/n<<"%"<<endl;
cout<<(p2*100)/n<<"%"<<endl;
cout<<(p3*100)/n<<"%"<<endl;
cout<<(p4*100)/n<<"%"<<endl;
cout<<(p5*100)/n<<"%"<<endl;   
}