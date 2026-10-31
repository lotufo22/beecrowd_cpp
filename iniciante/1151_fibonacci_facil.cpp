#include<bits/stdc++.h>

using namespace std;

long long limit = 0;

void fibonacci(long valor, long anterior){

    if(limit != 0){
        long long novoValor = valor+anterior;

        limit--;

        cout << " " << novoValor;

        fibonacci(novoValor, valor);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> limit;

    if(limit == 1){
        cout << "0\n";
        return 0;
    }

    cout << "0 1";
    limit -= 2;

    fibonacci(1, 0);
    cout << endl;

    return 0;
}