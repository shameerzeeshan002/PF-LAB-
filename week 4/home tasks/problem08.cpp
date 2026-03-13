#include<iostream>
using namespace std;
main(){
    int num,unit,ten;
    cout<<"Enter your number:";
    cin>>num;
    if(num==0){
        cout<<"zero";
    }
if(num==0){
        cout<<"zero";
    }
    if(num==10){
        cout<<"ten";
    }
    if(num==11){
        cout<<"eleven";
    }
    if(num==12){
        cout<<"twelve";
    }
    if(num==13){
        cout<<"thirteen";
    }
    if(num==14){
        cout<<"fourteen";
    }
    if(num==15){
        cout<<"fifteen";
    }
    if(num==16){
        cout<<"sixteen";
    }
    if(num==17){
        cout<<"seventeen";
    }
    if(num==18){
        cout<<"eighteen";
    }
    if(num==19){
        cout<<"ninteen";
    }
if(num > 19){
    unit = num%10;
    ten = num/10;
}
if(ten == 2){
    cout<<"twenty";
}
if(ten == 3){
    cout<<"thirty";
}
if(ten == 4){
    cout<<"fourty";
}
if(ten == 5){
    cout<<"fifty";
}
if(ten == 6){
    cout<<"sixty";
}
if(ten == 7){
    cout<<"seventy";
}
if(ten == 8){
    cout<<"eighty";
}
if(ten == 9){
    cout<<"ninety";
}

if(num < 10){
    unit = num%10;
}
if(unit==1){
    cout<<"one";
}
if(unit==2){
    cout<<"two";
}
if(unit==3){
    cout<<"three";
}
if(unit==4){
    cout<<"four";
}
if(unit==5){
    cout<<"five";
}
if(unit==6){
    cout<<"six";
}
if(unit==7){
    cout<<"seven";
}
if(unit==8){
    cout<<"eight";
}
if(unit==9){
    cout<<"nine";
}
if(num == 100){
    cout<<"hundred";
}
















}