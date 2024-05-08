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

void moveDisk(int diskNumber, vector<vector<int>>& moves,
              int sourceStack, int destinationStack,
              int auxiliaryStack)
{
    if (diskNumber == 1) {
        moves.push_back({ sourceStack, destinationStack });
        return;
    }

    moveDisk(diskNumber - 1, moves, sourceStack,
             auxiliaryStack, destinationStack);

    moves.push_back({ sourceStack, destinationStack });

    moveDisk(diskNumber - 1, moves, auxiliaryStack,
             destinationStack, sourceStack);
}

void towerOfHanoi(int numberOfDisks)
{
    vector<vector<int>> moves;
    int sourceStack = 1, destinationStack = 3,
        auxiliaryStack = 2;
    moveDisk(numberOfDisks, moves, sourceStack,
             destinationStack, auxiliaryStack);

    cout << moves.size() << "\n";

    for (auto move : moves) {
        cout << move[0] << " " << move[1] << "\n";
    }
}

int main()
{
    kv();
    int numberOfDisks;
    cin >> numberOfDisks;
    towerOfHanoi(numberOfDisks);
    return 0;
}
