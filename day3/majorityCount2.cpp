/* Given an array of N integers. Find the elements that appears more than N/3 times in the array. If no such element exists, return an empty vector. */

#include<bits/stdc++.h>
using namespace std;
vector < int > majorityElement(int arr[], int n) {
  unordered_map < int, int > mp;
  vector < int > ans;

  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }

  for (auto x: mp) {
    if (x.second > (n / 3))
      ans.push_back(x.first);
  }

  return ans;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> ans=majorityElement(arr,n);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}