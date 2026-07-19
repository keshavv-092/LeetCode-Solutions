// Problem : best-time-to-buy-and-sell-stock  
// Leectode : https://leetcode.com/problems/best-time-to-buy-and-sell-stock
//Difficulty : Easy
// Status : Accepted
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxProfit = 0;
        for(int i:prices){
            mini = min(mini , i);
            maxProfit = max(maxProfit , i - mini);
        }
        return maxProfit;
    }
};