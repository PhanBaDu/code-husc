#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> sorted_a = a;
    sort(sorted_a.rbegin(), sorted_a.rend());
    
    map<int, int> rank_map;
    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (rank_map.find(sorted_a[i]) == rank_map.end()) {
            rank_map[sorted_a[i]] = rank;
        }
        rank++;
    }

    for (int x : a) {
        cout << rank_map[x] << endl;
    }
}

// if (rank_map.find(sorted_a[i]) == rank_map.end()) { tìm thấy trả về false nếu không tìm thấy trả về true

// rbegin() và rend() trong C++
// Trong C++, rbegin() và rend() là hai hàm dùng để lấy iterator ngược của một container như vector, map, deque, v.v.

// rbegin() (reverse begin) trỏ đến phần tử cuối cùng của container.
// rend() (reverse end) trỏ đến vị trí trước phần tử đầu tiên của container.
// 💡 Hiểu đơn giản: Nếu begin() duyệt từ trái → phải, thì rbegin() duyệt từ phải → trái.

// if (rank_map.find(sorted_a[i]) == rank_map.end()) {
//     rank_map[sorted_a[i]] = rank;
// }
// rank++;

// => Dễ hiểu là, nếu thằng nào tồn trong map mà nó tìm được thì
// nó sẽ ra false và nó sẽ không thêm vào map nữa, còn nếu không tìm được thì nó sẽ thêm vào map và tăng rank lên 1