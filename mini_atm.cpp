#include <iostream>
using namespace std;

int main(){
    int balance = 10000;
    int choice, amount;

    do{
        cin >> choice;

        if(choice == 1){
            cout << balance;
        }
        else if(choice == 2){
            cin >> amount;
            if(amount > balance) cout << "Insufficient Balance";
            else{
                balance -= amount;
                cout << balance;
            }
        }
        else if(choice == 3){
            cin >> amount;
            balance += amount;
            cout << balance;
        }
        else if(choice == 4){
            break;
        }
    } while(true);
}
