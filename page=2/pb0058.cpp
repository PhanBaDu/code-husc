#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &x : v) cin >> x;

    int maxPos = distance(v.begin(), max_element(v.begin(), v.end()));
    int minPos = distance(v.begin(), min_element(v.begin(), v.end()));

    cout << abs(maxPos - minPos) << endl;
}

// Tìm vị trí phần tử lớn nhất và nhỏ nhất
// int maxPos = distance(v.begin(), max_element(v.begin(), v.end()));
// int minPos = distance(v.begin(), min_element(v.begin(), v.end()));
// Hàm distance(first, last) trong C++ được dùng để tính khoảng cách (số bước) giữa hai iterator.
// distance(first, last);
// ✔ Trả về số phần tử giữa first và last.
// ✔ Áp dụng trên iterator của vector, list, map,...

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 30, 40, 50};

//     auto it1 = v.begin();     // iterator trỏ đến phần tử đầu tiên (10)
//     auto it2 = v.begin() + 3; // iterator trỏ đến phần tử thứ 4 (40)

//     cout << "Khoảng cách: " << distance(it1, it2) << endl; // Output: 3
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 7, 3, 9, 2};

//     auto itMax = max_element(v.begin(), v.end()); // Tìm iterator của phần tử lớn nhất

//     int pos = distance(v.begin(), itMax); // Tính vị trí của phần tử lớn nhất

//     cout << "Phần tử lớn nhất ở vị trí: " << pos << endl; // Output: 3 (vì 9 ở vị trí thứ 3)
// }

// 🔥 Khi nào nên dùng distance?
// ✅ Khi muốn tính khoảng cách giữa hai iterator.
// ✅ Khi tìm vị trí của một phần tử trong vector, set, map,...
// ✅ Khi làm việc với thuật toán STL (max_element, find,...)