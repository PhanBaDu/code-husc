#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;


    vector <double> v(n);

    for (auto &i : v) {
        cin>>i;
    }

    sort(v.begin(), v.end(), greater<double>());

    double ans = 0.0;
    for (int i = 0; i < m; i++) {
        ans += v[i];
    }

    cout << fixed << setprecision(2) << ans << endl;
}

// 1️⃣ for (auto i : v) – Duyệt bằng bản sao
// cpp
// Sao chép
// Chỉnh sửa
// vector<int> v = {1, 2, 3, 4, 5};

// for (auto i : v) {  // i là một bản sao của từng phần tử trong v
//     cout << i << " ";
// }
// Đặc điểm:
// i là một bản sao (copy) của từng phần tử trong v.
// Mỗi phần tử được sao chép vào biến i, nên thay đổi i không ảnh hưởng đến phần tử gốc trong v.
// Tốn thêm bộ nhớ, nhất là khi v chứa kiểu dữ liệu lớn (ví dụ: std::string, std::vector).
// ✅ Ví dụ minh họa:

// cpp
// Sao chép
// Chỉnh sửa
// vector<int> v = {1, 2, 3, 4, 5};

// for (auto i : v) {
//     i = i * 2;  // Chỉ thay đổi giá trị của i, không ảnh hưởng đến v
// }

// for (auto x : v) {
//     cout << x << " ";  // Output: 1 2 3 4 5 (vẫn giữ nguyên)
// }
// 2️⃣ for (const auto &i : v) – Duyệt bằng tham chiếu hằng (const reference)
// cpp
// Sao chép
// Chỉnh sửa
// vector<int> v = {1, 2, 3, 4, 5};

// for (const auto &i : v) {  // i là một tham chiếu hằng, không thể thay đổi giá trị của phần tử gốc
//     cout << i << " ";
// }
// Đặc điểm:
// i là một tham chiếu hằng (const reference) đến từng phần tử trong v, không tạo bản sao.
// Không tốn thêm bộ nhớ vì không tạo bản sao.
// Không thể thay đổi giá trị của phần tử trong v.
// ⛔ Ví dụ sai (gây lỗi biên dịch):

// cpp
// Sao chép
// Chỉnh sửa
// for (const auto &i : v) {
//     i = i * 2;  // ❌ Lỗi: i là tham chiếu hằng, không thể thay đổi giá trị
// }
// ✅ Dùng khi nào?

// Khi chỉ đọc dữ liệu, không cần thay đổi giá trị.
// Khi container có phần tử kích thước lớn, ví dụ: std::string, std::vector<int>.
// 🚀 Ví dụ với std::string (tốn bộ nhớ nếu không dùng &):

// cpp
// Sao chép
// Chỉnh sửa
// vector<string> names = {"Alice", "Bob", "Charlie"};

// // Tốn bộ nhớ vì mỗi phần tử bị sao chép
// for (auto name : names) {  
//     cout << name << " ";
// }

// // Tối ưu hơn, không tạo bản sao
// for (const auto &name : names) {  
//     cout << name << " ";
// }

// Trong C++, có nhiều cách duyệt qua mảng, vector, set, map và các container khác. Dưới đây là tất cả các kiểu duyệt vòng lặp trong C++.

// 🔹 1. Duyệt bằng chỉ số (Index-based Loop)
// Dùng khi bạn cần truy cập phần tử theo chỉ số.

// cpp
// Sao chép
// Chỉnh sửa
// vector<int> v = {10, 20, 30, 40, 50};

// for (size_t i = 0; i < v.size(); i++) {
//     cout << v[i] << " ";
// }
// 📌 Ưu điểm: Có thể truy cập phần tử theo chỉ số.
// 📌 Nhược điểm: Không dùng được với set, unordered_set, map (vì chúng không có chỉ mục).

// 🔹 2. Duyệt bằng vòng lặp for-each (Range-based for)
// Cách đơn giản nhất để duyệt qua vector, array, set, map, v.v.

// cpp
// Sao chép
// Chỉnh sửa
// vector<int> v = {10, 20, 30, 40, 50};

// for (auto i : v) {
//     cout << i << " ";
// }
// 📌 Ưu điểm: Dễ đọc, ngắn gọn.
// 📌 Nhược điểm: Không chỉnh sửa được giá trị trong container.

// 🛠 Duyệt với tham chiếu & để chỉnh sửa giá trị
// cpp
// Sao chép
// Chỉnh sửa
// for (auto &i : v) {
//     i *= 2;  // Nhân đôi giá trị các phần tử
// }
// 🔹 3. Duyệt bằng iterator (dùng .begin() và .end())
// Dùng được với mọi container như vector, set, map, unordered_map, v.v.

// cpp
// Sao chép
// Chỉnh sửa
// vector<int> v = {10, 20, 30, 40, 50};

// for (auto it = v.begin(); it != v.end(); it++) {
//     cout << *it << " ";
// }
// 📌 Ưu điểm: Dùng được với tất cả container, bao gồm set và map.
// 📌 Nhược điểm: Dài dòng hơn for-each.

// 🛠 Duyệt với reverse_iterator
// cpp
// Sao chép
// Chỉnh sửa
// for (auto it = v.rbegin(); it != v.rend(); it++) {
//     cout << *it << " ";
// }
// 📌 Lợi ích: Duyệt ngược từ cuối lên đầu.

// 🔹 4. Duyệt bằng while với iterator
// cpp
// Sao chép
// Chỉnh sửa
// vector<int> v = {10, 20, 30, 40, 50};
// auto it = v.begin();

// while (it != v.end()) {
//     cout << *it << " ";
//     it++;
// }
// 📌 Ưu điểm: Linh hoạt, có thể dùng với nhiều điều kiện hơn.
// 📌 Nhược điểm: Dài dòng hơn for.

// 🔹 5. Duyệt map (Dùng .first và .second)
// Vì map lưu key-value nên ta cần iterator hoặc for-each.

// cpp
// Sao chép
// Chỉnh sửa
// map<string, int> mp = {{"Alice", 10}, {"Bob", 20}, {"Charlie", 30}};

// for (auto it = mp.begin(); it != mp.end(); it++) {
//     cout << it->first << " " << it->second << endl;
// }
// 🛠 Duyệt map ngắn gọn hơn:
// cpp
// Sao chép
// Chỉnh sửa
// for (auto &[key, value] : mp) {
//     cout << key << " " << value << endl;
// }
// 🔹 6. Duyệt unordered_map
// Tương tự map, nhưng không có thứ tự.

// cpp
// Sao chép
// Chỉnh sửa
// unordered_map<int, string> umap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

// for (auto &[key, value] : umap) {
//     cout << key << " -> " << value << endl;
// }
// 🔹 7. Duyệt set và unordered_set
// Không thể dùng chỉ số nên phải dùng iterator hoặc for-each.

// cpp
// Sao chép
// Chỉnh sửa
// set<int> s = {10, 20, 30, 40, 50};

// for (auto it = s.begin(); it != s.end(); it++) {
//     cout << *it << " ";
// }
// Hoặc dùng for-each:

// cpp
// Sao chép
// Chỉnh sửa
// for (auto i : s) {
//     cout << i << " ";
// }
// 🔹 8. Duyệt deque
// Giống vector, nhưng có thể thêm/xóa phần tử ở cả đầu và cuối.

// cpp
// Sao chép
// Chỉnh sửa
// deque<int> dq = {10, 20, 30, 40, 50};

// for (auto i : dq) {
//     cout << i << " ";
// }
// 🔹 9. Duyệt list (danh sách liên kết)
// Chỉ có thể dùng iterator hoặc for-each.

// cpp
// Sao chép
// Chỉnh sửa
// list<int> lst = {10, 20, 30, 40, 50};

// for (auto it = lst.begin(); it != lst.end(); it++) {
//     cout << *it << " ";
// }
// 🔹 10. Duyệt priority_queue (hàng đợi ưu tiên)
// Không thể duyệt trực tiếp vì priority_queue không hỗ trợ iterator.
// Ta phải dùng vòng lặp while để pop từng phần tử.

// cpp
// Sao chép
// Chỉnh sửa
// priority_queue<int> pq;
// pq.push(30);
// pq.push(10);
// pq.push(50);
// pq.push(40);

// while (!pq.empty()) {
//     cout << pq.top() << " ";  // Lấy phần tử lớn nhất
//     pq.pop();
// }
// 📌 Lưu ý: priority_queue mặc định là heap max (phần tử lớn nhất luôn ở đầu).

// 🚀 Tóm tắt
// Kiểu container	Duyệt bằng for-each	Duyệt bằng for	Duyệt bằng iterator
// vector	✅	✅	✅
// array	✅	✅	✅
// deque	✅	✅	✅
// list	✅	❌	✅
// set	✅	❌	✅
// unordered_set	✅	❌	✅
// map	✅	❌	✅
// unordered_map	✅	❌	✅
// priority_queue	❌	❌	❌ (chỉ dùng while)


// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> v = {10, 20, 30};
    
//     for (int i = v.size() - 1; i >= 0; i--) {  // ❌ Sai: v.size() trả về size_t, ép về int có thể gây lỗi
//         std::cout << v[i] << " ";
//     }

//     return 0;

// for (size_t i = v.size(); i-- > 0; ) {  // ✅ Cách đúng
//     std::cout << v[i] << " ";
// }