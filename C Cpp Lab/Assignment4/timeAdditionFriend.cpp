/*
Aditya Aparadh
PRN: 22610082           SYIT                S3
Program to add two Time Objects using a Friend Function
*/

#include <iostream>
using namespace std;


class Time
{
private:
    int seconds = 0, minutes = 0, hours = 0;

public:
    Time(int hrs, int min, int sec)
    { // Protects from invalid input
        if (sec >= 0 && sec < 60)
        {
            seconds = sec;
        }
        if (min >= 0 && min < 60)
        {
            minutes = min;
        }
        if (hrs >= 0 && hrs < 24)
        {
            hours = hrs;
        }
    }

    // Getter Functions
    int getSeconds()
    {
        return seconds;
    }
    int getMinutes()
    {
        return minutes;
    }
    int getHours()
    {
        return hours;
    }
    
    // Friend Function declaration
    friend Time addTime(Time, Time);
    
    // Display time function
    void PrintTime()
    {
        string HRS = to_string(hours), MIN = to_string(minutes), SEC = to_string(seconds); // For Proper Formatting of Time
        if (hours < 10)
        {
            HRS = "0" + to_string(hours);
        }
        if (minutes < 10)
        {
            MIN = "0" + to_string(minutes);
        }
        if (seconds < 10)
        {
            SEC = "0" + to_string(seconds);
        }
        cout << HRS << ":" << MIN << ":" << SEC << endl;
    }
};

Time addTime(Time t1, Time t2)
{
    int sec = t1.seconds + t2.seconds;
    int Mcarry = 0, Hcarry = 0;
    if (sec > 59)
    {
        Mcarry = sec / 60;
        sec %= 60;
    }
    int min = t1.minutes + t2.minutes + Mcarry;
    if (min > 59)
    {
        Hcarry = min / 60;
        min %= 60;
    }
    int hrs = (t1.hours + t2.hours + Hcarry) % 24;

    Time t = Time(hrs, min, sec);
    return t;
}


int main()
{
    int s,m,h;
    cout << "Enter Hours, Minutes, Seconds of t1" <<endl;
    cin >> h >> m >> s;
    Time a = Time(h,m,s);
    cout << "Enter Hours, Minutes, Seconds of t2" << endl;
    cin >> h >> m >> s;
    Time b = Time(h, m, s);
    Time c = addTime(a,b);
    cout << "t1 + t2 = ";
    c.PrintTime();
    return 0;
}
