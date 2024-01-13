#include<iostream>
using namespace std;

int main() {
    int angka1, angka2;
    bool hasil;
    cout <<"Masukan Angka Pertama : ";
    cin>>angka1;
    cout <<"Masukan Angka Kedua : ";
    cin>> angka2;
    
    hasil = angka1 & angka2;
    cout<<"a & b : "<<hasil<<endl;
    hasil = angka1 && angka2;
    cout<<"a && b : "<<hasil<<endl;
    hasil = angka1 | angka2;
    cout<<"a | b : "<<hasil<<endl;
    hasil = angka1 || angka2;
    cout<<"a || b : "<<hasil<<endl;
    hasil = angka1 ^ angka2;
    cout<<"a ^ b : "<<hasil<<endl;
}