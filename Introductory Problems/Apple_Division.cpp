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
#define vll             vector<long long>
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

int n = 0;
vector<ll> apples;
ll minimal(int index, ll crate_blue, ll crate_orange)
{
    if (index == n)
        return abs(crate_blue - crate_orange);
    else
        return min(minimal(index + 1, crate_blue + apples[index], crate_orange),
                   minimal(index + 1, crate_blue, crate_orange + apples[index]));
}
int main()
{
    kv();
    cin >> n;
    for (int i = 0; i < n; i++){
        ll w = 0;
        cin >> w;
        apples.push_back(w);
    }
    ll m = minimal(0, 0, 0);
    cout << m;
}