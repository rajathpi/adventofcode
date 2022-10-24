#include<bits/stdc++.h>
using namespace std;

int main(){
    int first = 0, second = 0, third = 0, count = 0, prev = INT_MAX;
    while(cin >> first) {
        if(first + second + third > prev) {
            count++;
        }
        if(second and third)prev = first + second + third;
        third = second;
        second = first;
    }
    cout << count;
}