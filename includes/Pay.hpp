#ifndef UNTITLED14_PAY_HPP
#define UNTITLED14_PAY_HPP
#include <iostream>
#include "Terminale.hpp"

extern double currency;

void PaymentMenu();
int Payment();

class Pay: public Terminale{

public:

    friend void PaymentMenu();
    friend int Payment();
    void handle () override;

};


#endif //UNTITLED14_PAY_HPP
