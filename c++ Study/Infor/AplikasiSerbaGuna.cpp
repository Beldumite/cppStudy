#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void introduce() {
    cout << "=== WELCOME ===\n";
    cout << "Nama: Muhammad Azka Ainur Rofiq dari X - RPL\n";
    cout << "Tanggal : 14/03/2025";
    cout << "Aplikasi Serba Guna\n";
}

void menu() {
    cout << "=== Sistem Sederhana ===\n";
    cout << "1. Kalkulator\n";
    cout << "2. Konversi Suhu\n";
    cout << "3. Game Tebak Angka\n";
    cout << "4. Kasir Sederhana\n";
    cout << "6. Keluar\n";
    cout << "Pilih opsi (1-6): ";
}


int cinValidation() {
    int num;
    while (!(cin >> num)) {
        cout << "Please enter a valid number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

void cashier() {
    double totalDiskon, totalBayar;
    double totalHarga = 0;
    double persentaseDiskon = 5;
    int pilihan, jumlah;
    string produk[] = {"Pikachu's Plush", "Bulbasaur's Plush", "Charmander's Plush", "Squirtle's Plush", "Eevee's Plush"};
    double harga[] = {90000, 70000, 80000, 70000, 75000};

    cout << "==== Selamat datang di Toko Pokemon's Plush =====" << "\n" << "Berikut Produk dari kami: " << endl;
    for (int i = 0; i < std::size(produk); i++) {
        cout << i + 1 << ". " << produk[i] << " - Rp " << harga[i] << "\n";
      };
    cout << "Untuk order silahkan Ketik 1 - " << std::size(produk) << ", jika sudah ketik 0 untuk selesai" << endl;

    while (true) {
        cout << "Masukkan Pilihan: ";
        pilihan = cinValidation();

        if (pilihan == 0) {
            break;
        };

        if (pilihan < 1 || pilihan > std::size(produk)) {
            cout << "Pilih angka valid" << endl;
            continue;
        };

        cout << "Mau beli " << produk[pilihan - 1] << " Berapa banyak? ";

        jumlah = cinValidation();
        
        totalHarga += harga[pilihan - 1] * jumlah;  
    };

    cout << "Selamat anda mendapatkan diskon sebesar : " << persentaseDiskon << "%" << endl;

    totalDiskon = persentaseDiskon/100.0 * totalHarga;
    totalBayar = totalHarga - totalDiskon;

    cout << "=== Struk Pembayaran ===" << endl;
    cout << "Total Belanja: " << "Rp " << totalHarga << endl;
    cout << "Total Diskon: " << "Rp " << totalDiskon << endl;
    cout << "Total yang harus dibayar: " << "Rp " << totalBayar << "\n" << endl;
};

void calc() {
    double num1, num2;
    char op;

    cout << "=== Silakan memakai kalkulator ===\n";
    cout << "Masukkan angka 1: ";

    num1 = cinValidation();
    cout << "Masukkan Operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Masukkan angka 2: ";

    num2 = cinValidation();
    
    switch (op) {
    case '+' :
        cout << "Hasil: " << num1 + num2 << "\n" << endl;
        break;
    case '-' :
        cout << "Hasil: " << num1 - num2 << "\n" << endl;
        break;
    case '*' :
        cout << "Hasil: " << num1 * num2 << "\n" << endl;
        break;
    case '/' :
        if(num2 != 0) {
            cout << "Hasil: " << num1 / num2 << "\n" << endl;
            break;
        } else {
            cout << "Error, pembagian dengan 0\n";
            break;
        } 
        
    default:
        cout << "Operator yang dipakai hanya bisa yang aritmatika\n";
    }
    
}

void temp() {
    int choice;
    double suhu, hasil;

    cout << "=== Konversi Suhu: ===\n";
    cout << "1. Celsius ke Fahrenheit\n";
    cout << "2. Fahrenheit ke Celsius\n";
    cout << "Pilih opsi (1/2): ";
    choice = cinValidation();

    switch (choice)
    {
    case 1:
        cout << "Masukkan Temp dalam format Celcius: ";
        suhu = cinValidation();
        hasil = (suhu * 9/5) + 32;
        cout << suhu << " Celcius adalah " << hasil << " Fahrenheit\n\n"; 
        break;
    case 2:
        cout << "Masukkan Temp dalam format Fahrenheit: ";
        suhu = cinValidation();
        hasil = (suhu - 32) * 5/9;
        cout << suhu << " Fahrenheit adalah " << hasil << " Celcius\n\n";
        break;
    
    default:
        cout << "invalid choice";
        break;
    }
}

void game() {
    srand(time(0));
    int mysteryNum, playerChoices, tries;
    tries = 0;

    mysteryNum = rand() % 101;

    cout << "=== Selamat Datang di Game Tebak Angka ===\n";
    cout << "Game dimana anda menebak angka dari 1-100\n";
    cout << "Ayo Kita Mulai\n";
    do {
        cout << "Masukkan tebakan: ";
        playerChoices = cinValidation();
        tries ++;
        
        if (playerChoices > mysteryNum) {
            cout << "Terlalu Besar\n";
        } else if (playerChoices < mysteryNum) {
            cout << "Terlalu Kecil\n";
        } else {
            cout << "=== Selamat ===\n anda telah berhasil menebak angka misterinya yaitu " << mysteryNum << " dengan percobaan sebanyak " << tries << " kali\n\n";
        }
    } while (playerChoices != mysteryNum);
}

int main() {
    int choice;
    introduce();
    do {
        menu();
        choice = cinValidation();
        switch (choice) {
            case 1:
                calc();
                break;
            case 2:
                temp();
                break;
            case 3:
                game();
                break;
            case 4:
                cashier();
                break;
            default:
                if (choice == 6) {
                 cout << "Berhasil keluar";
                } else {
                    cout << "Pilihan mu ga valid" << endl;
                }
                break;
                
                
            }
    } while (choice != 6  );
    
}

