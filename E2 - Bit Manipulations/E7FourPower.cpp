#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

bool solve() {
    int num;
    cin>>num;
    if((!(num&(num-1)))&&(num>0)) {
        int mask=1;
        while(mask<=num) {
            if((num&mask) == num) {
                return true;
            }
            mask = mask<<2;
        }
        return false;
    }
    return false;
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
    while(test--) cout<<solve();
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}