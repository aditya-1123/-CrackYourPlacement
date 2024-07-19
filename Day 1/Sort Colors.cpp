// https://leetcode.com/problems/sort-colors/description/
// same as sort an array of 0s, 1s ans 2s

class Solution {
public:
    void sortColors(vector<int>& arr) { // O(n) 
        int n = arr.size(); 
        int l=0; int h=n-1; int mid=0;
        
        while(mid <= h)
        {
            if(arr[mid] == 0)
                swap(arr[l++], arr[mid++]);
                
            else if(arr[mid] == 1)
                mid++;
            else
                swap(arr[mid], arr[h--]);
        }
    }
};
