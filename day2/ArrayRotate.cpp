/* You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotatio */

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<vector<int>>& m) {
    int n = m.size();
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            swap(m[i][j], m[j][i]);
        }
    }
    for(int i=0; i<n; i++) reverse(m[i].begin(), m[i].end());
}
int main() {
    vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
    rotateArray(m);
    for(auto i: m) {
        for(auto j: i) cout << j << " ";
        cout << endl;
    }
    return 0;
}