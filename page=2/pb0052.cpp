#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, p, m;
    cin >> n >> p >> m;
    
    cout << int(ceil(log(m / n) / log(1 + p / 100)));
}
