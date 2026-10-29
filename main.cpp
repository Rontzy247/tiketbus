#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    cout << "===================================\n";
    cout << "       PROGRAM TIKET BUS\n";
    cout << "===================================\n";
    cout << "1. Malang - Surabaya : Rp35.000\n";
    cout << "2. Malang - Pasuruan : Rp20.000\n";
    cout << "3. Malang - Jombang  : Rp25.000\n";
    cout << "===================================\n";

    int pilihan;
    cout << "Pilih tujuan (1/2/3): ";
    cin >> pilihan;

    string tujuan;
    int harga;

    if (pilihan == 1) {
        tujuan = "Malang - Surabaya";
        harga = 35000;
    } else if (pilihan == 2) {
        tujuan = "Malang - Pasuruan";
        harga = 20000;
    } else if (pilihan == 3) {
        tujuan = "Malang - Jombang";
        harga = 25000;
    } else {
        cout << "Pilihan tidak tersedia!\n";
        return 0;
    }

    int jumlah;
    cout << "Masukkan jumlah penumpang: ";
    cin >> jumlah;

    int total = harga * jumlah;

    cout << "\n========== TIKET BUS ==========\n";
    cout << "Tujuan           : " << tujuan << "\n";
    cout << "Harga per tiket  : Rp " << harga << "\n";
    cout << "Jumlah penumpang : " << jumlah << "\n";
    cout << "Total pembayaran : Rp " << total << "\n";
    cout << "================================\n";
    cout << "Terima kasih telah memesan tiket!\n";

    return 0;
}
