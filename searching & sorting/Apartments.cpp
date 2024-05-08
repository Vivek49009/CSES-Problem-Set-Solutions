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

int helper(vector<int>& desired_size, vector<int>& apartment_size, int k) {
    int n = desired_size.size();
    int m = apartment_size.size();
    sort(desired_size.begin(), desired_size.end());
    sort(apartment_size.begin(), apartment_size.end());
    int ptr1 = 0, ptr2 = 0;
    int ans = 0;
    while(ptr1 < n && ptr2 < m){
        if (desired_size[ptr1] + k < apartment_size[ptr2]) {
            // If the current apartment size is too large, move to the next desired size
            ptr1++;
        } else if (desired_size[ptr1] - k > apartment_size[ptr2]) {
            // If the current apartment size is too small, move to the next apartment size
            ptr2++;
        } else {
            // If the current apartment size is within the range of k, it is suitable
            ans++;
            ptr1++;
            ptr2++;
        }
    }
    return ans;
}


int main() {
    kv();
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> desired_size(n);
    vector<int> apartment_size(m);
    for (int i = 0; i < n; i++) {
        cin >> desired_size[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> apartment_size[i];
    }
    cout << helper(desired_size, apartment_size, k) << endl;
    return 0;
}
