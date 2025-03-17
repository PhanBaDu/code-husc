#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    long long B; // Dùng long long để tránh tràn số với |x| ≤ 10^5
    
    if (x > 3) {
        B = 1LL * x * x * x + 2LL * x * x + 5LL * x;
    } else if (x >= 1 && x <= 3) {
        B = 1LL * x * x - 2LL * x + 4;
    } else {
        B = 5LL * x - 8;
    }
    
    cout << B << endl;
    
    return 0;
}
