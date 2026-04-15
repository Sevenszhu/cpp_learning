#include<iostream>
#include<string>
using namespace std;
int main(){
        char s[13];
        cin >> s;
        int sum = 0;
        int j = 0;
        for(int i = 0; i < 11; i++){
                if(s[i] == '-'){
                        continue;
                }
                j++;
                sum += (j *((int)s[i] - '0'));
        }
        sum %= 11;
        // cout << sum << endl;
        // cout << s[12] << endl;
        if(s[12] == (char)(sum + '0')){
                cout << "Right" << endl;
        }else{
                s[12] = (char)(sum + '0');
                cout << s << endl;
        }
        return 0;
}

