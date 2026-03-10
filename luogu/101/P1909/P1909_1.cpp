#include<iostream>
#include<climits>
using namespace std;

// create a class for pencil 
class Pencil{
        private:
                int price;
                int count;

        public:
                // constructor function
                Pencil(int p, int c): price(p), count(c){}

                // find the total cost of the 
                // n is the number of the students
                int Total_cost(int n){
                        return (n + count - 1) / count * price;
                }
};

int main(){
        int n;
        cin >> n;
        // cout << "f" << endl;
        Pencil* shop[3];

        // initialize the elements that pointed by the pointer
        // radiculously, the elements even don't have their own name
        for(int i = 0; i < 3; i ++){
                int p, c;
                cin >> c >> p;
                shop[i] = new Pencil(p, c);
        }

        // let cost be a very large integer
        // and find the smallest number in the Total_cost
        int cost = INT_MAX;
        for(int i = 0; i < 3; i++){
                cost = (shop[i] -> Total_cost(n) < cost)? (shop[i] -> Total_cost(n)) : cost;
        }

        // clean the memory 
        for(int i = 0; i < 3; i++){
                delete shop[i];
        }

        cout << cost << endl;
        return 0;
}
