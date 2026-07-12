// Problem : Sort Color
// Leectode : https://leetcode.com/problems/sort-color
// Difficulty : Medium
// Status : Accepted
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i =0 ; i<=nums.size()-1 ; i++){
            int j =i;
            while(j>0 && nums[j] < nums[j-1]){
                int temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
                j--;
            }
        }   
    }
};