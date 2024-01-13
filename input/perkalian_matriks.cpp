#include <iostream>
using namespace std;

int main() {
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, k, m, n, jumlah = 0;

    cout << "Program Perkalian Matriks m x m" << endl;
    cout << "Masukkan jumlah Baris Matriks : ";
    cin >> m;
    cout << "Masukkan jumlah Kolom Matriks : ";
    cin >> n;

    if (n != m) {
        cout << "Matriks tidak dapat dikalikan satu sama lain." << endl;
    } else {
        cout << "Masukkan Elemen Matriks Pertama : " << endl;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                cin >> matriks1[i][j];
            }
        }

        cout << "Masukkan Elemen Matriks Kedua : " << endl;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                cin >> matriks2[i][j];
            }
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                for (k = 0; k < m; k++) {
                    jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }

        cout << "Hasil Perkalian Matriks : " << endl;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}
