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

string solve(string S)
{
    int N = S.length();
    string ans(N, ' ');
    int freq[26] = {};
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'A'] += 1;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            cnt += 1;
        }
    }


    if (cnt > 1)
        return "NO SOLUTION";

    int left = 0, right = N - 1;
    for (int i = 0; i < N; i++) {
        if (freq[S[i] - 'A'] % 2 == 1) {
            ans[N / 2] = S[i];
            freq[S[i] - 'A'] -= 1;
        }
        while (freq[S[i] - 'A'] > 0) {
            ans[left++] = ans[right--] = S[i];
            freq[S[i] - 'A'] -= 2;
        }
    }
    return ans;
}

int main(){
    string S;
    cin>>S;
    cout << solve(S) << endl;
    return 0;
}
