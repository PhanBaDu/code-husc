# Bay be
```
map<int, string> myMap = {
  {3, "Three"}, {1, "One"}, {4, "Four"}, {2, "Two"}
};

auto minElement = *myMap.begin();
cout << "Min: " << minElement.first << " -> " << minElement.second;

auto maxElement = *myMap.rbegin();
cout << "Max: " << maxElement.first << " -> " << maxElement.second;
```
```
cout << fixed << setprecision(9) << area << endl;
cout<<(a <= b && h > a ? -1 : (h <= a ? 1 : (h - a + (a - b) - 1) / (a - b) + 1));

```
```
sort(v.begin(), v.end()); // Bé tới lớn
sort(v.rbegin(), v.rend()); // Lớn tới bé
```
```
accumulate(v.begin(), v.end(), 0LL); // tổng
accumulate(v.begin() + 1, v.end(), v[0], minus<long long>()); // trừ
accumulate(v.begin(), v.end(), 1LL, multiplies<long long>()); // nhân
accumulate(v.begin() + 1, v.end(), v[0], divides<long long>()); // chia
```
```
long long maxValue = *max_element(v.begin(), v.end());
long long countMax = count(v.begin(), v.end(), maxValue); // Đếm số lần xuất hiện của maxValue

long long count = count_if(v.begin(), v.end(), [](long long x) {
    return (x % 2 == 0) || (x < 0 && x % 3 == 0);
});
```
```
// Hàm distance(first, last) trong C++ được dùng để tính khoảng cách (số bước) giữa hai iterator.
// distance(first, last);

int maxPos = distance(v.begin(), max_element(v.begin(), v.end()));
int minPos = distance(v.begin(), min_element(v.begin(), v.end()));
```
```
unordered_set<int> lucky_numbers = {4, 7, 16, 28, 44, 47, 49, 64, 74, 77};

for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (lucky_numbers.count(num)) {
        count++;
    }
}
```
```
int dot_product = inner_product(A.begin(), A.end(), B.begin(), 0);
// Hàm inner_product() trong C++ được dùng để tính tích vô hướng (dot product) của hai dãy số. 
///Nó nằm trong thư viện <numeric>.
```
```
vector<int> numbers = {1, 7, 3, 5, 9, 2};
auto it = find(numbers.begin(), numbers.end(), 3);
if (it != numbers.end()) {
  cout << "The number 3 was found!";
} else {
  cout << "The number 3 was not found.";
}
```
```
#include <iostream>
#include <string>

int main() {
    string b = "Hello, this is a test string";
    string a = "test";

    size_t pos = b.find(a);
    if (pos != string::npos) {
        cout << "Found at index: " << pos << endl;
    } else {
        cout << "Not found" << endl;
    }
}
```
```
vector<string> cars;
cout << cars.empty() << "\n";

cars = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars.empty();
```
```
transform(b.begin(), b.end(), b.begin(), ::toupper);
transform(b.begin(), b.end(), b.begin(), ::tolower);

#include <bits/stdc++.h>
using namespace std;

string toTitleCase(string s) {
    bool capitalize = true;
    transform(s.begin(), s.end(), s.begin(), [&](char c) -> char {
        if (isspace(c)) {
            capitalize = true;
            return c;
        }
        if (capitalize) {
            capitalize = false;
            return toupper(c);
        }
        return tolower(c);
    });
    return s;
}

int main() {
    string b = "hello, this is a test string";
    cout << "Title Case: " << toTitleCase(b) << endl;
    return 0;
}
```


