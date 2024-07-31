// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

int strStr(string arr1, string arr2) {
        int m = arr1.size();
        int n = arr2.size();
        
        for(int i=0; i<m; i++) {
            int j=0;
            for(  ; j<n; j++) {

                if(arr1[i+j] != arr2[j]) {
                    break;
                }
            }

            if(j==n) 
                return i;
        }
        return -1;
    }
