#include<iostream>
using namespace std;

// a < b < c
void swap(int &a, int &b){
        if(a > b){
                int t = a;
                a = b;
                b = t;
        }
}
void sort(int &a, int &b, int &c){
        swap(a, b);
        swap(a, c);
        swap(b, c);
}

int main(){
        int num[3] = {0};
        string var;

        for(int i = 0; i <= 2; i++){
                cin >> num[i];
        }
        cin >> var;

        // num 0 < 1 < 2
        sort(num[0], num[1], num[2]);
        
        for(int i = 0; i <= 2; i++){
                switch(var[i]){
                        case 'A': cout << num[0] << ' ';
                                  break;
                        case 'B': cout << num[1] << ' ';
                                  break;
                        case 'C': cout << num[2] << ' ';
                }
        }
        cout << endl;
        return 0;
}
