#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int ptv, death, recov, act, out;
  
  cout<<"Program menghitung Data Kasus COVID-19"<<endl;
  cout<<"Kasus Terkonfirmasi Positif : ";
  cin>>ptv;
  cout<<"Kasus Kematian : ";
  cin>>death;
  cout<<"Kasus Kesembuhan : ";
  cin>>recov;
  cout<<endl;
  
  out=death+recov;
  act=ptv-out;
  
  cout<<"==== Data Kasus COVID-19 ===="<<endl;
  cout<<"Kasus Positif    : "<<ptv<<endl;
  cout<<"Kasus Kematian   : "<<death<<endl;
  cout<<"Kasus Pulih      : "<<recov<<endl;
  cout<<"Kasus Aktif      : "<<act<<endl;
  cout<<"Kasus Pasif      : "<<out<<endl;
  cout<<"============================="<<endl;

return 0;
}