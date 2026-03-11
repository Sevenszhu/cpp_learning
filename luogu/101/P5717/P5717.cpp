#include<iostream>
#include<cmath>
using namespace std;
// swap value of two elements
void swap(int &a, int &b){
        int t;
        t = a;
        a = b;
        b = t;
}

// a function to sort the length of the triangle line segment
void sort_length(int &a, int &b, int &c){
        if(a < b){
        }else{
                swap(a, b);
        }
        if(a < c){
        }else{
                swap(a, c);
        }
        if(b < c){
        }else{
                swap(b, c);
        }
}

// judge the angle
void type_of_angle(int a, int b, int c){
        int ab = pow(a, 2) + pow(b, 2);
        int cc = pow(c, 2);
        if(ab == cc){
                cout << "Right triangle" << endl;
        }else if(ab < cc){
                cout << "Obtuse triangle" << endl;
        }else if(ab > cc){
                cout << "Acute triangle" << endl;
        }
}

// judge the segment
void type_of_segment(int a, int b, int c){
        if(a == b || a == c || b == c){
                cout << "Isosceles triangle" << endl;
                if(a == b && a == c){
                        cout << "Equilateral triangle" << endl;
                }
        }
}

int main(){
        int a, b, c;
        cin >> a >> b >> c;
        sort_length(a, b, c);
        if(a + b <= c){
                cout << "Not triangle" << endl;
        }else{
                type_of_angle(a, b, c);
                type_of_segment(a, b, c);
        }
                return 0;
}
