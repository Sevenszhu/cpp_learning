#include<iostream>
// this program references some code from others
using namespace std;
int main(){
        // x: day the fish start to swim
        // n: days the fish swims 
        int x, n;
        int total_distance = 0;
        cin >> x >> n;

        // one day for each time
        // when n > 0, ther still exist some days to do
        // one day past, whole time the fish swims - 1 (n--)
        for(; n > 0; n--){
                // represent each day of the weak with x
                // when x \neq 7 or 6, meaning that the fish should swim
                // when x = 7 or 6, do nothing, the fish won't swim
                if(x != 6 && x != 7){
                        total_distance += 250;
                // when meat 7, there doesn't exist day 8 in a week
                // so we should let day 8 be monday
                // that is, last sunday is the next 0
                }else if(x == 7){
                        x = 0;
                }
                // after swim, the day past
                // we should open a new day
                x ++;
                // we can also use x = x % 7 + 1
        }
        cout << total_distance << endl;
        return 0;
        }

