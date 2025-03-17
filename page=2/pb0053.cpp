#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i : v) {
        int x = sqrt(i);

        if (x * x == i) {
            count++;
        }
    }

    cout<<count;
}
