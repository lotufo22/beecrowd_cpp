#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c, media;

    // a = 2
    // b = 3
    // c = 5

    cin >> a >> b >> c;

    media = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;

    return 0;
}