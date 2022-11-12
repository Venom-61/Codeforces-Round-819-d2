#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;

// B. Mainak and Interesting Sequence 

void solve() {
    int n, m;
    cin >> n >> m;
    if(n > m) {
        cout << "NO\n";
        return ;
    }

    if(n % 2 != 0) {
        cout << "YES\n";
        for(int i = 1; i <= n-1; i++) {
            cout << 1 << " ";
        }
        cout << m - n + 1 << "\n";
    } else {
        if(m % 2 == 0) {
            cout << "YES\n";
            for(int i = 1; i <= n-2; i++) {
                cout << 1 << " ";
            }
            cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
