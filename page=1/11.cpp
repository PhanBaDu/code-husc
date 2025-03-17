#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x;
    cin >> x;
    
    double C;
    
    if (x > 0) {
        C = (x * x + sqrt(x) + 1);
    } else {
        if (x == -3) {
            cout << "Div by zero" << endl;
            return 0;
        }
        C = (x * x * x + 2 * x + 1) / (x + 3);
    }
    
    cout << fixed << setprecision(6) << C << endl;
    
    return 0;
}
