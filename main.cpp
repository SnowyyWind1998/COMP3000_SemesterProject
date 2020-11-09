#include <cstdlib>
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;
using std::setw;

struct dueDay{
    int num;
    string name;
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int emergencylvl;
};

    //create object
    dueDay due1{0, " ", 1970, 0, 0, 0, 0, 0};
    dueDay due2{0, " ", 1970, 0, 0, 0, 0, 0};
    dueDay due3{0, " ", 1970, 0, 0, 0, 0, 0};
    dueDay due4{0, " ", 1970, 0, 0, 0, 0, 0};
    dueDay due5{0, " ", 1970, 0, 0, 0, 0, 0};

//Show all the info on screen
//get system time
void localtime(){
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "local time: " << dt;
    cout << "Due Day: " << endl;
}

//show main menu
void menu(){
    cout << endl;
    cout << "Enter ls to check all recorded due day." << endl;
    cout << "Enter cd to check how much time left for every due day." << endl;
    cout << "Enter md to edit due day." << endl;
    cout << "Enter e to exit." << endl;
}

//Due dy list
void dueDayList(){
    cout << "No." << setw(16) << "name" << setw(12) << "year" << setw(6) << "month" << setw(4) << "day" << setw(5) << "hour" << setw(7) << "minute" << setw(10) << "EMERGENCY" << endl;
        if(due1.num != 0){
            cout << setw(2) << due1.num << right << setw(24) << due1.name << setw(5) << due1.year << setw(6) << due1.month << setw(4) << due1.day << setw(5) << due1.hour << setw(7) << due1.minute << setw(10) << due1.emergencylvl << endl;
        }
        if(due2.num != 0){
            cout << setw(2) << due2.num << right << setw(24) << due2.name << setw(5) << due2.year << setw(6) << due2.month << setw(4) << due2.day << setw(5) << due2.hour << setw(7) << due2.minute << setw(10) << due2.emergencylvl << endl;
        }
        if(due3.num != 0){
            cout << setw(2) << due3.num << right << setw(24) << due3.name << setw(5) << due3.year << setw(6) << due3.month << setw(4) << due3.day << setw(5) << due3.hour << setw(7) << due3.minute << setw(10) << due3.emergencylvl << endl;
        }
        if(due4.num != 0){
            cout << setw(2) << due4.num << right << setw(24) << due4.name << setw(5) << due4.year << setw(6) << due4.month << setw(4) << due4.day << setw(5) << due4.hour << setw(7) << due4.minute << setw(10) << due4.emergencylvl << endl;
        }
        if(due5.num != 0){
            cout << setw(2) << due5.num << right << setw(24) << due5.name << setw(5) << due5.year << setw(6) << due5.month << setw(4) << due5.day << setw(5) << due5.hour << setw(7) << due5.minute << setw(10) << due5.emergencylvl << endl;
        }
}

void saving(){
        //Saving info to the file and Exit the programme
        //output to the file for saving
        //clean the original file
        ofstream myFile("infoStorage.txt",ios::trunc);
        //save dueDay1
        myFile << "num1 " << due1.num << "\n";
        myFile << "name1" << due1.name << "\n";
        myFile << "year1 " << due1.year << "\n";
        myFile << "month1 " << due1.month << "\n";
        myFile << "day1 " << due1.day << "\n";
        myFile << "hour1 " << due1.hour << "\n";
        myFile << "minute1 " << due1.minute << "\n";
        myFile << "emergencylvl1 " << due1.emergencylvl << "\n";
        //save dueDay2
        myFile << "num2 " << due2.num << "\n";
        myFile << "name2" << due2.name << "\n";
        myFile << "year2 " << due2.year << "\n";
        myFile << "month2 " << due2.month << "\n";
        myFile << "day2 " << due2.day << "\n";
        myFile << "hour2 " << due2.hour << "\n";
        myFile << "minute2 " << due2.minute << "\n";
        myFile << "emergencylvl2 " << due2.emergencylvl << "\n";
        //save dueDay3
        myFile << "num3 " << due3.num << "\n";
        myFile << "name3" << due3.name << "\n";
        myFile << "year3 " << due3.year << "\n";
        myFile << "month3 " << due3.month << "\n";
        myFile << "day3 " << due3.day << "\n";
        myFile << "hour3 " << due3.hour << "\n";
        myFile << "minute3 " << due3.minute << "\n";
        myFile << "emergencylvl3 " << due3.emergencylvl << "\n";
        //save dueDay4
        myFile << "num4 " << due4.num << "\n";
        myFile << "name4" << due4.name << "\n";
        myFile << "year4 " << due4.year << "\n";
        myFile << "month4 " << due4.month << "\n";
        myFile << "day4 " << due4.day << "\n";
        myFile << "hour4 " << due4.hour << "\n";
        myFile << "minute4 " << due4.minute << "\n";
        myFile << "emergencylvl4 " << due4.emergencylvl << "\n";
        //save dueDay5
        myFile << "num5 " << due5.num << "\n";
        myFile << "name5" << due5.name << "\n";
        myFile << "year5 " << due5.year << "\n";
        myFile << "month5 " << due5.month << "\n";
        myFile << "day5 " << due5.day << "\n";
        myFile << "hour5 " << due5.hour << "\n";
        myFile << "minute5 " << due5.minute << "\n";
        myFile << "emergencylvl5 " << due5.emergencylvl << "\n";

        myFile.close();
        }

void timecal(int num, string name, int year, int month, int day, int hour, int minute){
    time_t now;
    now = time(NULL);
    // cout << now << endl;

    tm *ltm = localtime(&now);

   // print various components of tm structure.
//    cout << "Year:" << 1900 + ltm->tm_year<<endl;
//    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
//    cout << "Day: "<< ltm->tm_mday << endl;
//    cout << "Time: "<< ltm->tm_hour << ":";
//    cout << ltm->tm_min << ":";
//    cout << ltm->tm_sec << endl;
     struct tm t1 ={0};
     double seconds;
     int sec;
     double h;

     t1.tm_year = year - 1900;
     t1.tm_mon = month-1;
     t1.tm_mday = day;
     t1.tm_hour = hour;
     t1.tm_min = minute;

     sec = (t1.tm_hour)*60+(t1.tm_min)-((ltm->tm_hour)*60+(ltm->tm_min));
     h=sec/60;

     seconds = difftime(mktime(&t1), mktime(&*ltm));
     cout << "There are ";
     cout << floor(seconds / 84600);
     cout << " day(s), ";
     cout << abs(floor(h)) << "hour(s), ";
     cout << abs(sec%60) << "minute(s) left for " << name << endl;
}

void countdown(){

    cout << "No." << setw(16) << "name" << setw(12) << "year" << setw(6) << "month" << setw(4) << "day" << setw(5) << "hour" << setw(7) << "minute" << setw(10) << "EMERGENCY" << endl;
        if(due1.num != 0){
            cout << setw(2) << due1.num << right << setw(24) << due1.name << setw(5) << due1.year << setw(6) << due1.month << setw(4) << due1.day << setw(5) << due1.hour << setw(7) << due1.minute << setw(10) << due1.emergencylvl << endl;
        }
        if(due2.num != 0){
            cout << setw(2) << due2.num << right << setw(24) << due2.name << setw(5) << due2.year << setw(6) << due2.month << setw(4) << due2.day << setw(5) << due2.hour << setw(7) << due2.minute << setw(10) << due2.emergencylvl << endl;
        }
        if(due3.num != 0){
            cout << setw(2) << due3.num << right << setw(24) << due3.name << setw(5) << due3.year << setw(6) << due3.month << setw(4) << due3.day << setw(5) << due3.hour << setw(7) << due3.minute << setw(10) << due3.emergencylvl << endl;
        }
        if(due4.num != 0){
            cout << setw(2) << due4.num << right << setw(24) << due4.name << setw(5) << due4.year << setw(6) << due4.month << setw(4) << due4.day << setw(5) << due4.hour << setw(7) << due4.minute << setw(10) << due4.emergencylvl << endl;
        }
        if(due5.num != 0){
            cout << setw(2) << due5.num << right << setw(24) << due5.name << setw(5) << due5.year << setw(6) << due5.month << setw(4) << due5.day << setw(5) << due5.hour << setw(7) << due5.minute << setw(10) << due5.emergencylvl << endl;
        }
}

int main(){
    //Read file
    ifstream myFile;
    string str;
    myFile.open("infoStorage.txt");
    if(myFile.is_open()){
        std::string key, value;
        while(!myFile.eof()){
            myFile >> key;
            getline(myFile, str);
            if(key == "num1"){
                due1.num = std::stoi(str);
            }
            else if(key == "name1"){
                due1.name = str;
            }
            else if(key == "year1"){
                due1.year = std::stoi(str);
            }
            else if(key == "month1"){
                due1.month = std::stoi(str);
            }
            else if(key == "day1"){
                due1.day = std::stoi(str);
            }
            else if(key == "hour1"){
                due1.hour = std::stoi(str);
            }
            else if(key == "minute1"){
                due1.minute = std::stoi(str);
            }
            else if(key == "emergencylvl1"){
                due1.emergencylvl = std::stoi(str);
            }
            else if(key == "num2"){
                due2.num = std::stoi(str);
            }
            else if(key == "name2"){
                due2.name = str;
            }
            else if(key == "year2"){
                due2.year = std::stoi(str);
            }
            else if(key == "month2"){
                due2.month = std::stoi(str);
            }
            else if(key == "day2"){
                due2.day = std::stoi(str);
            }
            else if(key == "hour2"){
                due2.hour = std::stoi(str);
            }
            else if(key == "minute2"){
                due2.minute = std::stoi(str);
            }
            else if(key == "emergencylvl2"){
                due2.emergencylvl = std::stoi(str);
            }
            else if(key == "num3"){
                due3.num = std::stoi(str);
            }
            else if(key == "name3"){
                due3.name = str;
            }
            else if(key == "year3"){
                due3.year = std::stoi(str);
            }
            else if(key == "month3"){
                due3.month = std::stoi(str);
            }
            else if(key == "day3"){
                due3.day = std::stoi(str);
            }
            else if(key == "hour3"){
                due3.hour = std::stoi(str);
            }
            else if(key == "minute3"){
                due3.minute = std::stoi(str);
            }
            else if(key == "emergencylvl3"){
                due3.emergencylvl = std::stoi(str);
            }
            else if(key == "num4"){
                due4.num = std::stoi(str);
            }
            else if(key == "name4"){
                due4.name = str;
            }
            else if(key == "year4"){
                due4.year = std::stoi(str);
            }
            else if(key == "month4"){
                due4.month = std::stoi(str);
            }
            else if(key == "day4"){
                due4.day = std::stoi(str);
            }
            else if(key == "hour4"){
                due4.hour = std::stoi(str);
            }
            else if(key == "minute4"){
                due4.minute = std::stoi(str);
            }
            else if(key == "emergencylvl4"){
                due4.emergencylvl = std::stoi(str);
            }
            else if(key == "num5"){
                due5.num = std::stoi(str);
            }
            else if(key == "name5"){
                due5.name = str;
            }
            else if(key == "year5"){
                due5.year = std::stoi(str);
            }
            else if(key == "month5"){
                due5.month = std::stoi(str);
            }
            else if(key == "day5"){
                due5.day = std::stoi(str);
            }
            else if(key == "hour5"){
                due5.hour = std::stoi(str);
            }
            else if(key == "minute5"){
                due5.minute = std::stoi(str);
            }
            else if(key == "emergencylvl5"){
                due5.emergencylvl = std::stoi(str);
            }
        }
 
        //home page
        string a;
        cout << "***Welcome to the Deadline reminder***" << endl;
        do{
        menu();
        cin >> a;
        if(a=="ls"||a=="LS"){
            cout << "loading due day list..." << endl;
            _sleep(600);
            cout << "loading due day list......" << endl;
            _sleep(600);
            cout << "loading due day list........." << endl;
            _sleep(600);
            localtime();
            dueDayList();
        }
        else if (a=="cd"||a=="CD"){
            cout << "loading count down list..." << endl;
            _sleep(600);
            cout << "loading count down list......" << endl;
            _sleep(600);
            cout << "loading count down list........." << endl;
            _sleep(600);
            localtime();
            //output time
            if(due1.num != 0){
                timecal(due1.num, due1.name, due1.year, due1.month, due1.day, due1.hour, due1.minute);
            }
            if(due2.num != 0){
                timecal(due2.num, due2.name, due2.year, due2.month, due2.day, due2.hour, due2.minute);
            }
            if(due3.num != 0){
                timecal(due3.num, due3.name, due3.year, due3.month, due3.day, due3.hour, due3.minute);
            }
            if(due4.num != 0){
                timecal(due4.num, due4.name, due4.year, due4.month, due4.day, due4.hour, due4.minute);
            }
            if(due5.num != 0){
                timecal(due5.num, due5.name, due5.year, due5.month, due5.day, due5.hour, due5.minute);
            }
        }
        else if (a=="md"||a=="MD"){
            int numb;
            dueDayList();
            cout << "Which one do you want to edit?(1-5)" << endl;
            cin >> numb;
            if(numb > 5||numb < 0){
                cout << "input invalid" << endl;
                cin >> numb;
            }
            else if (numb == 1){
                cout << "Enter the name: ";
                cin >> due1.name;
                cout << "Enter the year: ";
                cin >> due1.year;
                cout << "Enter the month: ";
                cin >> due1.month;
                cout << "Enter the day: ";
                cin >> due1.day;
                cout << "Enter the hour: ";
                cin >> due1.hour;
                cout << "Enter the minute: ";
                cin >> due1.minute;
                cout << "Enter emergency level: ";
                cin >> due1.emergencylvl;
            }
            else if (numb == 2){
                cout << "Enter the name: ";
                cin >> due2.name;
                cout << "Enter the year: ";
                cin >> due2.year;
                cout << "Enter the month: ";
                cin >> due2.month;
                cout << "Enter the day: ";
                cin >> due2.day;
                cout << "Enter the hour: ";
                cin >> due2.hour;
                cout << "Enter the minute: ";
                cin >> due2.minute;
                cout << "Enter emergency level: ";
                cin >> due2.emergencylvl;
            }
            else if (numb == 3){
                cout << "Enter the name: ";
                cin >> due3.name;
                cout << "Enter the year: ";
                cin >> due3.year;
                cout << "Enter the month: ";
                cin >> due3.month;
                cout << "Enter the day: ";
                cin >> due3.day;
                cout << "Enter the hour: ";
                cin >> due3.hour;
                cout << "Enter the minute: ";
                cin >> due3.minute;
                cout << "Enter emergency level: ";
                cin >> due3.emergencylvl;
            }
            else if (numb == 4){
                cout << "Enter the name: ";
                cin >> due4.name;
                cout << "Enter the year: ";
                cin >> due4.year;
                cout << "Enter the month: ";
                cin >> due4.month;
                cout << "Enter the day: ";
                cin >> due4.day;
                cout << "Enter the hour: ";
                cin >> due4.hour;
                cout << "Enter the minute: ";
                cin >> due4.minute;
                cout << "Enter emergency level: ";
                cin >> due4.emergencylvl;
            }
            else if (numb == 5){
                cout << "Enter the name: ";
                cin >> due5.name;
                cout << "Enter the year: ";
                cin >> due5.year;
                cout << "Enter the month: ";
                cin >> due5.month;
                cout << "Enter the day: ";
                cin >> due5.day;
                cout << "Enter the hour: ";
                cin >> due5.hour;
                cout << "Enter the minute: ";
                cin >> due5.minute;
                cout << "Enter emergency level: ";
                cin >> due5.emergencylvl;
            }
        }
        else{
            saving();
            break;
        }
        }
        while(a != "e");
        
        
    }
}