/* Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time. */
 #include<bits/stdc++.h>
 using namespace std;
 int longestConsecutive(vector<int>& nums) {
    set<int> hashSet; 
    for (auto &num : nums) {
        hashSet.insert(num); //Hashset can be defined as an unordered collection that consists of unique elements.
    }

    int longestStreak = 0;

    for (int num : nums) {
        if (!hashSet.count(num-1)) {
            int currentNum = num;
            int currentStreak = 1;

            while (hashSet.count(currentNum+1)) {
                currentNum += 1;
                currentStreak += 1;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}
int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums);
    return 0;
}