#include <bits/stdc++.h>
using namespace std;

int main() {
    string b = "Hello, this is a test string";
    transform(b.begin(), b.end(), b.begin(), ::towlower);
    cout<< b << endl;
}