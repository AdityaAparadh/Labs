#include <iostream>
using namespace std;

class Time{
    private: 
        int seconds=0, minutes=0, hours=0;
        
    public:
        Time(int hrs, int min, int sec) {           //Protects from invalid input
        if(sec>=0 && sec<60){
            seconds = sec;
        }
        if(min>=0 && min<60){
            minutes = min;
        }
        if(hrs>=0 && hrs<24){
            hours = hrs;
        }
    }

// Getter Functions
        int getSeconds(){
            return seconds;
        }
        int getMinutes(){
            return minutes;
        }
        int getHours(){
            return hours;
        }

 // Setter Functions      
        void setSeconds(int sec){
            seconds = sec;
        }
        void setMinutes(int min){
            minutes = min;
        }
        void setHours(int hrs){
            hours = hrs;
        }

// Add Time function with operator overloading
        Time operator+(Time t2){
            int sec = seconds + t2.getSeconds();
            int Mcarry = 0, Hcarry = 0;
            if (sec > 59) {
                Mcarry = sec / 60;
                sec %= 60;
            }
            int min = minutes + t2.getMinutes() + Mcarry;
            if (min > 59) {
                Hcarry = min / 60;
                min %= 60;
            }
            int hrs = (hours + t2.getHours() + Hcarry) % 24;  
            Time t = Time(hrs, min, sec);
            return t;
        }

//Display time function
        void PrintTime(){
            string HRS = to_string(hours),MIN = to_string(minutes),SEC = to_string(seconds);    //For Proper Formatting of Time
            if(hours<10){
                HRS = "0" + to_string(hours);
            }
            if(minutes<10){
                MIN = "0" + to_string(minutes);
            }
            if(seconds<10){
                SEC = "0" + to_string(seconds);
            }
            cout << HRS << ":" << MIN << ":" << SEC << endl;
        }
};


int main(){
    Time a = Time(5,32,50);
    Time b = Time(4,55,34);

    Time c = a+b;
    c.PrintTime();
}