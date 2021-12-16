/* Given an array of integers nums[] and an integer target, return indices of the two numbers such that their sum is equal to the target. */

#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {

   	 if (mp.find(target - nums[i]) != mp.end()) {

   		res.emplace_back(i);
   		res.emplace_back(mp[target - nums[i]]); // emplace_back inserts a new element at the end of the vector
   		return res;
   	 }

   	 mp[nums[i]] = i;
    }

    return res;
}
int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> res = twoSum(nums, target);
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    return 0;
}