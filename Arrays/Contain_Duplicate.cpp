// Problem : Contains Duplicate
// Leectode : https://leetcode.com/problems/contains-duplicate
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;
        sort(nums.begin() , nums.end())  ;
         for(int i =1; i<=nums.size()-1 ; i++){
            if(nums[i] == nums[i-1]){
                return true;
            }        
        } 
        return false;
    }
};