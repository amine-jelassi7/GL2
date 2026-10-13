#include "Time.h"
#include <iostream>

using namespace std;

int main() {
    Time t1(4, 45, 59), t2(1, 20, 32);
    Time t3;
    t1.getTime();
    t2.getTime();
    t3.addTime(t1, t2);
    t3.getTime();
}