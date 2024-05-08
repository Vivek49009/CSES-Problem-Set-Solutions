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
#define mpp             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(t)            int t; cin>>t; while(t--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
  
 
void kv()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int main() {
    kv();
    ll t;
    cin >> t;

    while (t--) {
        ll r, c;
        cin >> r >> c;

        if (r > c) {
            if (r % 2 == 0)
                cout << r * r - (c - 1) << endl;
            else
                cout << (r - 1) * (r - 1) + 1 + c - 1 << endl;
        }
        else {
            if (c % 2 == 0)
                cout << (c - 1) * (c - 1) + 1 + r - 1 << endl;
            else
                cout << c * c - (r - 1) << endl;
        }
    }

    return 0;
}
