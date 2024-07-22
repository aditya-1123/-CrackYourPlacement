// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

1) vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_map<int, int>m;
        vector<int>v;

        for(auto it: nums) {
            m[it]++;
        }

        for(auto it: m) {
            if(it.second == 2) 
                v.push_back(it.first);
        }

        return v;
    }

2) vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>v;

        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                v.push_back(nums[i]);
            }
        }

        return v;
    }
