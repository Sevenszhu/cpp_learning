#include<iostream>
using namespace std;
int main(){
        double ele_bill = 0.0;
        int ele = 0;
        cin >> ele;
        while(1){
                if(ele <= 150){
                        ele_bill += (ele * 0.4463);
                        break;
                }else if(ele >= 151 && ele <= 400){
                        ele_bill += ((ele - 150) * 0.4663);
                        ele = 150;
                }else if(ele >= 401){
                        ele_bill += ((ele - 400) * 0.5663);
                        ele = 400;
                }
        }
        printf("%.1f", ele_bill);

        return 0;
}
