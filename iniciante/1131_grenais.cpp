#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int empate = 0;
    int contador = 0;
    int inter = 0;
    int gremio = 0;
    int novo = 0;

    while(true) {
        int golInter, golGremio;
        cin >> golInter >> golGremio;

        if(golInter == golGremio) empate++;
        else if(golInter > golGremio) inter++;
        else gremio++;
        contador++;
        // 1 -sim | 2 - não
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> novo;
        
        if(novo == 2) break;
    }

    string vencedor = (inter > gremio) ? "Inter" : "Gremio";

    cout << contador << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;
    cout << vencedor << " venceu mais" << endl;

    return 0;
}