#include<iostream>
using namespace std;
int main(){
        int assessment[8] = {0};
        int day;
        // Initialize 'days' to 0 to avoid using an uninitialized value in the first iteration
        int days = 0;
        int school, mother;
        for(day = 1; day < 8; day ++){
                cin >> school >> mother;
                assessment[day] = school + mother;
                // if there is no day jinjin should is unhappy
                // the days is initialized to 0
                days = (assessment[day] > 8 && assessment[day] > assessment[days]) ? day : days;
        }
        cout << days << endl;
        return 0;
}
