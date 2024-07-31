// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.

bool isPalindrome(const string& s, int l, int h) {
        while (l < h) {
            if (s[l] != s[h])
                return false;
            l++;
            h--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l = 0, h = s.length() - 1;

        while (l < h) {
            if (s[l] != s[h]) {
                // Check the two possible substrings: one without the 
                // left character and one without the right character
                return isPalindrome(s, l + 1, h) || isPalindrome(s, l, h - 1);
            }
            l++;
            h--;
        }
        return true;
    }
