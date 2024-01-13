#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    float R, theta;
    cout<<"Program Vektor dalam Fisika"<<endl;
    cout<<"Masukkan nilai A : ";
    cin>>a;
    cout<<"Masukkan nilai B : ";
    cin>>b;

    cout<<"\nResultan Dua Vektor Sejajar"<<endl;
    R = abs(a+b);
    cout<<"R = |"<<a<<"+"<<b<<"| = "<<R<<endl;

    cout<<"\nResultan Dua Vektor yang Saling Tegak Lurus"<<endl;
    R = sqrt(a*a+b*b);
    theta = atan(b/a);
    cout<<"R = sqrt("<<a<<"^2+"<<b<<"^2) = "<<R<<endl;
    cout<<"tan(θ) = "<<b<<"/"<<a<<", θ = tan^-1("<<b<<"/"<<a<<") = "<<theta<<"°"<<endl;

    return 0;
}
