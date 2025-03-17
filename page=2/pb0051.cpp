#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, h;
    cin>>h>>a>>b;

    cout<<(a <= b && h > a ? -1 : (h <= a ? 1 : (h - a + (a - b) - 1) / (a - b) + 1));
}