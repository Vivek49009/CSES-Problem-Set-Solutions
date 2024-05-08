#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long num, n, ans;
    cin >> n;
    ans = (1LL * n * (n + 1)) / 2;
    for (int i = 1; i < n; i++) {
        cin >> num;
        ans -= num;
    }
    cout << ans << endl;
    return 0;
}
