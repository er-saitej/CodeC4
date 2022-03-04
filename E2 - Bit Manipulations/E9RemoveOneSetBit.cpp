#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    int num;
    cin>>num;
    cout<<(num&num-1);
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test;
    cin>>test;
    while(test--) solve();
    return 0;
}