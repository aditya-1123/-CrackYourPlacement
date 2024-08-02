// Longest Substring Without Repeating Characters
// Given a string s, find the length of the longest substring without repeating characters.

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

// 1) Naive approach
bool isDistinct(string s, int i, int j) {
    vector<bool>visited(256);

    for(int k=i; k<=j; k++) {
        if(visited[s[k]]==true) 
            return false;
        visited[s[k]] = true;
    }
    return true;
}

int lengthOfLongestSubstring(string s) {
  int n = s.length();

  int res = 0;
  for(int i =0; i<n; i++) {
      for(int j=i; j<n; j++) {
          if(isDistinct(s, i, j)) 
              res = max(res, j-i+1);
      }
  }
  return res;
}

// 2) Sliding window
int lengthOfLongestSubstring(string s) {    
  vector<bool>count(256,0);
  int first =0, second =0, len =0;

  while(second<s.size())
  {
      // Repeating char
      while(count[s[second]])
      {
          count[s[first]]=0;
          first++;
      }

      count[s[second]]=1;
      len = max(len, second-first+1);
      second++;
  }

  return len;
}
