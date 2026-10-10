#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long somatoriaDeCompras = 0, somatoriaDeVendas = 0, N, Q, compras, vendas, consulta;

    cin >> N;

    double sinalDeBalanceamento[N];

    for(long long i = 0; i < N; i++){

        cin >> compras >> vendas;

        somatoriaDeCompras  += compras;
        somatoriaDeVendas   += vendas;

        sinalDeBalanceamento[i] = (double) (somatoriaDeCompras - somatoriaDeVendas) / (double) (somatoriaDeCompras + somatoriaDeVendas);
    }

    cin >> Q;

    for(long long i = 0; i < Q; i++){
        cin >> consulta;

        if(sinalDeBalanceamento[consulta-1] > 0) cout << "COMPRA\n";
        else if(sinalDeBalanceamento[consulta-1] < 0) cout << "VENDA\n";
        else cout << "NEUTRO\n";

        cout << sinalDeBalanceamento[consulta-1] << '\n';
    }

    return 0;
}