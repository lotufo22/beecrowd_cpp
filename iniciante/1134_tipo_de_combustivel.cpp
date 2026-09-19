#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alcool = 0, gasolina = 0, diesel = 0;

    cout << "MUITO OBRIGADO" << endl;

    while(true){
        int n;
        
        cin >> n;

        while(n > 4){
            cin>> n;
        }

        switch(n){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
        }

        if(n == 4) break;
    }

    cout << "Alcool: " << alcool << endl; 
    cout << "Gasolina: " << gasolina << endl; 
    cout << "Diesel: " << diesel << endl; 

    return 0;
}