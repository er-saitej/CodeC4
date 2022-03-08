#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> solve(vector<int> &nums, int target) {
    vector<int> result;
    if(nums.size()==2) {
        result.push_back(0);
        result.push_back(1);
        return result;
    }
    vector< pair<int, int> > v;
    int index = 0;
    for(auto x: nums) {
        v.push_back(pair<int, int>(x, index));
        index++;
    }
    sort(v.begin(), v.end());
    int left = 0;
    int right = v.size()-1;
    while(left<right) {
        if(v.at(left).first+v.at(right).first>target) {
            right--;
        }
        else if(v.at(left).first+v.at(right).first<target) {
            left++;
        }
        else {
            break;
        }
    }
    result.push_back(v.at(left).second);
    result.push_back(v.at(right).second);
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