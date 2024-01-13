#include <iostream>
#include <conio.h> 
using namespace std;

void prosesPerpindahan(int data[],int y){
    int x;
    for(x=0;x<y;x++){
        cout<<data[x]<<" ";
    }
    cout<<endl;
}

void prosesSorting(int data[],int y){
    int proses,x,tampung;
 
    for(proses=1;proses<y;proses++){
        for(x=0;x<y-proses;x++) {
            if(data[x]>data[x+1]){
                tampung=data[x];
                data[x]=data[x+1];
                data[x+1]=tampung;
            }
        }
    cout<<"Tahap Ke-"<<proses<<" : ";
    prosesPerpindahan(data,y);
    }
}

int main(){
    int Nilai[20];
    int i, N;
    cout<<"Masukkan Banyak Bilangan : ";
    cin>>N;
    for(i=0; i<N; i++){
        cout<<"Elemen ke-"<<i+1<<" : ";
        cin>>Nilai[i];
    }
    
    cout<<"\nProses Sorting dengan metode Bubble Sort : "<<endl;
    prosesSorting(Nilai,N);
    
    cout<<endl;
    cout<<"Setelah Di Urutkan dengan Bubble Sort : "<<endl;
    prosesPerpindahan(Nilai,N);
}
