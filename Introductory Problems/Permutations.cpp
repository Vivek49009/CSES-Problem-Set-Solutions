#include <bits/stdc++.h>
using namespace std;

void permutation(int n){
    if(n==2 || n==3){
        cout<<"NO SOLUTION\n";
        return;
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }

        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
}

/*Consider when n is 4 correct output would be 2 4 1 3
whereas when I print odd numbers before even numbers 
then my output would be 1 3 2 4
except this case all are fine, therefore print even pehle then odd*/

int main(){
    int n;
    cin>>n;
    permutation(n);
}