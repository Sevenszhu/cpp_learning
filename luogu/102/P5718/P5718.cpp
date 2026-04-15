#include<iostream>
using namespace std;

int main(){
        // Input n
        int n;
        cin >> n;
        // input n values
        int v[n];
        for(int i = 0; i < n; i++){
                cin >> v[i];
        }
        // 1000 is the maximum number of v
        int mini = 1000;
        
        // n - 1 is the last position, i = n - 1 is the last < n
        for(int i = 0; i < n; i++){
                if(mini > v[i]){
                        mini = v[i];
                        // cout << mini << endl;
                }/*else{
                        cout << mini << endl;
                }*/
        }
        cout << mini << endl;
        return 0;

}
