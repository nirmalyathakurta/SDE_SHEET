// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.
#include<bits/stdc++.h>
using namespace std;
 void setMatrix(vector<vector<int>>&matrix) {
    int col0 =1, rows=matrix.size(), cols= matrix[0].size();
    for(int i=0;i<rows;i++) {
        if(matrix[i][0]==0) col0=0;
        for(int j=1;j<cols;j++) {
            if(matrix[i][j]==0) matrix[i][0]=matrix[0][j]=0;
        }
    }
    for(int i=rows-1;i>=0;i--) {
        for(int j=cols-1;j>=1;j--) {
            if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
        }
        if(col0==0) matrix[i][0]=0;
    }
 }
 int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>matrix[i][j];
        }
    }
    setMatrix(matrix);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }