#include <iostream>
using namespace std;

int ack(int m, int n){
    if (m == 0){
        return n + 1;
    }
    else if((m > 0) && (n == 0)){
        return ack(m - 1, 1);
    }
    else if((m > 0) && (n > 0)){
        return ack(m - 1, ack(m, n - 1));
    }
    else {
        return ack(m, n);
    }
}

int main(){
    int x, y, A;
    
    cout<<"Ackermann Function A(x, y)"<<endl;
    cout<<"Insert value of x : ";
    cin>>x;
    cout<<"Insert value of y : ";
    cin>>y;

    A = ack(x, y);

    cout<<"A("<<x<<", "<<y<<") = "<<A<<endl; 

    return 0;
}