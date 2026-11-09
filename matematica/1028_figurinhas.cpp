#include<bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    return mdc(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        int a = 0;
        int b = 0;
        int result = 0;

        cin >> a >> b;
        result = mdc(a, b);

        cout << result << endl;
    }

    return 0;
}