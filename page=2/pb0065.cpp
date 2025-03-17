#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    
    for (int &x : A) cin >> x;
    for (int &x : B) cin >> x;

    int dot_product = inner_product(A.begin(), A.end(), B.begin(), 0);
    
    cout << (dot_product == 0 ? "Yes" : "No") << endl;
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