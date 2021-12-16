// Given a string s, find the length of the longest substring without repeating characters.

#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int left = 0, right = 0; 
    set<char> st; 
    int n = s.length();
    int len = 0;
    while(right < n) {
        if(st.find(s[right]) != st.end()) {
            st.erase(s[left]);
            left++;
        } else {
            st.insert(s[right]); 
            len = max(len, right - left + 1); 
            right++; 
        }
    }
    return len; 
}
int main() {
    string s;
    getline(cin, s);
    cout << lengthOfLongestSubstring(s);
    return 0;
}