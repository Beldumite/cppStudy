#include <iostream>

using namespace std;

int Tambah(int num1, int num2) {
    int hasil = num1 + num2;
    return hasil;
}

int main() {
    int num, num2;
    
    cout << "Enter First number: ";
    cin >> num;
    cout << "Enter Second number: ";
    cin >> num2;
    int sum = Tambah(num, num2);
    cout << "the sum is " << sum << endl;
  
    return 0;
}
