#include<iostream>
using namespace std;

// a function to judge the leap year 
bool leap(int year){
        return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int main(){
        int year, month;
        cin >> year >> month;

        // owing to the characters of arrays
        // we should add 0 for day[0], which does not have a real meaning in reality
        int day[] = {0, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        // judge whether we should change the February
        day[2] = leap(year) ? (29) : (28);

        cout << day[month] << endl;

        return 0;
}
