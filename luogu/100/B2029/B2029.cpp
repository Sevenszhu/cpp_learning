#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
        // h for height, r for radius of the bottom circle
        // v for the volume of a bucket
        int h, r;
        // 3.14 is the type of double, so v should be double to avoid the lost of precition
        double v;
        cin >> h >> r;
        v = 3.14 * r * r * h;
        int v_0 = 20 * 1000;
        // n is the number of the bucket
        int n;
        n = (v_0 + v - 1) / v;
        cout << n << endl;
        return 0;
}
