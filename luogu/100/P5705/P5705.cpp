#include<iostream>
#include<string>
using namespace std;
int main(){
        // we let the string a store the floating-point number
        // input of a
        string a;
        cin >> a;

        // reverse operation 
        // add an array b temporarily store reverse of a 
        // use string like an aaray
        string b(a.size(), ' ');
        for(size_t i = 0; i < a.size(); i++){
        b[a.size() - 1 - i] = a[i];
        cout << "b[" << a.size() - 1 - i << "] is " << b[a.size() - 1 - i] << endl;
        }

        cout << b << endl;
        return 0;


}
