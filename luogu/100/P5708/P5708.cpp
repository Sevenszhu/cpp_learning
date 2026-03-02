#include<iostream>
#include<cmath>
using namespace std;
int main(){
        // a, b, c are three lines of the triangle
        double a, b, c;
        cin >> a >> b >> c;
        double p = (a + b + c) / 2;
        // s is the area of the triangle
        double s = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("%.1f", s);
        return 0;
}
