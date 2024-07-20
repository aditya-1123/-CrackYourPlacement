// https://leetcode.com/problems/two-sum/description/

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

1) vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i]+nums[j]==target) 
                    return {i, j};
            }
        }
        return {0, 0};
    }

2)  vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;

        for(int i=0; i<nums.size(); i++) {
            int d = target - nums[i];

            if(mp.find(d) != mp.end()) 
                return {mp[d], i};

            mp[nums[i]] = i;
        }
        return {};
    }
