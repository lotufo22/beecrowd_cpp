#include<bits/stdc++.h>
using namespace std;

int fatorial(int n){
    if(n == 0) return 1;
    else return n * fatorial(n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;

    cin >> n;
    
    cout << fatorial(n) << endl;

    return 0;
}