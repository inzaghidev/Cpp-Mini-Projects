#include <iostream>
using namespace std;

int main(){
    int n, l1 = 1, l2 = 3, next = 0;
    cout<< "PROGRAM DERET BILANGAN LUCAS"<<endl;
    cout <<"Masukan Batas Deret Bilangan Lucas : ";
    cin >> n;
    cout << "Deret Lucas : ";

    for (int i = 1; i <= n; ++i){
        if(i == 1){
            cout << " " << l1 << " ";
            continue;
        }
        if(i == 2){
            cout << l2 << " ";
            continue;
        }
        next = l1 + l2;
        l1 = l2;
        l2 = next;
        cout << next << " ";
    }
    return 0;
}