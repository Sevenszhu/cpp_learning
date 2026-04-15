#include<iostream>
using namespace std;
int main(){
        int a = 0;
        cin >> a;
        int count = 0;
        for(; a != 1; a /= 2){
                count++;
        }
        cout << ++count << endl;
        return 0;
}
