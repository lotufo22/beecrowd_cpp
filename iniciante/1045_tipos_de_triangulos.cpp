#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double A, B, C, maior, quadrado, soma, somaPow;

    cin >> A >> B >> C;

    vector<double> valores = {A, B, C};
    sort(valores.rbegin(), valores.rend());

    A = valores[0];
    B = valores[1];
    C = valores[2];

    quadrado = pow(A, 2);
    somaPow = pow(B, 2) + pow(C, 2);

    if(A >= B + C) cout << "NAO FORMA TRIANGULO\n";
    else{
        if(quadrado == somaPow) cout << "TRIANGULO RETANGULO\n";
        else if(quadrado > somaPow) cout << "TRIANGULO OBTUSANGULO\n";
        else if(quadrado < somaPow) cout << "TRIANGULO ACUTANGULO\n";
        
        if(A == B && B == C) cout << "TRIANGULO EQUILATERO\n";
        else if(A == B || B == C) cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}