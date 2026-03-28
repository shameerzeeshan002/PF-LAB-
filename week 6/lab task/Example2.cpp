#include <iostream>
using namespace std;
int main(){
    string correctUsername = "admin";
    int correctPassword = 1234;
    string enteredUsernames[3];
    int inputPassword;
    bool login = false;
    string studentNames[3];
    int studentAges[3];
    string courses[3];
    int studentCount = 0;
    int courseCount = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Attempt " << i + 1 << " - Enter Username: ";
        cin >> enteredUsernames[i];
        
        cout << "Enter Password: ";
        cin >> inputPassword;
        if (enteredUsernames[i] == correctUsername && inputPassword == correctPassword) {
            login = true;
            cout << "Login Successful!" << endl;
            break; 
        } else{
            cout << "Invalid Credentials!" << endl;
        }
    }
    if (login) {
        int choice;
        while (true){ 
            cout<< "--- Main Menu ---"<<endl;
            cout<< "1. Add Student"<<endl;
            cout<< "2. View Student"<<endl;
            cout<< "3. Add Course"<<endl;
            cout<< "4. View Course"<<endl;
            cout<< "5. Exit"<<endl;
            cout<< "Select option: ";
            cin>> choice;

            if (choice == 1){
                if (studentCount < 3) {
                    cout << "Enter Student Name: ";
                    cin >> studentNames[studentCount];
                    cout << "Enter Student Age: ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                } else
                {
                    cout << "Array Full!" << endl;
                }
            }
            else if (choice == 2){
                for (int j = 0; j < studentCount; j++) {
                    cout << "Name: " << studentNames[j] << ", Age: " << studentAges[j] << endl;
                }
            }
            else if (choice == 3){
                if (courseCount < 3) {
                    cout<<"Enter Course Name: ";
                    cin>>courses[courseCount];
                    courseCount++;
                }
            }
            else if (choice == 4)
            {
                for (int k = 0; k < courseCount; k++){
                    cout<<"Course: "<< courses[k]<<endl;
                }
            }
            else if (choice == 5)
            {
                break;
            }
        }
    } else
    {
        cout << "Access Denied. Too many attempts." << endl;
    }
}