// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res = "";

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[n-1];

        for(int i=0; i<last.size(); i++) {
            if(first[i] != last[i]) 
                break;
            res += first[i];
        }
        return res;
}
