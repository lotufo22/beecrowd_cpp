#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            // int quadrado = pow(i, 2);
            cout << i << "^2 = " << fixed << setprecision(0) << pow(i, 2) << endl;
        }
        else continue;
    }

    return 0;
}