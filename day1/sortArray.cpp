/* Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively. */

#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& nums) {
    int lo = 0; 
    int hi = nums.size() - 1; 
    int mid = 0; 

    while (mid <= hi) { 
        switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin>>nums[i];
    sortArray(nums);
    for (int i = 0; i < n; i++) cout<<nums[i]<<" ";
    return 0;
}