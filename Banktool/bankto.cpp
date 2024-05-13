#include "bankto.h"
#include <iostream>
#include <cstring>

Bank::Bank() {
    std::cout << "\aÇëÊäÈëÄúµÄÕË»§!\n";
}

Bank::Bank(char *a, char *b, double c) {
    strcpy(name, a);
    strcpy(account, b);
    deposit = c;
}

void Bank::Show() const {
    std::cout << name << std::endl;
    std::cout << account << std::endl;
    std::cout << deposit << std::endl;
}

void Bank::put_in(double mo) {
    deposit += mo;
}

void Bank::get_out(double mo) {
    deposit -= mo;
}