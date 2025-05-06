#include <iostream>
using namespace std;

int main() {
    string frut[] = {"banana", "mango", "blubery"};
    float price[] = {3, 5, 1.5};
    int stock[] = {25, 12, 54};
    
    int choice1, quantity, total = 0;
    
    cout << "Welcome to Galih's Frut Shop" << endl;
    cout << "Here we have many fruts" << endl;
    cout << "1. " << frut[0] << " for " << price[0] << "$" << endl;
    cout << "2. " << frut[1] << " for " << price[1] << "$" << endl;
    cout << "3. " << frut[2] << " for " << price[2] << "$" << endl;
    cout << endl;
    cout << "What frut u want? (Enter number 1-3)" << endl;
    cin >> choice1;
    int choice = (choice1 - 1);
    
    if (choice > 2 || choice < 0){
        cout << "Invalid choice! No frut!" << endl;
        return 1;
    }
    else {
        cout << "You choose " << frut[choice] << endl;
        cout << "How many frut u want?" << endl;
        cin >> quantity;
        
        if (quantity > stock[choice]){
            cout << "Sory! not enoug frut :(" << endl;
            return 1;
        }
        else {
            total = quantity * price[choice];
            cout << "You've bought " << quantity << " " << frut[choice] << endl;
            cout << "With the price of " << total << "$" << endl;
            cout << "Thank you for buy frut here :3";
            return 0;
        }
    }

}