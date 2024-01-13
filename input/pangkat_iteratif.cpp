#include <iostream>
using namespace std;

int main () {
    cout<<"--------------------------------"<<endl;
    cout<<"    Program Pangkat Bilangan    "<<endl;
    cout<<"--------------------------------"<<endl;
    
    int hasil = 1; 
    int angka, pangkat;
    
    cout<<"Angka    : ";
    cin>>angka;
    cout<<"Pangkat  : ";
    cin>>pangkat;
    
    for(int i=1;i<=pangkat;i++){ 
    hasil=hasil*angka;
    }
    
    cout<<"Hasil : "<<hasil<<endl;
}
