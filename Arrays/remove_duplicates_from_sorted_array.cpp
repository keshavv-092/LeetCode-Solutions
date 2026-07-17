// Problem : remove-duplicates-from-sorted-array
// Leectode : https://leetcode.com/problems/remove-duplicates-from-sorted-array
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> expectednums;
        int k=1;
        expectednums.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            if(expectednums.back() == nums[i]){
                continue; 
            }
            else{
                expectednums.push_back(nums[i]);
                k++;
            }
        }
        for(int i=0; i<expectednums.size(); i++){
            nums[i] = expectednums[i];
        }
        return k;

    }
};