#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int solve(vector<int> &arr) {
    int result = arr.at(0);
    for(int i=1; i<arr.size(); i++) {
        result = result^arr.at(i);
    }
    return result;
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
    vector<int> arr;
    cin>>test;
    while(test--) {
        cin>>num;
        arr.push_back(num);
    }
    cout<<solve(arr)<<endl;
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}