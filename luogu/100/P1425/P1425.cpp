#include<iostream>
using namespace std;
int main(){
        // Input
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Data transformation
        int d_time = 60 * c + d - 60 * a - b;
        
        // Transform the time interval from minute to hour
        int hour, min;
        hour = d_time / 60;
        min = d_time % 60;

        // Output
        cout << hour << " " << min << endl;
                return 0;
}
