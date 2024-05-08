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

#include <bits/stdc++.h>
using namespace std;

set<string> solve(string S){
    int N = S.length();
    sort(S.begin(), S.end());
    set<string> uniqueStrings;
    while (next_permutation(S.begin(), S.end())) {
        uniqueStrings.insert(S);
    }
    uniqueStrings.insert(S);
    return uniqueStrings;
}

int main(){
    kv();
    string S;
    cin>>S;
    set<string> uniqueStrings = solve(S);

    cout << uniqueStrings.size() << "\n";
    for (string str : uniqueStrings) {
        cout << str << "\n";
    }

    return 0;
}
