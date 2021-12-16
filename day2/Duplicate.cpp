/* Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space. */ 

#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0]; 
    do {
            slow = nums[slow]; 
            fast = nums[nums[fast]]; 
    } while(slow != fast); 
        
    fast = nums[0]; 
    while(slow != fast) {
        slow = nums[slow]; 
        fast = nums[fast]; 
    }
    return slow; 
}
int main() {
    vector<int> nums = {1,3,4,2,2};
    cout << findDuplicate(nums);
    return 0;
}