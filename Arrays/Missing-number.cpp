// Problem : Missing Number
// Leectode : https://leetcode.com/problems/missing-numbers
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expected= nums.size()*(nums.size()+1)/2;
        int actual=0;
        for(int x :nums) actual+=x;
        return expected - actual ;   
    }
};