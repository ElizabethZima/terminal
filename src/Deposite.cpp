#include "../includes/Deposite.hpp"

void Deposite::handle() {
    using namespace std;
    int money;
    cout << "Enter the amount " ;
    cin >> money;

    if( money > 0) currency += money;

}