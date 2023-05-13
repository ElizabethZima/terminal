#ifndef UNTITLED14_DEPOSITE_HPP
#define UNTITLED14_DEPOSITE_HPP
#include <iostream>
#include "Terminale.hpp"

extern double currency;

class Deposite: public Terminale {

public:

    void handle () override;

};


#endif //UNTITLED14_DEPOSITE_HPP
