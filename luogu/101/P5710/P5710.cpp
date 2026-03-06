#include<iostream>
using namespace std;
int main(){
        // x is the number that input to the program
        int x;
        cin >> x;
        bool P1 = x % 2 == 0, P2 = (x > 4) && (x <= 12);
        cout << (P1 && P2) << ' ' << (P1 || P2) << ' ' << ((!P1 && P2) || (P1 && !P2)) << ' ' << (!P1 && !P2) << endl;
        return 0;
}
