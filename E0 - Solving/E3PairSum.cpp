#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    unordered_map<int, int> ump;
    int test, num, target;
    cin>>test;
    cin>>target;
    while(test--) {
        cin>>num;
        ump[num] = target - num;
    }
    for(pair<int, int> x: ump) {
        if(ump.count(x.second)) {
            cout<<x.first<<" "<<x.second;
        }
        cout<<endl;
    }
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