#include "Time.h"
#include <iostream>




int main() {

    Time t1(4, 45, 59), t2(1, 20, 32);
    t1.getTime();
    t2.getTime();

    Time t ;
    t.addTime(t1,t2);
    t.getTime();

    std::cout << "tester la fonction additionnel (setTime) : " ;
    t.setTime(1,11,11);
    t.getTime();
    std::cout <<std::endl <<  "tester la fonction additionnel (toSeconds) : "  << t.toSeconds() << std::endl;







    return 0;
}