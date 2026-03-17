#include<iostream>
using namespace std;
main(){
    string studentname = "";
    int studentage = 0;
    string coursename = "";
    string username;
    string password;
    int choice;

    for(int i=1; i<=3; i++){
        cout<<"Enter username ";
        cin>>username;

        cout<<"Enter password ";
        cin>>password;

        if(username == "admin" && password == "1234"){
        cout<<"Login successful"<<endl;
        break;
    }

else
{
    cout<<"Wrong Login"<<endl;
}
}int i;
if(i==3 && !(username=="admin" && password == "1234")){
    cout<<"Too many attempts. Proram Ends."<<endl;
}
while ( choice !=4)
{
}
{

    cout<<endl<<"---- University Management System ----"<<endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. View Student"<<endl;
    cout<<"3. Add Course"<<endl;
    cout<<"4. Exit"<<endl;
int choice;
    cout<<"Enter Choice: -";
    cin>>choice;
if(choice ==1){
    cout<<"Enter Student Name";
    cin>>studentname;

    cout<<"Enter Student Age: ";
    cin>>studentage;

    cout<<"Student Added Successfully"<<endl;

}
else if(choice == 2){
if(studentname != "")
cout<<"Student Name "<< studentname <<endl;
cout<<"Student Age "<<studentage<<endl;

}
else if(choice ==3){
    cout<<"Course Name ";
    cin>>coursename;

    cout<<"Course Added "<<coursename<<endl;
}
else if(choice==4){
    cout<<"Program Exit"<<endl;

}
else {
    cout<<"Invalid Choice"<<endl;
}
}
}