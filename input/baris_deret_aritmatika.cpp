#include <iostream>
using namespace std;
 
int main(){
    cout<<"Program Barisan Deret Aritmatika"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;
    
    int a,b,n,i,hasil;
    
    cout<<"Masukan Suku Awal : ";
    cin>>a;
    cout<<"Masukan Banyak Suku : ";
    cin>>n;
    cout<<"Masukan Beda : ";
    cin>>b;
    cout<<endl;

    cout<<"Barisan Aritmatika : "<<endl;
    for(i=0;i<n;i++){
    cout<<a+(i*b)<<" ";
    }
    cout<<"\nDeret Aritmatika : "<<(2*a+(n-1)*b)*n/2;

    return 0;
}