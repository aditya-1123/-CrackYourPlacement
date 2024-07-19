// https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) { // O(nlogn)
        
        sort(nums.begin(), nums.end()); 
        int res;
        for(int i=0; i<=nums.size(); i++) {
            if(nums[i] == nums[i+1]) {
                res = nums[i];
                break;
            }
        }

        return res;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {  // O(n) T.C & O(n) A.S
        unordered_set<int>s;

        for(int i=0; i<nums.size(); i++) {
            
            if(s.find(nums[i]) != s.end()) 
                return nums[i];
            
            s.insert(nums[i]);
        }

        return 0;
    }
};
