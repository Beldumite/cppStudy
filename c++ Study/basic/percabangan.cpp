#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 12;

    if (x < y){ //pembanding
        cout << x << " lebih kecil dari " << y << "\n"; 
    } else { // percabangan
        cout << x << " lebih besar dari " << y << "\n";
    }

    int a = 10;
    if (x == a && x < y) { //logika
        cout << "ga tahu mau ngetik apa";
    }else {
        cout << "sama";
    }
    
}