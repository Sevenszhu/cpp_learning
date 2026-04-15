#include<iostream>
using namespace std;
int main(){
        int n, k;
        cin >> n >> k;
        int count = n / k;
        // k_1, k_2 mean the two groups avg num
        double k_1, k_2;
        if(count == 0){
                k_1 = 0;
                k_2 = (n + 1) / 2.0;
        }else{
                k_1 = (count * k + k) / 2.0;
                k_2 = ((((n + 1) * n) / 2.0) - (((count * k) + k) * count / 2.0)) / (n - count);
        }
        printf("%.1f %.1f", k_1, k_2);
        return 0;
}
