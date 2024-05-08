#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, ans = 0;
    cin >> n;
    ll x[n];
    for(ll i = 0; i<n; i++){
        cin>>x[i];
    }

    for(ll i = 1; i<n; i++){
        ll diff = x[i] - x[i-1];
        if(diff < 0){
            ans+=abs(diff);
            x[i] = x[i-1];
        }
    }
    cout<<ans<<endl;
    return 0;
}
