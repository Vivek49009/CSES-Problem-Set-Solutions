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


vector<string> generateGrayCode(int n)
{
    if (n == 1)
    {
        return {"0", "1"};
    }

    vector<string> prevGrayCode = generateGrayCode(n - 1);
    vector<string> reversedPrevGrayCode = prevGrayCode;
    reverse(reversedPrevGrayCode.begin(), reversedPrevGrayCode.end());

    int prevSize = prevGrayCode.size();
    int index = 0;
    while (index < prevSize)
    {
        string appendedZero = "0" + prevGrayCode[index];
        prevGrayCode[index] = "1" + reversedPrevGrayCode[index];
        prevGrayCode.push_back(appendedZero);
        index++;
    }
    return prevGrayCode;
}

int main()
{
    kv();
    int n;
    cin >> n;

    vector<string> grayCode = generateGrayCode(n);
    for (auto code : grayCode)
        cout << code << endl;

    return 0;
}
