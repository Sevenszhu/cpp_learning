#include<iostream>
#include<cmath>
using namespace std;
int main(){
        // Q means the number of the problem 
        int Q;
        cin >> Q;
        if(Q == 1){
                cout << "I love Luogu!" << endl;
        }else if(Q == 2){
                cout << 2 + 4 << ' ' << 10 - (2 + 4) << endl;
        }else if(Q == 3){
                cout << 14 / 4 << endl << 14 / 4 * 4 << endl << 14 % 4 << endl;
        }else if(Q == 4){
                printf("%.3f", 500.0 / 3);
        }else if(Q == 5){
                cout << (260 + 220) / 32 << endl;
        }else if(Q == 6){
                cout << sqrt(pow(6, 2) + pow(9, 2)) << endl;
        }else if(Q == 7){
                cout << 100 + 10 << endl << 100 + 10 - 20 << endl << 0 << endl;
        }else if(Q == 8){
                // use float to satisfy the precition
                // so we should use 4.0
                cout << 2 * 3.141593 * 5 << endl << 3.141593 * pow(5, 2) << endl << 4.0 / 3 * 3.141593 * pow(5, 3) << endl;
        }else if(Q == 9){
                cout << 22 << endl;
        }else if(Q == 10){
                cout << 9 << endl;
        }else if(Q == 11){
                cout << 100.0 / 3;
        }else if(Q == 12){
                char a = 'M', b = 64;
                int i = a - b;
                a += 12;
                b += 18;
                cout << i << endl << b << endl;
        }else if(Q == 13){
                int result = cbrt(4.0 / 3 * 3.141593 * (pow(4, 3) + pow(10, 3)));
                cout << result << endl;
        }else if(Q == 14){
                cout << 50 << endl;
        }


        return 0;
}
