#include<iostream>
using namespace std;
int main(){
        int m, t, s;
        cin >> m >> t >> s;
        if(t == 0){
                cout << 0 << endl;
        }else if((s + t - 1) / t <= m){
                cout << m - ((s + t - 1) / t) << endl;
        }else{
                cout << m << endl;
        }
        return 0;
}
