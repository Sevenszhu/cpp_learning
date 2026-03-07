#include<iostream>
#include<cmath>
using namespace std;
int main(){
        double BMI;
        double m, h;
        cin >> m >> h;
        BMI = m / pow(h, 2);

        if(BMI < 18.5){
                cout << "Underweight" << endl;
        }else if(BMI >= 18.5 && BMI < 24){
                cout << "Normal" <<endl;
        }else{
                cout << BMI << endl << "Overweight" << endl;
        }

        return 0;
}
