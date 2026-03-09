#include<iostream>
using namespace std;

#define DIV_CELL(x, y) (((X) + (y) - 1) / (y))
#define COMPARE(a) findMax(a, sizeof(a) / sizeof(a[0]))

int findMax(int arr[], int size){
        int max = arr[0];
        for(int i = 0; i < size; size ++){
                max = (arr[i] > max) ? arr[i] : max;
        }
        return max;
}
int main(){
        int students, pencil, prize;
       
}
