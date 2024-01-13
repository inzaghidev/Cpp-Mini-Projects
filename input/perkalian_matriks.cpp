#include <iostream>
using namespace std;

int main() {
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, k, m, n, p, q, jumlah = 0;
    
    cout<<"Masukkan jumlah Baris Matriks Pertama : ";
    cin>>m;
    cout<<"Masukkan jumlah Kolom Matriks Pertama : ";
    cin>>n;
    cout<<"Masukkan jumlah Baris Matriks Kedua : ";
    cin>>p;
    cout<<"Masukkan jumlah Kolom Matriks Kedua : ";
    cin>>q;
    
    if(n != p){
      cout<<"Matriks tidak dapat dikalikan satu sama lain.\n";
    } else {
        cout<<"Masukkan Elemen Matriks Pertama : \n";
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cin>>matriks1[i][j];
            }
        }

        cout<<"Masukkan Elemen Matriks Kedua : \n";
        for(i = 0; i < p; i++){
            for(j = 0; j < q; j++){
                cin>>matriks2[i][j];
            }
        }

        for(i = 0; i < m; i++){
            for(j = 0; j < q; j++){
                for(k = 0; k < p; k++){
                  jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }
        
        cout<<"Hasil Perkalian Matriks : \n";
        for(i = 0; i < m; i++){
            for(j = 0; j < q; j++){
                cout<<hasil[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    
    return 0;
}
 
