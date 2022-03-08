#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> result;
    unordered_map< int, vector<int> > map;
    result.reserve(2);
    int index = 0;
    for(int x: nums) {
        map[x].push_back(index);
        index++;
    }
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size()-1;
    while(left<right) {
        if((nums.at(left)+nums.at(right))<target) {
            left++;
        }
        else if((nums.at(left)+nums.at(right))>target) {
            right--;
        }
        else {
            break;
        }
    }
    if(nums.at(left)==nums.at(right)) {
        result.push_back(map[nums.at(left)].at(0));
        result.push_back(map[nums.at(right)].at(1));
    }
    else {
        result.push_back(map[nums.at(left)].at(0));
        result.push_back(map[nums.at(right)].at(0));
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
    result = twoSum(nums, target);
    for(auto x: result) {
        cout<<x<<endl;
    }
    return 0;
}