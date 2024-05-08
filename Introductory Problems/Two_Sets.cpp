#include<bits/stdc++.h>
using namespace std;

#define endl             '\n'
#define ff              first
#define ss              second
#define ll             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(t)            int t; cin>>t; while(t--)

  
 
void kv()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void TwoSets(ll n){
    ll total_sum = (1ll * n * (1ll * n + 1)) / 2;
    if (total_sum % 2 != 0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        vector<ll> set1, set2;
        vector<ll> vis(n + 1, 0);
        ll set1_sum = 0;
        ll max_element = n;
        while (set1_sum < total_sum / 2) {
            ll remaining_sum = total_sum / 2 - set1_sum;
            if (remaining_sum > max_element) {
                set1.push_back(max_element);
                vis[max_element] = 1;
                set1_sum += max_element;
                max_element--;
            }
            else {
                set1.push_back(remaining_sum);
                vis[remaining_sum] = 1;
                set1_sum = total_sum / 2;
            }
        }

        for (ll i = 1; i <= n; i++) {
            if (vis[i] == 0) {
                set2.push_back(i);
            }
        }

        cout << set1.size() << "\n";
        for (auto x : set1) {
            cout << x << " ";
        }
        cout << "\n";

        cout << set2.size() << "\n";
        for (auto x : set2) {
            cout << x << " ";
        }
    }
}


int main()
{
    kv();
    ll n;
    cin>>n;
    TwoSets(n);
}
