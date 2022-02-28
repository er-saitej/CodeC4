#include<bits/stdc++.h>
#include<math.h>
#include<queue>
#define int long long int
#define endl "\n"
using namespace std;

bool solve(int x) {
    if(x<0) return false;
    int length = log10(x)+1;
    int half = length/2;
    int i = half-1;
    int r;
    int result = 0;
    while(length--) {
        r = x%10;
        x = x/10;
        result = result + pow(10, i)*r;
        i = i-1;
        if(length == half) break;
    }
    if(result == x) return true;
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
    cout<<solve(2147483648-1);
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}