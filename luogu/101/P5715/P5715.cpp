#include<iostream>
using namespace std;
// Selection sort:
/* 
 * Logic:
 * 1. THe sorted sublist at the begining. (left)
 * 2. The unsorted sublist occupying the rest of the list. (right)
 * Steps:
 * 1. Find (Select): Search the entire unsorted sublist to find the minimum element;
 * 2. Swap: Swap the minimum element with the leftmost unsorted element (putting it in its correct sorted position).
 * 3. Repeat: Move the boundary between the sorted and unsorted sublists one element to the right and repeat until the entire list is sorted.
 */

/* 
 * Evaluation Stratagy:
 * I: Pass by Value:
 * Pass by value is a machanism where the value of the actual argument is copied into a new momory location allocated for the formal parameter of the function.
 * The caller's variable and function's parameter occupy two distinct memory adress.
 * II: Pass by Reference (the character of cpp, with a & before the variables in the parameters list):
 * Pass by reference is a machanism where the formal parameter becomes an alias (another name) for the actual argument.
 * No new momory is allocated for the data itself
 * The caller's variables and function's parameters share the same memory adress.
 */
void swap(int &i, int &j){
        if(i > j){
                int m;
                m = j;
                j = i;
                i = m;
        }else{}
}

int main(){
        int a, b, c;
        
        cin >> a >> b >> c;
        swap(a, b);
        swap(a, c);
        swap(b, c);
        cout << a << ' ' << b << ' ' << c << endl;

        return 0;
}
