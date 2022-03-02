#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    int number, range;
    cin>>number>>range;
    int mask = 0;
    mask = ~mask;
    mask = mask<<range;
    cout<<(number&mask)<<endl;
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
