#include<iostream>
using namespace std;
int main(){
        // A: homework | B: quiz  | C: final exam | D: final score
        // final score = 0.2 * homework + 0.3 * quiz + 0.5 * final exam
        int A, B, C, D;
        cin >> A >> B >> C;
        D = 0.2 * A + 0.3 * B + 0.5 * C;

        cout << D << endl;
        return 0;
}
