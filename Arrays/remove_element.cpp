// Problem : Remove Element
// Leectode : https://leetcode.com/problems/remove-element
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>nums2;
        for(int i=0;i<nums.size(); i++){
            if(nums[i]!=val){
                nums2.push_back(nums[i]);
            }
        }
        for(int i=0; i<nums2.size(); i++){
            nums[i] = nums2[i];
        }    
        return nums2.size();
    }
};