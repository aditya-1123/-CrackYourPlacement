// Solved using 2 methods 

1) Using HashSet

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;

        for(int it: nums) // O(nlogn)
            s.insert(it);

        int i = 0;
        for(auto it: s)  // O(n)
            nums[i++] = it;

        return i;
    }
};

2) Using 2 pointers 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1; 
        for(int i=1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
