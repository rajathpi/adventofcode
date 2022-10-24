#include<bits/stdc++.h>
using namespace std;

int main(){
    int first = 0, second = 0, third = 0, count = 0, prev = INT_MAX;
    while(cin >> first) {
        if(first + second + third > prev) {
            count++;
        }
        //Is there a  way to still make it work without this if condition in line 11 without using more space than we already have?
        if(second and third)prev = first + second + third;
        third = second;
        second = first;
    }
    cout << count;
}
