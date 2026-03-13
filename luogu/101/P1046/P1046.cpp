#include<iostream>
using namespace std;
int main(){
        int apple_height[10];
        int Tao_height = 0;
        for(int i = 0; i < 10; i++){
                cin >> apple_height[i];
        }
        cin >> Tao_height;
        Tao_height += 30;
        int number = 0;
        for(int i = 0; i < 10; i++){
                // if Tao_height >= apple_height, the value of the logic expression is 1
                // that can also represent this 1 apple can be reached by Tao
                number += (Tao_height >= apple_height[i]);
        }
        cout << number << endl;
        return 0;
}
