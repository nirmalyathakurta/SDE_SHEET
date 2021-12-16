/* You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0 */

#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int maxPro = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    return maxPro;
}
int main() {
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) cin>>prices[i];
    cout<<maxProfit(prices)<<endl;
    return 0;
}