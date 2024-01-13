#include <iostream>
using namespace std;

int main(){
    cout<<"    Program Mencetak Tanda Bintang   "<<endl;
    cout<<"====================================="<<endl;
    cout<<"              Opsi Menu              "<<endl;
    cout<<"1. Persegi Bintang                   "<<endl;
    cout<<"2. Persegi Panjang Bintang           "<<endl;
    cout<<"3. Segitiga Bintang                  "<<endl;
    cout<<"4. Segitiga Bintang Terbalik         "<<endl;
    cout<<"5. Piramida Bintang                  "<<endl;
    cout<<"6. Piramida Bintang Terbalik         "<<endl;
    cout<<"====================================="<<endl;
    cout<<endl;
    int opsi, n, m, i, j, k;
    cout<<"Pilih Opsi : ";
    cin>>opsi;
    
    if (opsi==1){
        cout<<"\n1. Persegi Bintang"<<endl;
        cout<<"Masukkan Jumlah Persegi : ";
        cin>>n;
        cout<<endl;
         
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                cout<<" *";
            }
            cout<<endl;
        }
    }
    else if (opsi==2){
        cout<<"\n2. Persegi Panjang Bintang"<<endl;
        cout<<"Input Tinggi Persegi : ";
        cin>>n;
        cout<<"Input Lebar Persegi : ";
        cin>>m;
        cout<<endl;
        
        for(i=1; i<=n; i++) {
            for(j=1; j<=m; j++) {
              cout << " *";
            }
            cout<<endl;
        }
    }
    else if (opsi==3){
        cout<<"\n3. Segitiga Bintang"<<endl;
        cout<<"Masukkan Tinggi Segitiga : ";
        cin>>n;
        cout << endl;
         
        for(i=1; i<=n; i++) {
            for(j=1; j<=i; j++) {
              cout << " *";
            }
        cout<<endl;
        }
    }
    else if (opsi==4){
        cout<<"\n4. Segitiga Bintang Terbalik"<<endl;
        cout<<"Masukkan Tinggi Segitiga : ";
        cin>>n;
        cout << endl;
         
        for(i = 0; i<n; i++) {
            for(j = 1; j<=n-i; j++) {
              cout << " *";
            }
        cout<<endl;
        }
    }
    else if (opsi==5){
        cout<<"\n5. Piramida Bintang"<<endl;
        cout<<"Masukkan Tinggi Piramida : ";
        cin>>n;
        cout << endl;
         
        for(i=1; i<=n; i++) {
         
            for(j=1; j<=n-i; j++) {
              cout << " ";
            }
         
            for(k=1; k<=i; k++) {
              cout << " *";
            }
            cout << endl;
        }
    }
    else if (opsi==6){
        cout<<"\n6. Piramida Bintang Terbalik"<<endl;
        cout<<"Masukkan Tinggi Piramida : ";
        cin>>n;
        cout << endl;
         
        for(i=0; i<n; i++) {
         
            for(j=1; j<=i; j++) {
              cout << " ";
            }
         
            for(k=1; k<=n-i; k++) {
              cout << " *";
            }
            cout << endl;
        }
    }
    else{
        cout<<"Invalid"<<endl;
    }
    
    return 0;
}