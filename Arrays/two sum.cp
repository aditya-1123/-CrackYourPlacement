// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;

        for(int i=0; i<nums.size(); i++) {
            int d = target - nums[i];

            if(mp.count(d)) 
                return {mp[d], i};

            mp[nums[i]] = i;
        }
        return {};
    }
