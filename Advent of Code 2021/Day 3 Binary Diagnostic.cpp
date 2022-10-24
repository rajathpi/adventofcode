#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count = 0;
    vector<int> a(12);
    while(cin >> s){
        for(int i = 0; i < 12; i++){
            if(s[i] == '1')
                a[i]++;
        }
        count++;
    }
    string x,y;
    for(auto i:a){
        x += (i > count-i) ? "1" : "0";
        y += (i > count-i) ? "0" : "1";
    }
    int q,w;
    q = stoi(x,0,2);
    w = stoi(y,0,2);
    cout << q*w;
}