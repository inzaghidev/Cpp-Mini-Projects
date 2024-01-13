#include <iostream>

using namespace::std;

int pangkatRekursif(int angka, int pangkat){
  if(pangkat==0)
    return 1;
  else
    return angka*pangkatRekursif(angka,(pangkat-1));
}

int main(){
  int angka,pangkat;
  cout<<"--------------------------------\n";
  cout<<"Program Pangkat Bilangan"<<endl;
  cout<<"--------------------------------\n";
  cout<<"Angka  : ";
  cin>>angka;
  cout<<"Pangkat : ";
  cin>>pangkat;
  cout<<"--------------- \n";
  cout<<"Hasil  : "<<pangkatRekursif(angka,pangkat);
  cout<<endl;
}