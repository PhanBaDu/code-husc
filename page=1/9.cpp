#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, alpha;
    cin>>a>>b>>alpha;

    double pi = 3.14159;
    double x = alpha * pi/180.0;
    cout<<fixed<<setprecision(2)<<1/2.0 * a * b * sin(x);
}
