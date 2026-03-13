#include<iostream>
using namespace std;
void sort(int &a, int &b){
        int t;
        if(a < b){
        }else if(a > b){
                t = a;
                a = b;
                b = t;
        }
}

// GCD Greatest Common Divisor
// The greatest common divisor of two numbers is the same as the greatest common divisor of the smaller number and the remainder of the division of the two numbers
// GCD(a, b) = GCD(b, a % b)
// a % b = a - k * b
// a > b
int GCD(int a, int b){
        return (b == 0) ? a : GCD(b, a % b);
}

int main(){
        int a, b, c;
        cin >> a >> b >> c;
        sort(a, b);
        sort(a, c);
        sort(b, c);
        // a < b < c
        cout << a / GCD(c, a) << "/" << c / GCD(c, a) << endl;
        return 0;
}
