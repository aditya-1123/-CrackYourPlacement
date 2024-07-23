// https://leetcode.com/problems/subarray-sum-equals-k/description/
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:
// Input: nums = [1,1,1], k = 2
// Output: 2

int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int curr = 0, ans = 0;
        mp[curr] = 1;

        for(int it : nums) {
            curr += it;
            int presum = curr - k;
            
            if(mp.find(presum) != mp.end()) {
                ans += mp[presum];
            }
            mp[curr]++;
        }
        return ans;
    }
