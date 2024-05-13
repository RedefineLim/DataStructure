#ifndef PROJECT3_BANKTO_H
#define PROJECT3_BANKTO_H
#include <string>

class Bank
{
private:
    char name[20];
    char account[15];
    double deposit;
public:
    Bank();
    Bank(char* a, char* b, double c = 0.0);
    void Show() const;
    void put_in(double mo);
    void get_out(double mo);
};

#endif //PROJECT3_BANKTO_H
