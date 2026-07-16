// Problem : Find all duplicates in an array
// Leectode : https://leetcode.com/problems/find-all-duplicates-in-an-array
// Difficulty : Medium
// Status : Accepted
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> temp;
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]] +=1;
            if(mpp[nums[i]]==2){
                temp.push_back(nums[i]);
            }
        }
        return temp;
    }
};