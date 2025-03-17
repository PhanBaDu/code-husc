#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cin >> x;

    double sum = 1.0; // Giá trị S ban đầu = 1
    double term = 1.0; // Biến lưu từng hạng tử
    int n = 1;

    while (abs(term) >= 1e-9) { // Kiểm tra điều kiện dừng
        term *= x / n; // Cập nhật term = x^n / n!
        sum += term;
        n++;
    }

    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}
