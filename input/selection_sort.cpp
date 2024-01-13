#include <iostream>
using namespace std;
 
int main(){
    int Nilai[20];
    int i,j,x,N,posisi,tampung;
    
    cout<<"Masukkan Banyak Bilangan : ";
    cin>>N;
    for(i=0; i<N; i++){
        cout<<"Elemen ke-"<<i<<" : ";
        cin>>Nilai[i];
    }
    
    cout<<"Sebelum Di Urutkan : ";
    for (int i=0; i<N; i++){
        cout<<Nilai[i]<<" ";
    }
    
    cout<<endl;
    cout<<endl;
    
    for (int i=0;i<N-1;++i){
        posisi=i;
        for (int j=i+1;j<N;++j){
            if (Nilai[j]<Nilai[posisi]){
                posisi=j;   
            }
        }
    
        if (posisi!=i){
            tampung=Nilai[posisi];
            Nilai[posisi]=Nilai[i];
            Nilai[i]=tampung;
        }
        
        cout<<"Tahap Ke-"<<i+1<<" : ";
        for (int x=0;x<N;++x){
            cout<<Nilai[x]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
  
    cout<<"Setelah Di Urutkan Menggunakan Metode Selection Sort : ";
    for (int i=0;i<N;++i){
        cout<<Nilai[i]<<" ";
    }
}
