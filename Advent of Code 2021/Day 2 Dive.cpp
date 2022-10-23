#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    long long x = 0, y = 0;
    int n;
    while(cin >> s){
        cin >> n;
        if(s[0] == 'f') x += n;
        else if(s[0] == 'u') y -= n;
        else y += n;
    }
    cout << x*y;
}