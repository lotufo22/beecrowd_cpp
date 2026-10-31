#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int E, D, diferenca = 0;

    cin >> E >> D;

    diferenca =  D - E;

    if(diferenca >= 3) cout << "Muito bem! Apresenta antes do Natal!\n";
    else if(diferenca > 0) {
        cout << "Parece o trabalho do meu filho!\n";

        D += 2;

        if(D <= 24) cout << "TCC Apresentado!\n";
        else cout << "Fail! Entao eh nataaaaal!\n";
    }
    else cout << "Eu odeio a professora!\n";

    return 0;
}