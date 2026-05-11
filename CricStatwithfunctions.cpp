#include<iostream>
using namespace std;

const int TOTAL_PLAYERS = 1000;
int index = 5;

string nameArray[TOTAL_PLAYERS]      = {"Virat Kohli", "Saeed Anwar", "Wasim Akram", "Imran Khan", "Ricky Ponting"};
int    MatchesArray[TOTAL_PLAYERS]   = {556, 302, 460, 263, 560};
float  RunsArray[TOTAL_PLAYERS]      = {27000, 11500, 6600, 7500, 27400};
float  AverageArray[TOTAL_PLAYERS]   = {53, 45, 22, 25, 42};
float  CenturiesArray[TOTAL_PLAYERS] = {85, 20, 3, 6, 71};
float  WicketsArray[TOTAL_PLAYERS]   = {5, 0, 916, 544, 8};
float  EconomyArray[TOTAL_PLAYERS]   = {6.2, 0, 3.9, 2.8, 4.9};
float  rankingArray[TOTAL_PLAYERS];

void calculateRankings()
{
    int i = 0;
    while(i < index)
    {
        if(nameArray[i] != "")
        {
            float battingRanking = (RunsArray[i] * 0.5) + (AverageArray[i] * 0.3) + (CenturiesArray[i] * 0.2);
            float bowlingRanking = (WicketsArray[i] * 0.8) + ((10 - EconomyArray[i]) * 0.2);
            rankingArray[i] = battingRanking + bowlingRanking;
        }
        else
        {
            rankingArray[i] = -1;
        }
        i++;
    }
}

void printTableHeader()
{
    cout << "\nICC Ranking\tName\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy" << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
}

void showAllPlayers()
{
    calculateRankings();
    printTableHeader();

    int r = 1;
    while(r <= index)
    {
        int i = 0;
        while(i < index)
        {
            if(nameArray[i] != "")
            {
                int rank = 1;
                int j = 0;
                while(j < index)
                {
                    if(nameArray[j] != "" && rankingArray[j] > rankingArray[i])
                    {
                        rank++;
                    }
                    j++;
                }
                if(rank == r)
                {
                    cout << r << "\t\t" << nameArray[i] << "\t\t" << MatchesArray[i] << "\t" << RunsArray[i] << "\t" << AverageArray[i] << "\t" << CenturiesArray[i] << "\t\t" << WicketsArray[i] << "\t" << EconomyArray[i] << endl;
                }
            }
            i++;
        }
        r++;
    }
}

void searchPlayer()
{
    cout << "Enter the player name you want to search: ";
    string name;
    cin.ignore();
    getline(cin, name);

    bool found = false;
    int foundindex = -1;

    int i = 0;
    while(i < index)
    {
        if(nameArray[i] == name)
        {
            foundindex = i;
            found = true;
        }
        i++;
    }

    if(found == false)
    {
        cout << "Record not found against name " << name << endl;
    }
    else
    {
        calculateRankings();

        int rank = 1;
        int i = 0;
        while(i < index)
        {
            if(nameArray[i] != "" && rankingArray[i] > rankingArray[foundindex])
            {
                rank++;
            }
            i++;
        }

        printTableHeader();
        cout << rank << "\t\t" << nameArray[foundindex] << "\t\t" << MatchesArray[foundindex] << "\t" << RunsArray[foundindex] << "\t" << AverageArray[foundindex] << "\t" << CenturiesArray[foundindex] << "\t\t" << WicketsArray[foundindex] << "\t" << EconomyArray[foundindex] << endl;
    }
}

void showICCRanking()
{
    calculateRankings();

    string sortedName[TOTAL_PLAYERS];
    int    sortedMatches[TOTAL_PLAYERS];
    float  sortedRuns[TOTAL_PLAYERS];
    float  sortedAverage[TOTAL_PLAYERS];
    float  sortedCenturies[TOTAL_PLAYERS];
    float  sortedWickets[TOTAL_PLAYERS];
    float  sortedEconomy[TOTAL_PLAYERS];
    float  sortedRanking[TOTAL_PLAYERS];

    int i = 0;
    while(i < index)
    {
        sortedName[i]      = nameArray[i];
        sortedMatches[i]   = MatchesArray[i];
        sortedRuns[i]      = RunsArray[i];
        sortedAverage[i]   = AverageArray[i];
        sortedCenturies[i] = CenturiesArray[i];
        sortedWickets[i]   = WicketsArray[i];
        sortedEconomy[i]   = EconomyArray[i];
        sortedRanking[i]   = rankingArray[i];
        i++;
    }

    i = 0;
    while(i < index)
    {
        int j = i + 1;
        while(j < index)
        {
            if(sortedRanking[i] < sortedRanking[j])
            {
                string tempName    = sortedName[i];      sortedName[i]      = sortedName[j];      sortedName[j]      = tempName;
                int   tempMatches  = sortedMatches[i];   sortedMatches[i]   = sortedMatches[j];   sortedMatches[j]   = tempMatches;
                float tempRuns     = sortedRuns[i];      sortedRuns[i]      = sortedRuns[j];      sortedRuns[j]      = tempRuns;
                float tempAverage  = sortedAverage[i];   sortedAverage[i]   = sortedAverage[j];   sortedAverage[j]   = tempAverage;
                float tempCentury  = sortedCenturies[i]; sortedCenturies[i] = sortedCenturies[j]; sortedCenturies[j] = tempCentury;
                float tempWickets  = sortedWickets[i];   sortedWickets[i]   = sortedWickets[j];   sortedWickets[j]   = tempWickets;
                float tempEconomy  = sortedEconomy[i];   sortedEconomy[i]   = sortedEconomy[j];   sortedEconomy[j]   = tempEconomy;
                float tempRanking  = sortedRanking[i];   sortedRanking[i]   = sortedRanking[j];   sortedRanking[j]   = tempRanking;
            }
            j++;
        }
        i++;
    }

    cout << "\n------------------------------------- ICC RANKING ----------------------------------------" << endl;
    printTableHeader();

    i = 0;
    while(i < index)
    {
        if(sortedName[i] != "")
        {
            cout << i + 1 << "\t\t" << sortedName[i] << "\t\t" << sortedMatches[i] << "\t" << sortedRuns[i] << "\t" << sortedAverage[i] << "\t" << sortedCenturies[i] << "\t\t" << sortedWickets[i] << "\t" << sortedEconomy[i] << endl;
        }
        i++;
    }
}

void updatePlayer()
{
    cout << "Enter the player name you want to update: ";
    string name;
    cin.ignore();
    getline(cin, name);

    bool found = false;
    int foundindex = -1;

    int i = 0;
    while(i < index)
    {
        if(nameArray[i] == name)
        {
            foundindex = i;
            found = true;
        }
        i++;
    }

    if(found == true)
    {
        cout << "------------------------------------------- OLD STATS -------------------------------------- " << endl;
        cout << "Name\t\t\tMatches\tRuns\tAverage\tCenturies\tWickets\tEconomy" << endl;
        cout << "--------------------------------------------------------------------------------------------" << endl;
        cout << nameArray[foundindex] << "\t\t" << MatchesArray[foundindex] << "\t" << RunsArray[foundindex] << "\t" << AverageArray[foundindex] << "\t" << CenturiesArray[foundindex] << "\t\t" << WicketsArray[foundindex] << "\t" << EconomyArray[foundindex] << endl;

        cout << "\nEnter new stats:" << endl;
        cout << "Enter player name: ";
        string newname;
        cin.ignore();
        getline(cin, newname);
        cout << "Enter total matches: ";
        int matches;
        cin >> matches;
        cout << "Enter total runs: ";
        float runs;
        cin >> runs;
        cout << "Enter batting average: ";
        float average;
        cin >> average;
        cout << "Enter total centuries: ";
        float centuries;
        cin >> centuries;
        cout << "Enter total wickets: ";
        float wickets;
        cin >> wickets;
        cout << "Enter bowling economy: ";
        float economy;
        cin >> economy;

        nameArray[foundindex]      = newname;
        MatchesArray[foundindex]   = matches;
        RunsArray[foundindex]      = runs;
        AverageArray[foundindex]   = average;
        CenturiesArray[foundindex] = centuries;
        WicketsArray[foundindex]   = wickets;
        EconomyArray[foundindex]   = economy;

        cout << "Record updated successfully" << endl;
    }
    else
    {
        cout << "Record not found" << endl;
    }
}

void deletePlayer()
{
    cout << "Enter the player name you want to delete: ";
    string name;
    cin.ignore();
    getline(cin, name);

    bool found = false;
    int foundindex = -1;

    int i = 0;
    while(i < index)
    {
        if(nameArray[i] == name)
        {
            foundindex = i;
            found = true;
        }
        i++;
    }

    if(found == true)
    {
        int i = foundindex;
        while(i < index - 1)
        {
            nameArray[i]      = nameArray[i + 1];
            MatchesArray[i]   = MatchesArray[i + 1];
            RunsArray[i]      = RunsArray[i + 1];
            AverageArray[i]   = AverageArray[i + 1];
            CenturiesArray[i] = CenturiesArray[i + 1];
            WicketsArray[i]   = WicketsArray[i + 1];
            EconomyArray[i]   = EconomyArray[i + 1];
            i++;
        }

        nameArray[index - 1]      = "";
        MatchesArray[index - 1]   = 0;
        RunsArray[index - 1]      = 0;
        AverageArray[index - 1]   = 0;
        CenturiesArray[index - 1] = 0;
        WicketsArray[index - 1]   = 0;
        EconomyArray[index - 1]   = 0;
        index--;

        cout << "Record of " << name << " deleted" << endl;
    }
    else
    {
        cout << "Record not found" << endl;
    }
}

void addPlayer()
{
    if(index >= TOTAL_PLAYERS)
    {
        cout << "Player list is full. Cannot add more players." << endl;
        return;
    }

    system("cls");
    cout << "------------------------- ADD NEW PLAYER -------------------------" << endl;
    cout << "Enter player name: ";
    string name;
    cin.ignore();
    getline(cin, name);
    cout << "Enter total matches: ";
    int matches;
    cin >> matches;
    cout << "Enter total runs: ";
    float runs;
    cin >> runs;
    cout << "Enter batting average: ";
    float average;
    cin >> average;
    cout << "Enter total centuries: ";
    float centuries;
    cin >> centuries;
    cout << "Enter total wickets: ";
    float wickets;
    cin >> wickets;
    cout << "Enter bowling economy: ";
    float economy;
    cin >> economy;

    nameArray[index]      = name;
    MatchesArray[index]   = matches;
    RunsArray[index]      = runs;
    AverageArray[index]   = average;
    CenturiesArray[index] = centuries;
    WicketsArray[index]   = wickets;
    EconomyArray[index]   = economy;
    index++;

    cout << "Player added successfully" << endl;
}

bool adminLogin()
{
    int i = 0;
    while(i < 3)
    {
        system("cls");
        cout << "Welcome to Admin Menu" << endl;
        cout << "Enter Username ";
        string username;
        cin >> username;
        cout << "Enter Password ";
        string password;
        cin >> password;

        if(username == "admin" && password == "1234")
        {
            cout << "Login Successfully : Login attempt " << i + 1 << endl;
            return true;
        }
        else
        {
            cout << "Username or Password invalid" << endl;
            if(i == 2)
            {
                cout << "Too many failed attempts. Returning to main menu." << endl;
            }
        }

        cout << "Press any key to continue...";
        cin.get();
        cin.ignore();
        i++;
    }
    return false;
}

void adminMenu()
{
    if(!adminLogin())
    {
        return;
    }

    while(true)
    {
        system("cls");
        cout << "1 Show all players"     << endl;
        cout << "2 Search player"        << endl;
        cout << "3 Update player record" << endl;
        cout << "4 ICC Ranking"          << endl;
        cout << "5 Delete player"        << endl;
        cout << "6 Add player"           << endl;
        cout << "7 Logout"               << endl;
        cout << "Choose Option ";

        int adminoption;
        cin >> adminoption;

        if(adminoption == 1)
        {
            showAllPlayers();
        }
        else if(adminoption == 2)
        {
            searchPlayer();
        }
        else if(adminoption == 3)
        {
            updatePlayer();
        }
        else if(adminoption == 4)
        {
            showICCRanking();
        }
        else if(adminoption == 5)
        {
            deletePlayer();
        }
        else if(adminoption == 6)
        {
            addPlayer();
        }
        else if(adminoption == 7)
        {
            break;
        }
        else
        {
            cout << "Wrong option selected" << endl;
        }

        cout << "Press any key to continue..." << endl;
        cin.get();
        cin.ignore();
    }

    cout << "Press any key to continue...";
    cin.get();
}

void analystMenu()
{
    while(true)
    {
        system("cls");
        cout << "----------------------------------------- ANALYST MENU -----------------------------------------" << endl;
        cout << "1 View all players" << endl;
        cout << "2 Search player"    << endl;
        cout << "3 ICC Ranking"      << endl;
        cout << "4 Exit"             << endl;
        cout << "Choose Option ";

        int analystoption;
        cin >> analystoption;

        if(analystoption == 1)
        {
            showAllPlayers();
        }
        else if(analystoption == 2)
        {
            searchPlayer();
        }
        else if(analystoption == 3)
        {
            showICCRanking();
        }
        else if(analystoption == 4)
        {
            break;
        }
        else
        {
            cout << "Wrong option selected" << endl;
        }

        cout << "Press any key to continue..." << endl;
        cin.get();
        cin.ignore();
    }
}

int main()
{
    while(true)
    {
        system("cls");
        cout << "----------------------------------------------------------------------------"  << endl;
        cout << "----------------------------------CricStat----------------------------------"  << endl;
        cout << "----------------------------------------------------------------------------"  << endl;
        cout << "---------------------------------USER MENU----------------------------------"  << endl;
        cout << "1. Admin"    << endl;
        cout << "2. Analyst"  << endl;
        cout << "3. To Exit"  << endl;
        cout << "Choose Option ";

        int userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;

        if(userOption == 1)
        {
            adminMenu();
        }
        else if(userOption == 2)
        {
            analystMenu();
        }
        else if(userOption == 3)
        {
            break;
        }
        else
        {
            cout << "You entered the wrong option" << endl;
        }
    }

    cout << endl << "Thanks for using CricStat";
    return 0;
}