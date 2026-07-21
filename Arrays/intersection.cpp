// Problem : Inersection of two arrays
// Leectode : https://leetcode.com/problems/intersection-of-two-arrays
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> common;
        if(nums1.size()>nums2.size()){
            for(int i=0; i<nums2.size(); i++){
                for(int j=0; j<nums1.size(); j++){
                    if(nums2[i]==nums1[j]){
                        common.insert(nums2[i]);
                    }
                }
            }
        }
        else if(nums1.size()<nums2.size()){
            for(int i=0; i<nums1.size(); i++){
                for(int j=0; j<nums2.size(); j++){
                    if(nums1[i]==nums2[j]){
                        common.insert(nums1[i]);
                    }
                }
            }
        }
        else{
            for(int i=0; i<nums2.size(); i++){
                for(int j=0; j<nums1.size(); j++){
                    if(nums2[i]==nums1[j]){
                        common.insert(nums2[i]);
                    }
                }
            }
        }
        vector<int>vec(common.begin(),common.end());
        return vec;
    }
};