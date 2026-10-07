#ifndef EXERCICE2_TIME_H
#define EXERCICE2_TIME_H

class Time {
protected:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int h, int m, int s);
    virtual ~Time();


    int getHours();
    int getMin();
    int getSec();

    void getTime();
    void addTime(Time& t1, Time& t2);


    void setTime(int h, int m, int s);
    int toSeconds();
};

#endif // EXERCICE2_TIME_H
