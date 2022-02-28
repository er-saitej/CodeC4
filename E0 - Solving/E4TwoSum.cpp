#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> solve(vector<int> &nums, int target) {
    unordered_map<int, int> um;
    unordered_map<int, int> indexMap;
    vector<int> result;
    result.reserve(2);
    int index = 0;
    for(auto x: nums) {
        if(um.count(target-x)) {
            result.push_back(index);
            result.push_back(indexMap[target-x]);
            return result;
        }
        else {
            um[x] = target-x;
            indexMap[x] = index;
        }
        index++;
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
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(3);
    solve(nums, 6);
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}