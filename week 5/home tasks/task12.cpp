#include<iostream>
using namespace std;
main(){
    string book;
    cout<<"=== Library System ==="<<endl;
    cout<<"1. Add Book"<<endl;
    cout<<"2. View Book"<<endl;
    cout<<"3. Borrow Book"<<endl;
    cout<<"4. Issue Book"<<endl;
    cout<<"5. Exit"<<endl;
    int choice;
cout<<"Enter your Choice (1-5) ";
cin>>choice;
if(choice == 1){
    cout<<"Enter a Book Name "<<endl;
    cin>>book;
    cout<<"You Added "<<book<<endl;
}
else if(choice == 2){
    cout<<"Enter a Book Name "<<endl;
    cin>>book;
    cout<<"You Viewed "<<book<<endl;

}
else if(choice == 3){

    cout<<"Enter a Book Name "<<endl;
    cin>>book;
    cout<<"You Borrowd"<<book<<endl;
}
else if(choice == 4){
    cout<<"Enter a Book Name "<<endl;
    cin>>book;
    cout<<"Book Issued"<<book<<endl;
}
else{
    cout<<"Exiting Library";
}
}