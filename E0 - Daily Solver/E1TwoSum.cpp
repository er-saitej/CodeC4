#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> solve(vector<int> &nums, int target) {
    vector<int> result;
    result.reserve(2);
    unordered_map< int, vector<int> > map;
    int index = 0;
    for(auto x: nums) {
        map[x].push_back(index);
        index++;
    }
    for(pair<int, vector<int> > x: map) {
        if(map.count(target-x.first)>0) {
            if(target-x.first!=x.first) {
                result.push_back(map[x.first].at(0));
                result.push_back(map[target-x.first].at(0));
            }
            else if(map[target-x.first].size()==2) {
                result.push_back(map[x.first].at(0));
                result.push_back(map[target-x.first].at(1));
            }   
            break;
        }
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
    vector<int> nums, result;
    int test, num, target;
    cin>>test;
    while(test--) {
        cin>>num;
        nums.push_back(num);
    }
    cin>>target;
    result = solve(nums, target);
    for(auto x: result) {
        cout<<x<<endl;
    }
    return 0;
}