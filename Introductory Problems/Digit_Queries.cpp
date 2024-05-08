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

ll power(ll base, ll times) {
    ll ans = 1;
    while (times--) {
        ans *= base;
    }
    return ans; 
}

int main() {
    ll queries, k;
    cin >> queries;
    while (queries--) {
        cin >> k;
        ll n = 1, sum = 0;
        while (true) {
            sum += (9 * n * power(10, n - 1)); 
            n++;
            if (k < sum)
                break;
        }
        n--;

        ll away = (sum - k) / n;
        ll remainder = (sum - k) % n;
        ll number = (power(10, n) - 1) - away;

        string result = to_string(number);
        cout << result[result.length() - 1 - remainder] << endl;
    }
    return 0;
}

