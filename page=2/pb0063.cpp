#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> lucky_numbers = {4, 7, 16, 28, 44, 47, 49, 64, 74, 77};

    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (lucky_numbers.count(num)) {
            count++;
        }
    }

    cout << count << endl;
}
// Giải thích:
// Dùng unordered_set<int> để lưu danh sách số siêu may mắn → tra cứu nhanh O(1).
// Duyệt n số nhập vào, kiểm tra xem có trong lucky_numbers không.
// In ra tổng số lần xuất hiện của các số siêu may mắn.
// ⏳ Độ phức tạp: O(n)
// 💡 Ưu điểm: Chạy nhanh ngay cả với n = 10^5 vì chỉ duyệt qua danh sách một lần.

// Bạn thử chạy code này xem có đúng không nhé! 🚀

// 2️⃣ count(x) dùng để làm gì?
// Trong unordered_set<int>, count(x) trả về 1 nếu x tồn tại và trả về 0 nếu x không tồn tại.
// Vì unordered_set không chứa phần tử trùng lặp, nên count(x) chỉ có thể trả về 0 hoặc 1.


// 1️⃣ insert(x): Thêm phần tử vào unordered_set
// Nếu x đã tồn tại, nó không bị thêm vào (vì unordered_set không chứa phần tử trùng lặp).
// Ví dụ:

// cpp
// Sao chép
// Chỉnh sửa
// unordered_set<int> us;
// us.insert(10);
// us.insert(20);
// us.insert(10);  // Không bị thêm vào nữa

// cout << us.size();  // Output: 2


// 2️⃣ erase(x): Xóa phần tử x nếu có
// Nếu x có trong unordered_set, nó sẽ bị xóa.
// Nếu x không tồn tại, tập hợp không thay đổi.
// Ví dụ:

// cpp
// Sao chép
// Chỉnh sửa
// unordered_set<int> us = {1, 2, 3, 4, 5};
// us.erase(3);  // Xóa số 3 khỏi tập hợp
// us.erase(10); // Không có số 10, nên không có gì thay đổi

// cout << us.size();  // Output: 4



// 3️⃣ find(x): Kiểm tra xem x có tồn tại không
// Trả về iterator trỏ đến x nếu x có trong tập hợp.
// Trả về us.end() nếu x không tồn tại.
// Ví dụ:

// cpp
// Sao chép
// Chỉnh sửa
// unordered_set<int> us = {10, 20, 30};

// if (us.find(20) != us.end()) {
//     cout << "20 có trong tập hợp\n";
// } else {
//     cout << "20 không có trong tập hợp\n";
// }

// 4️⃣ size(): Trả về số phần tử trong unordered_set
// cpp
// Sao chép
// Chỉnh sửa
// unordered_set<int> us = {10, 20, 30};
// cout << us.size();  // Output: 3
// 5️⃣ clear(): Xóa toàn bộ phần tử trong unordered_set
// cpp
// Sao chép
// Chỉnh sửa
// unordered_set<int> us = {1, 2, 3, 4, 5};
// us.clear();
// cout << us.size();  // Output: 0
// 6️⃣ empty(): Kiểm tra unordered_set có rỗng không
// cpp
// Sao chép
// Chỉnh sửa
// unordered_set<int> us;
// if (us.empty()) {
//     cout << "Tập hợp rỗng\n";
// }
// 7️⃣ begin() và end(): Lặp qua các phần tử trong unordered_set
// cpp
// Sao chép
// Chỉnh sửa
// unordered_set<int> us = {10, 20, 30};
// for (auto it = us.begin(); it != us.end(); ++it) {
//     cout << *it << " ";
// }