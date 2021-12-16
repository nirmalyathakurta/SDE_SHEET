/* Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array. */

#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for (auto num : nums) {
        if (count == 0) {
            candidate = num;
        }
        if(num==candidate) count += 1; 
        else count -= 1; 
    }

    return candidate;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];
    cout<<majorityElement(nums)<<endl;
}