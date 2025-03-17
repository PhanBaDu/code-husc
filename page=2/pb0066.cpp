#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());

    for (const auto &i : v) {
        cout<<i<<" ";
    }
}


// Hàm inner_product() trong C++ được dùng để tính tích vô hướng (dot product) của hai dãy số. Nó nằm trong thư viện <numeric>.

// Cú pháp:
// cpp
// Sao chép
// Chỉnh sửa
// #include <numeric>
// int inner_product(InputIt1 first1, InputIt1 last1, InputIt2 first2, T init);
// first1, last1: Dãy số đầu tiên.
// first2: Dãy số thứ hai (phải cùng độ dài với dãy đầu).
// init: Giá trị khởi tạo (thường là 0).