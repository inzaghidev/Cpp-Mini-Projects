#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {
  int Nilai[20];
  int i, j, N;
  int temp, awal, akhir, tengah, Bilangan;
  
  cout<<"Program Binary Search"<<endl;
  cout<<"Banyak Bilangan : ";
  cin>>N;
  for(i=0; i<N; i++) {
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai[i];
  }
  cout<<"Elemen Sebelum diurut : ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai[i];
  
  for(i=0; i<N-1; i++) {
    for(j=i+1; j<N; i++) {
      if (Nilai[i] > Nilai[j]){
        temp = Nilai[i];
        Nilai[i] = Nilai[j];
        Nilai[j] = temp;
      }
    }
  }
  cout<<"Elemen Setelah diurut : ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai[i];
    cout<<"indeks Elemen : ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<i;
    cout<<"Masukkan data yang akan anda cari : ";
    cin>>Bilangan;
  
  awal = 0;
  akhir = N-1;
  do {
    tengah = (akhir + awal)/2;
    if(Bilangan < Nilai[tengah])
      akhir = tengah - 1;
    else
      awal = tengah + 1;
  }
  while((akhir >= awal) && (Nilai[tengah] !=Bilangan));
  if(Nilai[tengah] == Bilangan) {
    cout<<"Data "<<Bilangan<<" ada dalam array";
    cout<<" pada posisi "<<tengah;
  }
  else
    cout<<"Data "<<Bilangan<<" tidak ada dalam array";
  getch();
}
