#include "../includes/Withdraw.hpp"

void Withdraw::handle() {

    using namespace std;
    int money;
    cout << "Enter the amount " ;
    cin >> money;


    if( money <= currency) currency -= money;
    else{
        cout << "Insufficient funds. The operation cannot be performed. " << endl;
    }
}
