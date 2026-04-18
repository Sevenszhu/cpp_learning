#include<iostream>
using namespace std;

int factorial(int n){
        // if n <= 1, return 1
        if(n <= 1){
                return 1;
        }
        return n * factorial(n - 1);
}

int main(){
        int n = 0;
        cin >> n;
        long long int S = 0;
        

        // for each discrete value n (1 <= n <= S), we give it a factorial operation
        // start from 1, because in S, all the numbers are positive
        for(int i = 1; i <= n; i++){
                S += factorial(i);
        }
        
        cout << S << endl;
        return 0;
}
