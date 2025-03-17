#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    vector <long long> v(n);
    for(long long i = 0; i < n; i++){
        cin>>v[i];
    }
    long long sum = accumulate(v.begin(), v.end(), 0LL);
    cout<<sum;
}

// #include <bits/stdc++.h>
// using namespace std;

// long long sum(const vector<long long>& v) {
//     return accumulate(v.begin(), v.end(), 0LL);
// }

// long long product(const vector<long long>& v) {
//     return accumulate(v.begin(), v.end(), 1LL, multiplies<long long>());
// }

// long long difference(const vector<long long>& v) {
//     if (v.empty()) return 0;
//     return accumulate(v.begin() + 1, v.end(), v[0], minus<long long>());
// }

// int main() {
//     vector<long long> v = {10, 2, 3, 4};

//     cout << "Sum: " << sum(v) << "\n";       
//     cout << "Product: " << product(v) << "\n"; 
//     cout << "Difference: " << difference(v) << "\n";
//     // Tính hiệu từ phần tử đầu tiên
//     int difference = accumulate(v.begin() + 1, v.end(), v[0], minus<int>());

//     cout << "Hieu: " << difference << endl;
// }
// Hàm accumulate() trong C++ được sử dụng để tính tổng của các phần tử trong một phạm vi hoặc một chuỗi.

// container.empty() 
// true (1) nếu container rỗng.
// false (0) nếu container có phần tử.