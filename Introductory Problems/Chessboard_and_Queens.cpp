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

#include <iostream>
using namespace std;

const int N = 8;

char c;
int ans;
bool b[N][N], input[N][N];

bool place(int x, int y) {
    bool yes = true;
    for (int i = 0; i < N; i++)
        if (b[x][i] || b[i][y])
            yes = false;
    for (int i = 0; x - i >= 0 && y - i >= 0; i++)
        if (b[x - i][y - i])
            yes = false;
    for (int i = 0; x - i >= 0 && y + i < N; i++)
        if (b[x - i][y + i])
            yes = false;
    return yes;
}

bool check() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (b[i][j] && input[i][j])
                return false;
    return true;
}

void dfs(int i) {
    if (i == N) {
        if (check())
            ans++;
        return;
    }
    for (int j = 0; j < N; j++) {
        if (place(i, j)) {
            b[i][j] = true;
            dfs(i + 1);
            b[i][j] = false;
        }
    }
}

int main() {
    kv();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> c;
            input[i][j] = (c == '*');
        }
    }
    dfs(0);
    cout << ans << endl;
    return 0;
}
