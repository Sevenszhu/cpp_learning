#include<iostream>
using namespace std;
int main(){
        // the first two positions of 100 is 00
        int x = 100;
        int n = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
                for(int j = 1; j <= (6 - i); j++){
                        printf("%d", (int)((((double)(++x) / 100) - 1)) * 100);
                }
                cout << endl;
        }
        return 0;
}
