#include<iostream>
#include<cmath>
using namespace std;
int main(){
        // Q means the number of the problem 
        int Q;
        cin >> Q;
        if(Q == 1){
                cout << "I love luogu" << endl;
        }else if(Q == 2){
                cout << 2 + 4 << ' ' << 10 - (2 + 4) << endl;
        }else if(Q == 3){
                cout << 14 / 4 << ' ' << 14 / 4 * 4 << ' ' << 14 % 4 << endl;
        }else if(Q == 4){
                printf("%.6f", 500.0 / 3);
        }else if(Q == 5){
                cout << (260 + 220) / 32 << endl;
        }else if(Q == 6){
                cout << sqrt(pow(6, 2) + pow(9, 2)) << endl;
        }else if(Q == 7){
                cout << 100 + 10 << ' ' << 100 + 10 - 20 << ' ' << 0 << endl;
        }else if(Q == 8){
                cout << 2 * 3.141593 * 5 << ' ' << 3.141593 * pow(5, 2) << ' ' << 4 / 3 * 3.141593 * pow(5, 3);
        }
        return 0;
}
