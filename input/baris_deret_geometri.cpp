#include <iostream>
#include <cmath> // Untuk fungsi pow()
using namespace std;

int main(){
    cout << "Program Barisan & Deret Geometri" << endl;
    cout << "================================" << endl;
    cout << endl;

    double a, r, Sn;
    int n;
    
    // Input nilai awal, rasio, dan banyaknya suku
    cout << "Masukkan Suku Awal (a) : ";
    cin >> a;
    cout << "Masukkan Rasio (r) : ";
    cin >> r;
    cout << "Masukkan Banyak Suku (n) : ";
    cin >> n;
    cout << endl;

    // Menampilkan Barisan Geometri
    cout << "Barisan Geometri:" << endl;
    for(int i = 0; i < n; i++){
        double Un = a * pow(r, i); // Menghitung suku ke-i (U_n)
        cout << Un << " ";
    }

    // Menghitung Jumlah Deret Geometri
    if(r != 1){
        Sn = a * (1 - pow(r, n)) / (1 - r);
    }
    else{
        Sn = a * n;
    }

    cout << endl;
    cout << "Deret Geometri (Jumlah S_n): " << Sn << endl;

    return 0;
}