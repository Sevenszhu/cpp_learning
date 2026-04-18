#include<iostream>
using namespace std;
int main(){
        // Input
        int n = 0;
        int x = 0;
        int temp = 0;
        cin >> n >> x;

        int count = 0;
        for(int i = 1; i <= n; i++){
                /*if(i <= 9){
                        if(i == x){
                                count++;
                        }
                }else{
                        for(int j = i; j >= 10;){
                                temp = j % 10;
                                j /= 10;
                                if(temp == x){
                                        count++;
                                }       
                                if(j == x){
                                        count++;
                                }
                        }
                }*/      
                // the loop is also a judgement
                // if not, ignore
                for(int j = i; j >= 10;){
                        temp = j % 10;
                        j /= 10;
                        if(temp == x){
                                count++;
                        }       
                        if(j == x){
                                count++;
                        }
                }
                if(i == x){
                        count ++;
                }
        }
        cout << count << endl;
        return 0;
}
