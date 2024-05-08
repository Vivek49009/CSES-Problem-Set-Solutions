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

const int maxN = 2e5+1;

int N, x, a;
pii p[maxN];

int find(int val){
    int l = 1, r = N;
    while(l <= r){
        int m = l+(r-l)/2;
        if(p[m].first == val)       return p[m].second;
        else if(p[m].first < val)   l = m+1;
        else                        r = m-1;
    }
    return 0;
}

int main(){
    kv();
    cin >> N >> x;
    for(int i = 1; i <= N; i++){
        cin >> a;
        p[i] = {a, i};
    }
    sort(p+1, p+N+1);

    for(int i = 1; i <= N; i++){
        int other = find(x-p[i].first);
        if(other != 0 && other != p[i].second){
            cout << p[i].second << " " << other << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

