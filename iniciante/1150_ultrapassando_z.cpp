#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x=0, z=0;

    cin >> x;

    while(z <= x){
        cin >> z;
    }

    int count = 1;
    int temp = x;

    while(temp < z){
        x++;
        temp += x;
        count++;
    }

    cout << count << endl;
    return 0;
}