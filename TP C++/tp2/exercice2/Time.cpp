#include "Time.h"
#include <cstdio>

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

Time::~Time() {}

int Time::getHours() {
    return this->hours;
}

int Time::getMin() {
    return this->minutes;
}

int Time::getSec() {
    return this->seconds;
}

void Time::getTime() {
    std::printf("%02d:%02d:%02d\n", this->hours, this->minutes, this->seconds);
}

void Time::addTime(Time& t1, Time& t2) {
    int total_seconds = t1.seconds + t2.seconds;
    int total_minutes = t1.minutes + t2.minutes + (total_seconds / 60);

    this->seconds = total_seconds % 60;
    this->minutes = total_minutes % 60;
    this->hours = t1.hours + t2.hours + (total_minutes / 60);
}


void Time::setTime(int h, int m, int s) {
    this->hours = h;
    this->minutes = m;
    this->seconds = s;
}


int Time::toSeconds()
{
    return (this->hours * 3600) + (this->minutes * 60) + this->seconds;
}