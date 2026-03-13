#include<iostream>
using namespace std;
main(){
int holidays;
int working;
int playtime;

cout<<"Enter thye number of holidays:";
cin>>holidays;

working = 365-holidays;
playtime = (working*63)+(holidays*127);

int norm = 30000;
if(playtime<norm){
    cout<<"Tom sleeps well"<<endl;
    int diff,hour,min;
    diff = norm-playtime;
    hour = diff/60;
    min = diff%60;
    cout<<hour<<"hours and "<<min<<"minutes to play";

}
else{
cout<<"Tom will run away"<<endl;
int diff,hour,min;
diff = playtime -norm;
hour = diff/60;
min = diff%60;
cout<<hour<<"hours and "<<min<<"minutes to play";




}
    
}