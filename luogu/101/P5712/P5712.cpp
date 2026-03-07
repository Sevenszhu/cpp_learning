#include<iostream>
#include<string>
using namespace std;
int main(){
        // n is the number of apples
        int n;
        string word;
        cin >> n;
        if(n == 1 || n  == 0){
                word = "apple";
        }else{
                word = "apples";
        }
        cout << "Today, I ate " << n << ' ' << word << "." << endl;
        return 0;
}
