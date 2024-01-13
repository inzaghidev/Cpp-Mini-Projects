#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int Nilai[20];
    int i, N, Bilangan;
    bool ketemu;
   
    cout<<"Program Sequential Search     "<<endl;
    cout<<"                              "<<endl;
    cout<<"Masukkan Banyaknya Bilangan : ";
    cin>>N;
      
    for(i=0; i<N; i++){
        cout<<"Masukkan Elemen ke-"<<i<<" : ";
        cin>>Nilai[i];
    }
      
    cout<<"Deretan Bilangan : ";
    for(i=0; i<N; i++)
    cout<<Nilai[i]<<" ";
    
    cout<<"                                      "<<endl;
    cout<<"Masukkan Bilangan yang akan Dicari : ";
    cin>>Bilangan;
      
    i=0;
    do
    {
        if(Nilai[i]==Bilangan)
        ketemu = true;
        i++;
    }
    while(!(ketemu));
      
    if(ketemu)
        cout<<"Bilangan "<<Bilangan<<" ditemukan";
    else
        cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
    getch();
}