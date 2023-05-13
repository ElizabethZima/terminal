#include <iostream>
#include <vector>
#include "includes/Terminale.hpp"
#include "includes/Deposite.hpp"
#include "includes/Withdraw.hpp"
#include "includes/Pay.hpp"

double currency;
std::vector<Terminale*> commands;

void Visitor(Terminale* terminal){
    terminal->handle();
}

void Menu(){
    using namespace std;
    cout << "Ballance: " << currency << endl;
    cout << "\nAvailable operations: \n";
    cout << "1. Deposite \n";
    if(currency >= 100) cout <<  "2. Withdrow\n";
    if(currency >= 50) cout << "3. Pay\n";
    cout <<"4. Exit \n";


}


int main() {
    using namespace std;

    cout << "Enter ballance:   ";
    cin >> currency;


    commands.push_back(new Deposite());
    if(currency >= 100) commands.push_back(new Withdraw());
    commands.push_back(new Pay());



    do{

        Menu();
        int command;
        cin >> command;

        if(command == 1 || command == 2 || command == 3) Visitor(commands[command - 1]);
        else return 0;

    }while(true);
}
