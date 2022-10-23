#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int x, horizontal = 0, depth = 0, aim = 0;
    while(cin >> s){
        cin >> x;
        if(s == "forward") {
            horizontal  += x;
            depth += aim * x;
        } else if(s == "down") {
            aim += x;
        } else {
            aim -= x;
        }
    }
    cout << horizontal *  depth;
}