#include<iostream>
using namespace std;
int main(){
    const int TOTAL_PLAYERS = 1000;
    int index = 5;

    //data structures
    string nameArray[TOTAL_PLAYERS] = {"Virat Kohli","Saeed Anwar","Wasim Akram","Imran Khan","Ricky Ponting"};
    int MatchesArray[TOTAL_PLAYERS] = {556, 302, 460, 263, 560};
    float RunsArray[TOTAL_PLAYERS] = {27000, 11500, 6600, 7500, 27400};
    float AverageArray[TOTAL_PLAYERS] = {53, 45, 22, 25, 42};
    float CenturiesArray[TOTAL_PLAYERS] = {85, 20, 3, 6, 71};
    float WicketsArray[TOTAL_PLAYERS] = {5, 0, 916, 544, 8};
    float EconomyArray[TOTAL_PLAYERS] = {6.2, 0, 3.9, 2.8, 4.9};
    float rankingArray[TOTAL_PLAYERS];

    while(true){
        system("cls");
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"----------------------------------CricStat----------------------------------"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"---------------------------------USER MENU----------------------------------"<<endl;
        cout<<"1. Admin"<<endl;
        cout<<"2. Analyst"<<endl;
        cout<<"3. To Exit"<<endl;
        cout<<"Choose Option ";
        int userOption;
        cin>>userOption;

        cout<<"You Choose "<<userOption<<endl;

        if(userOption == 1){
            for(int i=0; i<3; i++){
                system("cls");
                cout<<"Welcome to Admin Menu"<<endl;
                cout<<"Enter Username ";
                string username;
                cin>>username;
                cout<<"Enter Password ";
                string password;
                cin>>password;
                if(username == "admin" && password == "1234"){
                    cout<<"Login Successfully : Login attempt "<<i+1<<endl;
                    while(true){
                        system("cls");
                        cout<<"1 Show all players"<<endl;
                        cout<<"2 Search player"<<endl;
                        cout<<"3 Update player record"<<endl;
                        cout<<"4 ICC Ranking"<<endl;
                        cout<<"5 Delete player"<<endl;
                        cout<<"6 Add player"<<endl;
                        cout<<"7 Logout"<<endl;
                        cout<<"Choose Option ";
                        int adminoption;
                        cin>>adminoption;

                        if(adminoption == 1){
                            for(int i=0; i<index; i++){
                                if(nameArray[i] != ""){
                                    float battingRanking = (RunsArray[i] * 0.5) + (AverageArray[i] * 0.3) + (CenturiesArray[i] * 0.2);
                                    float bowlingRanking = (WicketsArray[i] * 0.8) + ((10 - EconomyArray[i]) * 0.2);
                                    rankingArray[i] = battingRanking + bowlingRanking;
                                } else {
                                    rankingArray[i] = -1;
                                }
                            }
                            cout<<"\nICC Ranking\tName\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy"<<endl;
                            cout<<"--------------------------------------------------------------------------------------------"<<endl;
                            for(int r=1; r<=index; r++){
                                for(int i=0; i<index; i++){
                                    if(nameArray[i] != ""){
                                        int rank = 1;
                                        for(int j=0; j<index; j++){
                                            if(nameArray[j] != "" && rankingArray[j] > rankingArray[i]){
                                                rank++;
                                            }
                                        }
                                        if(rank == r){
                                            cout<<r<<"\t\t"<<nameArray[i]<<"\t\t"<<MatchesArray[i]<<"\t"<<RunsArray[i]<<"\t"<<AverageArray[i]<<"\t"<<CenturiesArray[i]<<"\t\t"<<WicketsArray[i]<<"\t"<<EconomyArray[i]<<endl;
                                        }
                                    }
                                }
                            }
                        }
                        else if(adminoption == 2){
                            cout<<"Enter the player name you want to search: ";
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int foundindex = -1;
                            for(int i=0; i<index; i++){
                                if(nameArray[i] == name){
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if(found == false){
                                cout<<"Record not found against name "<<name<<endl;
                            }else{
                                for(int i=0; i<index; i++){
                                    if(nameArray[i] != ""){
                                        float battingRanking = (RunsArray[i] * 0.5) + (AverageArray[i] * 0.3) + (CenturiesArray[i] * 0.2);
                                        float bowlingRanking = (WicketsArray[i] * 0.8) + ((10 - EconomyArray[i]) * 0.2);
                                        rankingArray[i] = battingRanking + bowlingRanking;
                                    } else {
                                        rankingArray[i] = -1;
                                    }
                                }
                                int rank = 1;
                                for(int i=0; i<index; i++){
                                    if(nameArray[i] != "" && rankingArray[i] > rankingArray[foundindex]){
                                        rank++;
                                    }
                                }
                                cout<<"\nICC Ranking\tName\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy"<<endl;
                                cout<<"--------------------------------------------------------------------------------------------"<<endl;
                                cout<<rank<<"\t\t"<<nameArray[foundindex]<<"\t\t"<<MatchesArray[foundindex]<<"\t"<<RunsArray[foundindex]<<"\t"<<AverageArray[foundindex]<<"\t"<<CenturiesArray[foundindex]<<"\t\t"<<WicketsArray[foundindex]<<"\t"<<EconomyArray[foundindex]<<endl;
                            }
                        }
                        else if(adminoption == 3){
                            cout<<"Enter the player name you want to update: ";
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int foundindex = -1;
                            for(int i=0; i<index; i++){
                                if(nameArray[i] == name){
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if(found == true){
                                cout<<"------------------------------------------- OLD STATS -------------------------------------- "<<endl;
                                cout<<"Name\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy"<<endl;
                                cout<<"--------------------------------------------------------------------------------------------"<<endl;
                                cout<<nameArray[foundindex]<<"\t\t"<<MatchesArray[foundindex]<<"\t"<<RunsArray[foundindex]<<"\t"<<AverageArray[foundindex]<<"\t"<<CenturiesArray[foundindex]<<"\t\t"<<WicketsArray[foundindex]<<"\t"<<EconomyArray[foundindex]<<endl;
                                cout<<"\nEnter new stats:"<<endl;
                                cout<<"Enter player name: ";
                                string newname;
                                cin.ignore();
                                getline(cin, newname);
                                cout<<"Enter total matches: ";
                                int matches;
                                cin>>matches;
                                cout<<"Enter total runs: ";
                                float runs;
                                cin>>runs;
                                cout<<"Enter batting average: ";
                                float average;
                                cin>>average;
                                cout<<"Enter total centuries: ";
                                float centuries;
                                cin>>centuries;
                                cout<<"Enter total wickets: ";
                                float wickets;
                                cin>>wickets;
                                cout<<"Enter bowling economy: ";
                                float economy;
                                cin>>economy;
                                nameArray[foundindex] = newname;
                                MatchesArray[foundindex] = matches;
                                RunsArray[foundindex] = runs;
                                AverageArray[foundindex] = average;
                                CenturiesArray[foundindex] = centuries;
                                WicketsArray[foundindex] = wickets;
                                EconomyArray[foundindex] = economy;
                                cout<<"Record updated successfully"<<endl;
                            }else{
                                cout<<"Record not found"<<endl;
                            }
                        }
                        else if(adminoption == 4){
                            for(int i=0; i<index; i++){
                                if(nameArray[i] != ""){
                                    float battingRanking = (RunsArray[i] * 0.5) + (AverageArray[i] * 0.3) + (CenturiesArray[i] * 0.2);
                                    float bowlingRanking = (WicketsArray[i] * 0.8) + ((10 - EconomyArray[i]) * 0.2);
                                    rankingArray[i] = battingRanking + bowlingRanking;
                                } else {
                                    rankingArray[i] = -1;
                                }
                            }
                            string sortedName[TOTAL_PLAYERS];
                            int sortedMatches[TOTAL_PLAYERS];
                            float sortedRuns[TOTAL_PLAYERS];
                            float sortedAverage[TOTAL_PLAYERS];
                            float sortedCenturies[TOTAL_PLAYERS];
                            float sortedWickets[TOTAL_PLAYERS];
                            float sortedEconomy[TOTAL_PLAYERS];
                            float sortedRanking[TOTAL_PLAYERS];
                            for(int i=0; i<index; i++){
                                sortedName[i] = nameArray[i];
                                sortedMatches[i] = MatchesArray[i];
                                sortedRuns[i] = RunsArray[i];
                                sortedAverage[i] = AverageArray[i];
                                sortedCenturies[i] = CenturiesArray[i];
                                sortedWickets[i] = WicketsArray[i];
                                sortedEconomy[i] = EconomyArray[i];
                                sortedRanking[i] = rankingArray[i];
                            }
                            for(int i=0; i<index; i++){
                                for(int j=i+1; j<index; j++){
                                    if(sortedRanking[i] < sortedRanking[j]){
                                        string temp = sortedName[i]; 
                                        sortedName[i] = sortedName[j]; 
                                        sortedName[j] = temp;

                                        int tempM = sortedMatches[i];
                                        sortedMatches[i] = sortedMatches[j];
                                        sortedMatches[j] = tempM;

                                        float tempR = sortedRuns[i];
                                        sortedRuns[i] = sortedRuns[j]; 
                                        sortedRuns[j] = tempR;

                                        float tempA = sortedAverage[i];
                                        sortedAverage[i] = sortedAverage[j]; 
                                        sortedAverage[j] = tempA;

                                        float tempC = sortedCenturies[i];
                                        sortedCenturies[i] = sortedCenturies[j];
                                        sortedCenturies[j] = tempC;

                                        float tempW = sortedWickets[i];
                                        sortedWickets[i] = sortedWickets[j];
                                        sortedWickets[j] = tempW;
                                        float tempE = sortedEconomy[i];
                                        sortedEconomy[i] = sortedEconomy[j];
                                        sortedEconomy[j] = tempE;

                                        float tempRanking = sortedRanking[i];
                                        sortedRanking[i] = sortedRanking[j];
                                        sortedRanking[j] = tempRanking;
                                    }
                                }
                            }
                            cout<<"\n------------------------------------- ICC RANKING ----------------------------------------"<<endl;
                            cout<<"ICC Ranking\tName\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy"<<endl;
                            cout<<"--------------------------------------------------------------------------------------------"<<endl;
                            for(int i=0; i<index; i++){
                                if(sortedName[i] != ""){
                                    cout<<i+1<<"\t\t"<<sortedName[i]<<"\t\t"<<sortedMatches[i]<<"\t"<<sortedRuns[i]<<"\t"<<sortedAverage[i]<<"\t"<<sortedCenturies[i]<<"\t\t"<<sortedWickets[i]<<"\t"<<sortedEconomy[i]<<endl;
                                }
                            }
                        }
                        else if(adminoption == 5){
                            cout<<"Enter the player name you want to delete: ";
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int foundindex = -1;
                            for(int i=0; i<index; i++){
                                if(nameArray[i] == name){
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if(found == true){
                                for(int i=foundindex; i<index-1; i++){
                                    nameArray[i] = nameArray[i+1];
                                    MatchesArray[i] = MatchesArray[i+1];
                                    RunsArray[i] = RunsArray[i+1];
                                    AverageArray[i] = AverageArray[i+1];
                                    CenturiesArray[i] = CenturiesArray[i+1];
                                    WicketsArray[i] = WicketsArray[i+1];
                                    EconomyArray[i] = EconomyArray[i+1];
                                }
                                nameArray[index-1] = "";
                                MatchesArray[index-1] = 0;
                                RunsArray[index-1] = 0;
                                AverageArray[index-1] = 0;
                                CenturiesArray[index-1] = 0;
                                WicketsArray[index-1] = 0;
                                EconomyArray[index-1] = 0;
                                index--;
                                cout<<"Record of "<<name<<" deleted"<<endl;
                            }else{
                                cout<<"Record not found"<<endl;
                            }
                        }
                        else if(adminoption == 6){
                            if(index >= TOTAL_PLAYERS){
                                cout<<"Player list is full. Cannot add more players."<<endl;
                            } else {
                                system("cls");
                                cout<<"------------------------- ADD NEW PLAYER -------------------------"<<endl;
                                cout<<"Enter player name: ";
                                string name;
                                cin.ignore();
                                getline(cin, name);
                                cout<<"Enter total matches: ";
                                int matches;
                                cin>>matches;
                                cout<<"Enter total runs: ";
                                float runs;
                                cin>>runs;
                                cout<<"Enter batting average: ";
                                float average;
                                cin>>average;
                                cout<<"Enter total centuries: ";
                                float centuries;
                                cin>>centuries;
                                cout<<"Enter total wickets: ";
                                float wickets;
                                cin>>wickets;
                                cout<<"Enter bowling economy: ";
                                float economy;
                                cin>>economy;
                                nameArray[index] = name;
                                MatchesArray[index] = matches;
                                RunsArray[index] = runs;
                                AverageArray[index] = average;
                                CenturiesArray[index] = centuries;
                                WicketsArray[index] = wickets;
                                EconomyArray[index] = economy;
                                index = index + 1;
                                cout<<"Player added successfully"<<endl;
                            }
                        }
                        else if(adminoption == 7){
                            break;
                        }
                        else{
                            cout<<"Wrong option selected"<<endl;
                        }
                        cout<<"Press any key to continue..."<<endl;
                        cin.get();
                        cin.ignore();
                    }
                    cout<<"Press any key to continue...";
                    cin.get();
                    break;
                }else{
                    cout<<"Username or Password invalid"<<endl;
                    if(i == 2){
                        cout<<"Too many failed attempts. Returning to main menu."<<endl;
                    }
                }
                cout<<"Press any key to continue...";
                cin.get();
                cin.ignore();
            }
        }
        else if(userOption == 2){
            while(true){
                system("cls");
                cout<<"----------------------------------------- ANALYST MENU -----------------------------------------"<<endl;
                cout<<"1 View all players"<<endl;
                cout<<"2 Search player"<<endl;
                cout<<"3 ICC Ranking"<<endl;
                cout<<"4 Exit"<<endl;
                cout<<"Choose Option ";
                int analystoption;
                cin>>analystoption;

                if(analystoption == 1){
                    for(int i=0; i<index; i++){
                        if(nameArray[i] != ""){
                            float battingRanking = (RunsArray[i] * 0.5) + (AverageArray[i] * 0.3) + (CenturiesArray[i] * 0.2);
                            float bowlingRanking = (WicketsArray[i] * 0.8) + ((10 - EconomyArray[i]) * 0.2);
                            rankingArray[i] = battingRanking + bowlingRanking;
                        } else {
                            rankingArray[i] = -1;
                        }
                    }
                    cout<<"\nICC Ranking\tName\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy"<<endl;
                        cout<<"--------------------------------------------------------------------------------------------"<<endl;
                    for(int r=1; r<=index; r++){
                        for(int i=0; i<index; i++){
                            if(nameArray[i] != ""){
                                int rank = 1;
                                for(int j=0; j<index; j++){
                                    if(nameArray[j] != "" && rankingArray[j] > rankingArray[i]){
                                        rank++;
                                    }
                                }
                                if(rank == r){
                                    cout<<r<<"\t\t"<<nameArray[i]<<"\t\t"<<MatchesArray[i]<<"\t"<<RunsArray[i]<<"\t"<<AverageArray[i]<<"\t"<<CenturiesArray[i]<<"\t\t"<<WicketsArray[i]<<"\t"<<EconomyArray[i]<<endl;
                                }
                            }
                        }
                    }
                }
                else if(analystoption == 2){
                    cout<<"Enter the player name you want to search: ";
                    string name;
                    cin.ignore();
                    getline(cin, name);
                    bool found = false;
                    int foundindex = -1;
                    for(int i=0; i<index; i++){
                        if(nameArray[i] == name){
                            foundindex = i;
                            found = true;
                        }
                    }
                    if(found == false){
                        cout<<"Record not found against name "<<name<<endl;
                    }else{
                        for(int i=0; i<index; i++){
                            if(nameArray[i] != ""){
                                float battingRanking = (RunsArray[i] * 0.5) + (AverageArray[i] * 0.3) + (CenturiesArray[i] * 0.2);
                                float bowlingRanking = (WicketsArray[i] * 0.8) + ((10 - EconomyArray[i]) * 0.2);
                                rankingArray[i] = battingRanking + bowlingRanking;
                            } else {
                                rankingArray[i] = -1;
                            }
                        }
                        int rank = 1;
                        for(int i=0; i<index; i++){
                            if(nameArray[i] != "" && rankingArray[i] > rankingArray[foundindex]){
                                rank++;
                            }
                        }
                        cout<<"\n-------------------------------------- PLAYER STATS --------------------------------------"<<endl;
                        cout<<"ICC Ranking\tName\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy"<<endl;
                        cout<<"--------------------------------------------------------------------------------------------"<<endl;
                        cout<<rank<<"\t\t"<<nameArray[foundindex]<<"\t\t"<<MatchesArray[foundindex]<<"\t"<<RunsArray[foundindex]<<"\t"<<AverageArray[foundindex]<<"\t"<<CenturiesArray[foundindex]<<"\t\t"<<WicketsArray[foundindex]<<"\t"<<EconomyArray[foundindex]<<endl;
                    }
                }
                else if(analystoption == 3){
                    for(int i=0; i<index; i++){
                        if(nameArray[i] != ""){
                            float battingRanking = (RunsArray[i] * 0.5) + (AverageArray[i] * 0.3) + (CenturiesArray[i] * 0.2);
                            float bowlingRanking = (WicketsArray[i] * 0.8) + ((10 - EconomyArray[i]) * 0.2);
                            rankingArray[i] = battingRanking + bowlingRanking;
                        } else {
                            rankingArray[i] = -1;
                        }
                    }
                    string sortedName[TOTAL_PLAYERS];
                    int sortedMatches[TOTAL_PLAYERS];
                    float sortedRuns[TOTAL_PLAYERS];
                    float sortedAverage[TOTAL_PLAYERS];
                    float sortedCenturies[TOTAL_PLAYERS];
                    float sortedWickets[TOTAL_PLAYERS];
                    float sortedEconomy[TOTAL_PLAYERS];
                    float sortedRanking[TOTAL_PLAYERS];
                    for(int i=0; i<index; i++){
                        sortedName[i] = nameArray[i];
                        sortedMatches[i] = MatchesArray[i];
                        sortedRuns[i] = RunsArray[i];
                        sortedAverage[i] = AverageArray[i];
                        sortedCenturies[i] = CenturiesArray[i];
                        sortedWickets[i] = WicketsArray[i];
                        sortedEconomy[i] = EconomyArray[i];
                        sortedRanking[i] = rankingArray[i];
                    }
                    for(int i=0; i<index; i++){
                        for(int j=i+1; j<index; j++){
                            if(sortedRanking[i] < sortedRanking[j]){
                                string temp = sortedName[i];
                                sortedName[i] = sortedName[j]; 
                                sortedName[j] = temp;

                                int tempM = sortedMatches[i]; 
                                sortedMatches[i] = sortedMatches[j]; 
                                sortedMatches[j] = tempM;

                                float tempR = sortedRuns[i];
                                sortedRuns[i] = sortedRuns[j];
                                sortedRuns[j] = tempR;

                                float tempA = sortedAverage[i];
                                sortedAverage[i] = sortedAverage[j];
                                sortedAverage[j] = tempA;

                                float tempC = sortedCenturies[i];
                                sortedCenturies[i] = sortedCenturies[j];
                                sortedCenturies[j] = tempC;

                                float tempW = sortedWickets[i];
                                sortedWickets[i] = sortedWickets[j];
                                sortedWickets[j] = tempW;

                                float tempE = sortedEconomy[i];
                                sortedEconomy[i] = sortedEconomy[j];
                                sortedEconomy[j] = tempE;

                                float tempRanking = sortedRanking[i];
                                sortedRanking[i] = sortedRanking[j];
                                sortedRanking[j] = tempRanking;
                            }
                        }
                    }
                    cout<<"\n-------------------------------------- ICC RANKING ---------------------------------------"<<endl;
                    cout<<"ICC Ranking\tName\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy"<<endl;
                    cout<<"--------------------------------------------------------------------------------------------"<<endl;
                    for(int i=0; i<index; i++){
                        if(sortedName[i] != ""){
                            cout<<i+1<<"\t\t"<<sortedName[i]<<"\t\t"<<sortedMatches[i]<<"\t"<<sortedRuns[i]<<"\t"<<sortedAverage[i]<<"\t"<<sortedCenturies[i]<<"\t\t"<<sortedWickets[i]<<"\t"<<sortedEconomy[i]<<endl;
                        }
                    }
                }
                else if(analystoption == 4){
                    break;
                }
                else{
                    cout<<"Wrong option selected"<<endl;
                }
                cout<<"Press any key to continue..."<<endl;
                cin.get();
                cin.ignore();
            }
        }
        else if(userOption == 3){
            break;
        }
        else{
            cout<<"You entered the wrong option"<<endl;
        }
    }
    cout<<endl<<"Thanks for using CricStat";
    return 0;
}