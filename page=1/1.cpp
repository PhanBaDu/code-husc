#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6 + 5;  // Giới hạn tối đa cho số nguyên tố
bool isPrime[MAX_N];  // Mảng đánh dấu số nguyên tố

// Hàm sàng Eratosthenes để tiền xử lý số nguyên tố
void sieve() {
    memset(isPrime, true, sizeof(isPrime));  // Mặc định mọi số đều là số nguyên tố
    isPrime[0] = isPrime[1] = false;  // 0 và 1 không phải số nguyên tố

    for (int i = 2; i * i < MAX_N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();  // Tiền xử lý số nguyên tố

    long long n;
    cin >> n;

    long long a[n];  // Mảng chứa các số đầu vào
    long long kq = 0;

    for (long long i = 0; i < n; i++) {
        cin >> a[i];  // Nhập từng phần tử vào mảng
    }

    // Kiểm tra từng số trong mảng có phải số nguyên tố không
    for (long long i = 0; i < n; i++) {
        if (a[i] < MAX_N && isPrime[a[i]]) {
            kq++;
        }
    }

    cout << kq;
    return 0;
}
