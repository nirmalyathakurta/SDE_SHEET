/* Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int sum = 0;
    int maxi = INT_MIN; 
    for(auto it : nums) {
        sum += it;
        maxi = max(sum, maxi); 
        if(sum < 0) sum = 0;
    }
    cout<<maxi<<endl;
    return 0;
}