#include "../includes/Pay.hpp"


void Pay::handle() {

    using namespace std;

    do{
        PaymentMenu();

        int command;
        cin >> command;

        switch (command) {
            case 1:
                if(Payment()) cout << "Your mobile account has been successfully replenished\n";

                break;
            case 2:
                if(Payment()) cout << "The bill is paid\n";
                break;
            case 3:
                command = -1;
                break;

            default:
                exit(0);


        }
        if(command == -1) break;

    }while(true);
}

void PaymentMenu() {
    using namespace std;
    cout << "Balance " << currency << endl;
    cout << "What do you want to pay? \n";
    cout << "1. Pay Mobile communication\n";
    cout << "2. Pay Utilities\n";
    cout << "3. Return to the home screen\n";
    cout << "4. Exit\n";

}

int Payment() {
    using namespace std;

    int money;
    cout << "Enter the amount " ;
    cin >> money;
    if( money <= currency) {
        currency -= money;
        return 1;
    }

    else{
        cout << "Insufficient funds. The operation cannot be performed. \n" << endl;

        return 0;
    }
}


