#include<iostream>
#include<conio.h>
using namespace std;
main(){
    int TOTAL_PLAYERS = 1000;  //total size
    int index = 1000;

    //data structures
string nameArray[TOTAL_PLAYERS] = {"Virat Kohli","Saeed Anwar","Wasim Akram","Imran Khan","Ricky Ponting"};
int MatchesArray[TOTAL_PLAYERS] = {556, 302, 460, 263, 560};
float RunsArray[TOTAL_PLAYERS] = {27000, 11500, 6600, 7500, 27400};
float AverageArray[TOTAL_PLAYERS] = {53 , 900 , 920 , 950 , 940};
float CenturiesArray[TOTAL_PLAYERS] = {85, 20, 3, 6, 71};
float WicketsArray[TOTAL_PLAYERS] = {5, 0, 916, 544, 8};
float EconomyArray[TOTAL_PLAYERS] = {6.2, 0, 3.9, 2.8, 4.9};
   
    

   while(true){
     //main header of CricStat
    system("cls");
    cout<<"----------------------------------------------"<<endl;
    cout<<"-----------------CrickStat--------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;

    //user menu
    cout<<"-----------------USER MENU--------------------"<<endl;
    cout<<"1. Admin "<<endl;
    cout<<"2. Analyst "<<endl;
    cout<<"3. To Exit "<<endl;
    cout<<"Choose Option ";
    int userOption;
    cin>>userOption;

    cout<<"You Choose "<<userOption<<endl;
    if(userOption == 1){
        // write here the admin code
        int countattempt = 0;
        for( int i=0; i<3; i++){
            system("cls");
        cout<<"Welcome to Admin Menu "<<endl;
        cout<<"Enter player Name ";
        string player;
        cin.ignore();
        getline(cin,player)
        cin>>player;
        cout<<"Enter Password ";
        string password;
        cin>>password;
        if( username == "admin" && password == "1234"){
            cout<<"Login Successfully : Login attempt "<<i+1<<endl;
           while(true){
            system("cls");
            cout<<"1 Show all students "<<endl;
            cout<<"2 Search student"<<endl;
            cout<<"3 Update student record"<<endl;
            cout<<"4 Generate merit list "<<endl;
            cout<<"5 Delete"<<endl;
            cout<<"6 Logout"<<endl;
            cout<<"Choose Option ";
            int adminoption;
            cin>>adminoption;
            if(adminoption == 1){
              cout<<"Name\tAge\tMatric\tFSc\tECAT\tPref1\tPref2\tPref3\t"<<endl;
              for(int i=0; i<index; i++){
                if(nameArray[i] != ""){
                    cout<<nameArray[i]<<"\t"<<ageArray[i]<<"\t"<<matricArray[i]<<"\t"<<interArray[i]<<"\t"<<ecatArray[i]<<"\t"<<pref1Array[i]<<"\t"<<pref2Array[i]<<"\t"<<pref3Array[i]<<endl;
              }
            }
            }
            else if(adminoption == 2){
               //find student by name
               cout<<"Enter the name you want to search ";
               string name;
               cin>>name;
               bool found = false;
               int foundindex = -1;
               for( int i = 0; i<index; i++){
                if( nameArray[i] == name ){
                    foundindex = i;
                
                found = true;
                }
               }
               if(found == false){
                cout<<"Record not found against name "<<name<<endl;
               }else{
                cout<<"Name\tAge\tMatric\tFSc\tECAT\tPref1\tPref2\tPref3\t"<<endl;
                cout<<nameArray[foundindex]<<"\t"<<ageArray[foundindex]<<"\t"<<matricArray[foundindex]<<"\t"<<interArray[foundindex]<<"\t"<<ecatArray[foundindex]<<"\t"<<pref1Array[foundindex]<<"\t"<<pref2Array[foundindex]<<"\t"<<pref3Array[foundindex]<<endl; 
               }
            }
            else if(adminoption == 3){
              //update student record
               cout<<"Enter the name you want to update the record of ";
               string name;
               cin>>name;
               bool found = false;
               int foundindex = -1;
               for( int i = 0; i<index; i++){
                if( nameArray[i] == name ){
                    foundindex = i;
                
                found = true;
                }
               }
               if(found == true){
                cout<<"--------------- OLD RECORD --------------- "<<endl;
                cout<<"Name\tAge\tMatric\tFSc\tECAT\tPref1\tPref2\tPref3\t"<<endl;
                cout<<nameArray[foundindex]<<"\t"<<ageArray[foundindex]<<"\t"<<matricArray[foundindex]<<"\t"<<interArray[foundindex]<<"\t"<<ecatArray[foundindex]<<"\t"<<pref1Array[foundindex]<<"\t"<<pref2Array[foundindex]<<"\t"<<pref3Array[foundindex]<<endl; 
                cout<<"Enter new record for update "<<endl;
                cout<<"Enter your name "<<endl;
            string name;
            cin>>name;
            cout<<"Enter your age "<<endl;
            int age;
            cin>>age;
            cout<<"Enter Matric marks "<<endl;
            float matric;
            cin>>matric;
            cout<<"Enter Fsc marks "<<endl;
            float fsc;
            cin>>fsc;
            cout<<"Enter your ECAT marks "<<endl;
            float ecat;
            cin>>ecat;
            // Preferences  
            cout<<"Enter CS, CE, EE as your preferences "<<endl;
            cout<<"Enter your 1st preference "<<endl;
            string pref1;
            cin>>pref1;
            cout<<"Enter your 2nd preference "<<endl;
            string pref2;
            cin>>pref2;
            cout<<"Enter your 3rd preference "<<endl;
            string pref3;
            cin>>pref3;
            // stores data in Arrays
            nameArray[foundindex] = name;
            ageArray[foundindex] = age;
            matricArray[foundindex] = matric;
            interArray[foundindex] = fsc;
            ecatArray[foundindex] = ecat;
            pref1Array[foundindex] = pref1;
            pref2Array[foundindex] = pref2;
            pref3Array[foundindex] = pref3;

               }else{
                cout<<"Record not found ";
               }
            }
            else if(adminoption == 4){
              //generate merit list
              for(int i=0; i<index; i = i+1){
                float aggrigate = matricArray[i]/1100.0*100.0*0.30 + interArray[i]/1200.0*100.0*0.4 + ecatArray[i]/400.0*100.0*0.3;
                aggrigateArray[i] = aggrigate;
              }
              //sorting the data on the base of aggrigate
              for(int i=0; i<index; i++){
                for(int j=i; j<index; j++){
                    if(aggrigateArray[i] < aggrigateArray[j]){
                        // swapping of name
                               string temp = nameArray[i];
                               nameArray[i] = nameArray[j];
                               nameArray[j] = temp;
                        // swapping of matric
                               float tempMatric = matricArray[i];
                               matricArray[i] = matricArray[j];
                               matricArray[j] = tempMatric;

                        // swapping of inter
                               float tempInter = interArray[i];
                               interArray[i] = interArray[j];
                               interArray[j] = tempInter;

                        // swapping of ecat
                               float tempEcat = ecatArray[i];
                               ecatArray[i] = ecatArray[j];
                               ecatArray[j] = tempEcat;

                        // swapping of p1
                               string tempP1 = pref1Array[i];
                               pref1Array[i] = pref1Array[j];
                               pref1Array[j] = tempP1;

                        // swapping of p2
                               string tempP2 = pref2Array[i];
                               pref2Array[i] = pref2Array[j];
                               pref2Array[j] = tempP2;

                        // swapping of P3
                               string tempP3 = pref3Array[i];
                               pref3Array[i] = pref3Array[j];
                               pref3Array[j] = tempP3;

                        // swapping of aggregate
                               float tempAgg = aggrigateArray[i];
                               aggrigateArray[i] = aggrigateArray[j];
                               aggrigateArray[j] = tempAgg;

                    }
                }
              }
              //code do display all data with aggregate
              cout<<"Name\tAge\tAggrigate"<<endl;
              for(int i=0; i<index; i++){
                if(nameArray[i] != ""){
                    cout<<nameArray[i]<<"\t"<<ageArray[i]<<"\t"<<matricArray[i]<<"\t"<<interArray[i]<<"\t"<<aggrigateArray[i]<<endl;
              }
            }

              //code to display sorted data
            }
            else if(adminoption == 5){
              //delete student record
               cout<<"Enter the name you want to Delete ";
               string name;
               cin>>name;
               bool found = false;
               int foundindex = -1;
               for( int i = 0; i<index; i++){
                if( nameArray[i] == name ){
                    foundindex = i;
                
                found = true;
                }
               }
               if(found == true){
            nameArray[foundindex] = "";
            ageArray[foundindex] = 0;
            matricArray[foundindex] = 0;
            interArray[foundindex] = 0;
            ecatArray[foundindex] = 0;
            pref1Array[foundindex] = "";
            pref2Array[foundindex] = "";
            pref3Array[foundindex] = "";
            cout<<"Record of "<<name<<" deleted "<<endl;
            }else{
                cout<<"Record not found "<<endl;
               }
            }
            else if(adminoption == 6){
                break;
            }
            else
            {
             cout<<"Wrong option selected"<<endl;
            }
            cout<<"Press any key to continue..."<<endl;
            getch();
           }
            cout<<"Press any key to continue...";
            getch();
            break;
        }else
        {
            cout<<"Username or Password invalid "<<endl;
        }
        cout<<"Press any key to continue...";

        getch();
        }
        }
        else if(userOption == 2){
            //write here the student code
            system("cls");
            cout<<"Welcome to UMS Student Menu "<<endl;
            cout<<"Enter your name "<<endl;
            string name;
            cin>>name;
            cout<<"Enter your age "<<endl;
            int age;
            cin>>age;
            cout<<"Enter Matric marks "<<endl;
            float matric;
            cin>>matric;
            cout<<"Enter Fsc marks "<<endl;
            float fsc;
            cin>>fsc;
            cout<<"Enter your ECAT marks "<<endl;
            float ecat;
            cin>>ecat;
            // Preferences  
            cout<<"Enter CS, CE, EE as your preferences "<<endl;
            cout<<"Enter your 1st preference "<<endl;
            string pref1;
            cin>>pref1;
            cout<<"Enter your 2nd preference "<<endl;
            string pref2;
            cin>>pref2;
            cout<<"Enter your 3rd preference "<<endl;
            string pref3;
            cin>>pref3;
            // stores data in Arrays
            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout<<"Your data has been saved "<<endl;
            cout<<"Press any key to continue...";

        getch();
        }
        else if(userOption == 3){
            break;
        }
        else{
            cout<<"You entered the wrong option"<<endl;
        }
    }//end of main while loop
    cout<<endl<<"Thanks for using this software";
}