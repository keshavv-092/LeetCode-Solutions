// Problem : Merge Sorted Array
// Leectode : https://leetcode.com/problems/merge-sorted-array
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0){
            return ;
        }
        if(m==0){
            nums1 = nums2;
            return;
        }
        vector<int> temp;
        int left =0;
        int right = 0;
        while(left<m && right <n){
            if(nums1[left] <= nums2[right]){
                temp.push_back(nums1[left]);
                left++;
            }
            else{
                temp.push_back(nums2[right]);
                right++;
            }
        }
        while(left<m){
            temp.push_back(nums1[left]);
            left++;
        }
        while(right<n){
            temp.push_back(nums2[right]);
            right++;
        }
        for(int i=0; i<(m+n) ; i++){
            nums1[i] = temp[i];
        }    
    }
};