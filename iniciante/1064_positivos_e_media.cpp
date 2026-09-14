#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int valores_positivos = 0;
    double total = 0;

    for(int i = 0; i < 6; i++){
        double n;

        cin >> n;

        if(n >= 0){
            valores_positivos++;
            total += n;
        }
    }

    cout << valores_positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << total / valores_positivos << endl;

    return 0;
}