// Problem : Find first and last position of an element in array
// Leectode : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array
// Difficulty : Medium
// Status : Accepted
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        bool start = true;
        bool end =true;
        int right=0 , left=0;
        while(i<nums.size() && j>=0){
            if(nums[i]==target && start){
                left = i;
                start =false;
            }
            else {
               i++;
            }
            if(nums[j]==target && end){
                right = j;
                end =false;
            }
            else{
                j--;
            }
        }
        if(start & end) return {-1,-1};
        return {left,right}; 
    }
};