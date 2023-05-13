#ifndef UNTITLED14_WITHDRAW_HPP
#define UNTITLED14_WITHDRAW_HPP
#include <iostream>
#include "Terminale.hpp"

extern double currency;

class Withdraw : public  Terminale{
public:
    void handle () override;

};


#endif //UNTITLED14_WITHDRAW_HPP
