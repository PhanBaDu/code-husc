#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map <string, int> m;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x % 2 == 0 ? "chan" : "le"]++;
        if (x == 0) continue;
        m[x < 0 ? "am" : "duong"]++;
    }

    cout<<m["am"]<<endl;
    cout<<m["duong"]<<endl;
    cout<<m["chan"]<<endl;
    cout<<m["le"]<<endl;
}