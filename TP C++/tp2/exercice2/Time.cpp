#include "Time.h"
#include <iomanip>
#include <iostream>

using namespace std;

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {};

Time::Time() : hours(0), minutes(0), seconds(0){}

void Time::getTime() const{
    cout << setfill('0') << setw(2) << hours << ":" 
         << setw(2) << minutes << ":" 
         << setw(2) << seconds << endl;
}
int Time::getMin() const{
    return minutes;
}
int Time::getSec() const{
    return seconds;
}
int Time::getHours() const{
    return hours;
}
void Time::addTime(Time const &t1, Time const &t2) {
    int h = t1.getHours() + t2.getHours();
    int m = t1.getMin() + t2.getMin();
    int s = t1.getSec() + t2.getSec();
    m += s/60;
    h += m/60;
    hours = h; 
    minutes = m % 60;
    seconds = s % 60;
}
