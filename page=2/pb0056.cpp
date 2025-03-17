#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    vector <long long> v(n);
    for(long long i = 0; i < n; i++){
        cin>>v[i];
    }
    long long maxValue = *max_element(v.begin(), v.end());
    long long countMax = count(v.begin(), v.end(), maxValue); 
    long long sum = accumulate(v.begin(), v.end(), 0LL);
    cout<<sum - (maxValue * countMax);
}

// max_element(v.begin(), v.end()) trả về iterator trỏ đến phần tử lớn nhất.
// *max_element(...) giúp lấy giá trị tại iterator đó. // Đếm số lần xuất hiện của maxValue
// long long countMax = count(v.begin(), v.end(), maxValue);  // Đếm số lần xuất hiện của maxValue