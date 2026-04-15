#include<iostream>
#include<string>
using namespace std;
int main(){
        // Input
        // s will store the ISBN code
        char s[17];
        cin >> s;

        // sum: the value of the last position
        int sum = 0;
        // j: valid times that the numbers count
        int j = 0;
        for(int i = 0; i < 11; i++){
                if(s[i] == '-'){
                        // if the value is not number, skip
                        continue;
                }
                j++;
                sum += (j *((int)s[i] - '0'));
        }
        // get the final number
        sum %= 11;
        // cout << sum << endl;
        // cout << s[12] << endl;

        // Output
        char ls[] = "0123456789X";

        // Judge whether is Right
        if(s[12] == ls[sum]){
                cout << "Right" << endl;
        }else{
                s[12] = ls[sum];
                cout << s << endl;
        }

        return 0;
}

