#include <iostream>
using namespace std;

int main(){
    cout<<"Program Cek Tahun Kabisat (Masehi/Gregorian)"<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;
 
    int day, year;
 
    cout<<"Input Tahun : ";
    cin>>year;
 
    if (year%400==0){
        day=366;
        cout<<year<<" adalah Tahun Kabisat"<<endl;
        cout<<"Jumlah Hari : "<<day<<endl;
    }
    else if (year%100==0){
        day=365;
        cout<<year<<" bukan Tahun Kabisat"<<endl;
        cout<<"Jumlah Hari : "<<day<<endl;
    }
    else if (year%4==0){
        day=366;
        cout<<year<<" adalah Tahun Kabisat"<<endl;
        cout<<"Jumlah Hari : "<<day<<endl;
    }
    else{
        day=365;
        cout<<year<<" bukan Tahun Kabisat"<<endl;
        cout<<"Jumlah Hari : "<<day<<endl;
    }
  
    return 0;
}