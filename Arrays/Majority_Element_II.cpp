// Problem : Majority Element - II
// Leectode : https://leetcode.com/problems/majority-element-II
// Difficulty : Medium
// Status : Accepted
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]] +=1;
        }  
        vector<int> majority;
        for(auto const&[key,value]:mpp){
            if(value>(nums.size()/3)){
                majority.push_back(key);
            }
        }
        return majority;
    }
};