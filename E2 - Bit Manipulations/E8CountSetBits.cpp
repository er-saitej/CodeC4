#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int effSolve(int n) {
    // to remove 1 setbit, we perform n&(n-1). We use the same to calculate number of setbits. Takes less than log(n) time.
    int counter = 0;
    while(n>0) {
        n = n&(n-1);
        counter++;
    }
    return counter;
}

int solve(int n) {
    int counter=0;
    while(n>0) { // Takes log(n) time since if number is n, it contains mostly log(n) 1's in it
        if(n&1) counter++;
        n = n>>1;
    }
    return counter;
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
        cout<<effSolve(num)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}