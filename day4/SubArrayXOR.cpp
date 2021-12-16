/* Given an array of integers A and an integer B.
Find the total number of subarrays having bitwise XOR of all elements equals to B. */

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, int B) {
    map<int, int> freq; 
    int cnt = 0;
    int xorr = 0; 
    for(auto &it: A) {
        xorr = xorr ^ it; 
        if(xorr == B) cnt++; 
        if(freq.find(xorr ^ B) != freq.end()) cnt += freq[xorr ^ B];         
        freq[xorr] += 1; 
     }
     return cnt; 
}
int main() {
    int n, B;
    cin>>n>>B;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    cout<<solve(A, B)<<endl;
    return 0;
}