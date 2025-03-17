#include <bits/stdc++.h>
using namespace std;

string getGrade(double score) {
    if (score >= 8.5) return "A";
    if (score >= 8.0) return "B+";
    if (score >= 7.0) return "B";
    if (score >= 6.5) return "C+";
    if (score >= 5.5) return "C";
    if (score >= 5.0) return "D+";
    return "D";
}

int main() {
    int n;
    cin >> n;

    vector<double> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    for (int i = 0; i < n; i++) {
        cout << getGrade(scores[i]);
        if (i < n - 1) cout << " ";
    }
    cout << endl;
}