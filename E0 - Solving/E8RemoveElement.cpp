#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int solve(vector<int> &nums, int val) {
    vector<int>::iterator it=nums.begin();
    for(int i=0; i<nums.size(); i++) {
        if(nums.at(i)==val) nums.erase(it+i);
    }
    for(int i=0; i<nums.size(); i++) {
        if(nums.at(i)==val) nums.erase(it+i);
    }
    return nums.size();
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    // nums.push_back(3);
    // nums.push_back(0);
    // nums.push_back(4);
    // nums.push_back(2);
    cout<<solve(nums, 3)<<endl;
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}