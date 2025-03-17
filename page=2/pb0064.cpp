#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int &x : a) cin >> x;

    double mean = accumulate(a.begin(), a.end(), 0.0) / n;

    sort(a.begin(), a.end());
    double median = (n % 2 == 1) ? a[n / 2] : (a[n / 2 - 1] + a[n / 2]) / 2.0;

    cout << fixed << setprecision(6) << mean << endl;
    cout << fixed << setprecision(6) << median << endl;
}
