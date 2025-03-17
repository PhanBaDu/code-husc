#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    vector<long long> v(n);
    for (long long &x : v) cin>>x;

    long long count = count_if(v.begin(), v.end(), [](long long x) {
        return (x % 2 == 0) || (x < 0 && x % 3 == 0);
    });

    cout<<count;
}
// Giải thích:
// Sử dụng vector<int> v(n);

// Dùng vector để lưu danh sách số nguyên đầu vào.
// Duyệt v bằng for (int &x : v) cin >> x;

// Gọn gàng hơn so với for (int i = 0; i < n; i++).
// Dùng count_if(v.begin(), v.end(), lambda function)

// count_if đếm số phần tử trong v thỏa mãn điều kiện.
// Lambda function [](int x) { return (x % 2 == 0) || (x < 0 && x % 3 == 0); }:
// x % 2 == 0: Kiểm tra số chẵn.
// x < 0 && x % 3 == 0: Kiểm tra số âm chia hết cho 3.
// Kết quả

// Chỉ cần in count ra.