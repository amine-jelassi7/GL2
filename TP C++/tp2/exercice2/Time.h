#ifndef UNTITLED_TIME_H
#define UNTITLED_TIME_H


class Time {
    protected:
        int hours;
        int minutes;
        int seconds;
    public:
        Time();
        Time(int h, int m, int s);
        void getTime() const;
        int getHours() const;
        int getMin() const;
        int getSec() const;
        void addTime(Time const &t1, Time const &t2);
};


#endif 
