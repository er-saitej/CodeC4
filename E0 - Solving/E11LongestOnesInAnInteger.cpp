#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int n) {
    if(n<1) return 0;
    int maxCount = INT_MIN;
    int counter = 0;
    while(n>0) {
        if(n&1) {
            counter++;
        }
        else {
            if(counter>maxCount) maxCount = counter;
            counter = 0;
        }
        n = n>>1;
    }
    if(counter>maxCount) maxCount = counter;
    return maxCount;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num;
    cin>>test;
    while(test--) {
        cin>>num;
        cout<<solve(num)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}