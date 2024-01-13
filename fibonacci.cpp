#include <iostream>
using namespace std;

int main(){
    int n, f1 = 0, f2 = 1, next = 0;
    cout<< "PROGRAM DERET BILANGAN FIBONACCI"<<endl;
    cout <<"Masukan Batas Deret Bilangan Fibonacci : ";
    cin >> n;
    cout << "Deret Fibonacci : ";

    for (int i = 1; i <= n; ++i){
        if(i == 1){
            cout << " " << f1 << " ";
            continue;
        }
        if(i == 2){
            cout << f2 << " ";
            continue;
        }
        next = f1 + f2;
        f1 = f2;
        f2 = next;
        cout << next << " ";
    }
    return 0;
}