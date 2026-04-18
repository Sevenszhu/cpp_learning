#include<iostream>
using namespace std;
int main(){
        int n = 0;
        cin >> n;
        
        // count is the number written down
        int count = 1;
        // let the square from top to down be n to 1
        // and there are n values on nth line
        for(int i = n; i >= 1; i--){
                for(int j = i; j >= 1; j--){
                        printf("%02d", count);
                        // when move to the next position, value + 1
                        count ++;
                }
                // when a line is over, open a new line
                cout << endl;
        }
        
        return 0;
}
