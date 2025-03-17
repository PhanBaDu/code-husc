#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cin >> x;

    double sin_x = sin(x);
    double log3_x =  log(3 * x) / log(4);
    double sqrt_log3_x = sqrt(log3_x);
    double ceil_exp = ceil(3*exp(x)); 

    double result = sin_x + sqrt_log3_x + ceil_exp;

    cout << fixed << setprecision(6) << result << endl; 
}
