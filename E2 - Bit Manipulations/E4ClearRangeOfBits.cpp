#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    int number, lowerBit, upperBit;
    cin>>number>>lowerBit>>upperBit;
    int mask1 = ((~0)<<upperBit);
    int mask2 = 1;
    lowerBit = lowerBit-1;
    while(lowerBit--) {
        mask1 = mask1 | mask2;
        mask2 = mask2<<1;
    }
    cout<<(number&mask1)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test;
    cin>>test;
    while(test--) solve();
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}