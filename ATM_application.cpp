#include<iostream>

using namespace std;

void showMenu() {
    cout << "********MENU********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. WithDraw" << endl;
    cout << "4. Exit"<< endl;
    cout << "*************************" << endl;

}
int main(){
    //check balance, deposit, withdraw, show menu

    int option;
    double balance = 500;

    do{
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("cls");


    switch(option){
        case 1:
        cout << "The Balance is  " << balance << endl; break;

        case 2: 
        cout << "Deposit amount: ";
        double deposit;
        cin >> deposit;
        balance += deposit;
        break;

        case 3:
        cout << "WithDraw Amount: ";
        double withdraw;
        cin >> withdraw;

        if(withdraw <= balance){
        balance -= withdraw;
        }else{
            cout << "Not enough Money " << endl;
        }
        break;
    }

    }while(option != 4);

    return 0;
}