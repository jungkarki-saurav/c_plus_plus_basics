#include<iostream>

using namespace std;

void showMenu() {
    cout << "********MENU********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. WithDraw" << endl;
    cout << "*************************";

}
int main(){
    //check balance, deposit, withdraw, show menu

    int option;
    showMenu();
    cout << "Option: ";
    cin >> option;

    return 0;
}