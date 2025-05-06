#include <iostream>

using namespace std;


int main() {
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
        cin >> pilihan;

        if (pilihan == 0) {
            break;
        };

        if (pilihan < 1 || pilihan > std::size(produk)) {
            cout << "Pilih angka valid" << endl;
            continue;
        };

        cout << "Mau beli " << produk[pilihan - 1] << " Berapa banyak? ";
        cin >> jumlah;
        
        totalHarga += harga[pilihan - 1] * jumlah;  
    };

    cout << "Selamat anda mendapatkan diskon sebesar : " << persentaseDiskon << "%" << endl;

    totalDiskon = persentaseDiskon/100.0 * totalHarga;
    totalBayar = totalHarga - totalDiskon;

    cout << "=== Struk Pembayaran ===" << endl;
    cout << "Total Belanja: " << "Rp " << totalHarga << endl;
    cout << "Total Diskon: " << "Rp " << totalDiskon << endl;
    cout << "Total yang harus dibayar: " << "Rp " << totalBayar << endl;
    return 0;
    
};

//so thetask is to 

// int main() {
//     int hargaProduk = 75000;
//     int persentaseDiskon = 5;
//     double totalDiskon = persentaseDiskon/100.0 * hargaProduk;
//     cout << "Potongan Harga: " << "Rp" << totalDiskon << endl;
//     cout << "Total Harga: " << "Rp" << hargaProduk - totalDiskon << endl;
// }
