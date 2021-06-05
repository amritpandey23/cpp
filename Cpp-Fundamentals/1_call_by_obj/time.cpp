/*
author: Amrit Pandey ok-ape
date: 18-02-21
*/

#include <iostream>
using namespace std;

// Time Class
class Time {
    private:
        int day, hr, min, sec;
    public:
        void set_data(int, int, int, int);
        void normalize();
        void show_data();
        Time add(Time);
};

int main()
{
    Time t1, t2, t3;
    t1.set_data(0, 24, 0, 0);
    t2.set_data(1, 23, 45, 2);
    t3 = t1.add(t2);
    t3.show_data();
    t1.show_data();
    return 0;
}

// Time: set data function
void Time::set_data(int d, int h, int m, int s)
{
    day = d;
    hr = h;
    min = m;
    sec = s;
    normalize();
}

// Time: normalize time
void Time::normalize()
{
    if (sec >= 60)
    {
        min += sec/60;
        sec -= (sec/60)*60;
    }

    if (min >= 60)
    {
        hr += min / 60;
        min -= (min / 60) * 60;
    }

    if (hr >= 24)
    {
        day += hr / 24;
        hr -= (hr / 24) * 24;
    }
}

// Time: show time
void Time::show_data()
{
    if (day == 0)
    {
        cout << hr << "Hours " << min << "Mins " << sec << "Secs " << endl;
    }
    else
    {
        cout << day << "Days " << hr << "Hours " << min << "Mins " << sec << "Secs " << endl;
    }
}

// Time: add time
Time Time::add(Time tx)
{
    Time tmp;
    tmp.set_data(day+tx.day, hr+tx.hr, min+tx.min, sec+tx.sec);
    tmp.normalize();
    return tmp;
}
