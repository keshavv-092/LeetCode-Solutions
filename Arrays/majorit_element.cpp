// Problem : Majority Element
// Leectode : https://leetcode.com/problems/majority-element
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]+=1;
        }
        int count=0;
        int majority;
        for(auto const&[key,value]:mpp){
            if(value>count){
                count = value;
                majority = key;
            }
        }    
        return majority;
    }
};