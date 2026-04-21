#include<iostream>
using namespace std;
    string timetravel(int h, int m){
        m = m+15;
        if(m>=60){
            m = m-60;
            h = h+1;
        }
        if(h>23){
            h = 0;
        }
        return to_string(h) + ":" + to_string(m);
    
    }
main(){
int h,m;
cout<<"Enter hour ";
cin>>h;

cout<<"Enter minutes ";
cin>>m;

cout<<timetravel(h,m);

}