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

int min_gondola(int (&weight)[], int n, int x){
    int gondolas = 0;
    sort(weight,weight+n);
    int first = 0, last = n-1;
    while(first <= last){
        int sum = weight[first] + weight[last];
        if(sum <= x){
            gondolas++;
            first++;
            last--;
        }
        else{
            gondolas++;
            last--;
        }
    }
    return gondolas;
}

int main(){
    kv();
    int n,x;
    cin>>n>>x;
    int weight[n];
    for (int i=0; i<n; i++){
        cin>>weight[i];
    }
    cout<<min_gondola(weight,n,x)<<endl;
}