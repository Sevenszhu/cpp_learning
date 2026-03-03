#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
        // Input 
        int s, v, time;
        cin >> s >> v;

        // Transformation
        // s % v \neq 0 will trigger the condition of add 1 minutea to the whole time
        // Because if the value in () is \neq 0, that means true
        /*
        if(s % v){
                time = s / v + 1;
        }
        else{
                time = s / v;
        }
       */ 
        // We can also use a more simple way for ceiling
        // Because the smallest step is fixed and the only one that exceed the smaller integer is the integer it self
        time = (s + v - 1) / v;

        // Time transformation
        // Hour -> minute -> minus -> hour
        // Get the minutes of the whole time
        // HH stands for the position of hour and MM stands for the one for minute
        int HH, MM;
        int all_time = 8 * 60;
        all_time -= (time + 10);
        // judge whether the time exceeds 8 hours
        if(all_time < 0){
                all_time += (60 * 24);
        }
        HH = all_time / 60;
        MM = all_time % 60;
        
        // Output
        if(MM >= 10){
                if(HH >= 10){
                        cout << HH << ":" << MM;
                }
                else{
                        cout << "0" << HH << ":" << MM;
                }
        }
        else{
                if(HH >= 10){
                        cout << HH << ":" << "0" << MM;
                }
                else{
                        cout << "0" << HH << ":" << "0" << MM;
                }
        
        }
        return 0;
}
