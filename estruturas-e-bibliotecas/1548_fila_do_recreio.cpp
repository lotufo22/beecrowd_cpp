#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    while(n-- > 0){

        int alunos = 0;
        cin >> alunos;

        vector<int> listaOrdenada;
        
        for(int i = 0; i < alunos; i++){
            int value;
            cin >> value;
            listaOrdenada.push_back(value);
        }

        vector<int> lista = listaOrdenada;
        sort(listaOrdenada.rbegin(), listaOrdenada.rend()); 

        int count = 0;

        for(int i = 0; i < lista.size(); i++){
            if(lista[i] != listaOrdenada[i]) count++;
        }

        cout << alunos - count << endl;
    }

    return 0;
}