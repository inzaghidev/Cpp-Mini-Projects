#include <iostream>
using namespace std;

int main(){
	int pil,batas;

    cout<<"-----------------------------------"<<endl;
    cout<<"Program Deret Bilangan Ganjil Genap"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Pilihan :                          "<<endl;
    cout<<"1. Ganjil                          "<<endl;
    cout<<"2. Genap                           "<<endl;
    cout<<"-----------------------------------"<<endl;
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	cout<<"Masukan Batas   : ";
	cin>>batas;
	cout<<endl;

	if (pil == 1){
		cout<<"Deret Bilangan Ganjil"<<endl;
		for(int i=1;i<=batas;i++){
		if (i%2!=0)
		cout<<i<<" ";
	    }
	}
	else if (pil == 2){
		cout<<"Deret Bilangan Genap"<<endl;
		for(int i=1;i<=batas;i++){
		if (i%2==0)
		cout<<i<<" ";
	    }
    }
    else {
        cout<<"Invalid"<<endl;
    }
}