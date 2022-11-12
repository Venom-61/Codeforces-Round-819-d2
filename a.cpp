#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;
int tc;

// A. Minak And Array

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) 
        cin >> a[i];

    int ans = -1e9 + 7;
    // subarray contains a[n] and a[i]
    for(int i = 0; i < n; i++) {
        ans = max(ans, a[(i - 1 + n) % n] - a[i]);
    }
    // subarray doesn't contain a[n] 
    for(int i = 0; i < n - 1; i++) {
        ans = max(ans, a[n - 1] - a[i]);
    }
    // subarray doesn't contain a[0]
    for(int i = 1; i < n; i++) {
        ans = max(ans, a[i] - a[0]);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
