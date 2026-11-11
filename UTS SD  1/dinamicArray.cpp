#include <iostream>
using namespace std;

int main() {
    int array[2][3][4];

    int angka = 2;

    // Mengisi array
    for (int i = 0; i < 2; i++) { /// buat lapis
        for (int j = 0; j < 3; j++) { // buat baris
            for (int k = 0; k < 4; k++) { // buat kolom
                array[i][j][k] = angka; // tampil
                angka += 2;
            }
        }
    }

    // Menampilkan kembali isi array
    for (int i = 0; i < 2; i++) {
        cout << "Lapis " << i + 1 << endl;

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << array[i][j][k] << "\t";
            }
            cout << endl;
        }

        cout << endl;
    }

     for (int j = 0; j < 3; j++) {
        int total = 0; // Reset total setiap baris

        for (int k = 0; k < 4; k++) {
            total += angka[j][k];
        }

        cout << "Hasil Penjumlahan Lapis 1 dan lapis 2 : " << j + 1
             << ": " << total << endl;
    }

    return 0;
}