#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    unordered_map<int, int> freq;
    
    cin >> n;
    while (n--) {
        cin >> x;
        freq[x]++;
    }

    for (const auto &p : freq) {
        if (p.second % 2 == 1) {
            cout << p.first << endl;
            break;
        }
    }
}

// khi nào không quan trọng thứ tự thì chơi unordered_map
// khi nào quan trọng thứ tự thì chơi map