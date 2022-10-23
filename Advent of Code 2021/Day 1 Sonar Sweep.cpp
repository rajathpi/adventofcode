#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, prev = INT_MAX, ans = 0;
    while(cin >> n){
        if(n > prev) ans++;
        prev = n;
    }
    cout << ans;
}