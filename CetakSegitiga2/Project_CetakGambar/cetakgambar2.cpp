#include <iostream>

using namespace std;

int main() {
    int tinggi, lebar, jarakSpasi;
    int pilihan;
    char karakter;

    cout << "Mencetak Segitiga" << endl;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    cout << "Masukkan angka 1 untuk karakter *, 2 untuk #, atau 3 untuk +: ";
    cin >> pilihan;

    if (pilihan == 1) {
        karakter = '*';
    }
    else if (pilihan == 2) {
        karakter = '#';
    }
    else if (pilihan == 3) {
        karakter = '+';
    }
    else {
        cout << "Pilihan tidak valid, menggunakan karakter * sebagai default" << endl;
        karakter = '*';
    }

    cout << "Masukkan jarak spasi dari kiri: ";
    cin >> jarakSpasi;

    cout << "Gambar segitiga" << endl;
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= jarakSpasi; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << karakter;
        }
        cout << endl;
    }

    return 0;
}
