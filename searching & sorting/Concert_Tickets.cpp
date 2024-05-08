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

void solve(vector<int> &tickets, vector<int> &customer, int N, int M) {

    map<int, int> pendingTickets;
    for (int i = 0; i < N; i++) {
        pendingTickets[tickets[i]] += 1;
    }

    for (int i = 0; i < M; i++) {
        auto it = pendingTickets.upper_bound(customer[i]);
        if (it == pendingTickets.begin()) {
            cout << -1 << "\n";
        }
        else {
            it--;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                pendingTickets.erase(it);
        }
    }
}

int main() {
    kv();
    int N, M;
    cin >> N >> M;

    vector<int> tickets(N), customer(M);

    for (int i = 0; i < N; i++) {
        cin >> tickets[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> customer[i];
    }

    solve(tickets, customer, N, M);

    return 0;
}
