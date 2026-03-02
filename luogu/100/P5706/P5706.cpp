#include<iostream>
using namespace std;
int main(){
        // t is the capacity of all the cola
        // n is the number of all the students
        // input
        double t;
        int n;
        cin >> t >> n;

        // data transformation
        double cap_avg;
        int num_cup;
        cap_avg = t/n;
        num_cup = 2 * n;

        printf("%.3f\n", cap_avg);
        cout << num_cup << endl;

        return 0;
}
