/* Longest Palindromic substring 
i/p : cbcbbc
o/p : cbbc
*/
string solve(string str) {
    int n = str.length();
    int max_len = 1;
    int st;
    
    for(int i=0; i<n; i++) { // odd
        int l=i, r=i;
        
        while(l>=0 && r<n) {
            if(str[l] == str[r]) {
                l--;
                r++;
            }
            else 
                break;
        }
        
        int curr = r - l - 1;
        if(max_len < curr) {
            max_len = curr;
            st = l + 1;
        }
    }
    
    for(int i=0; i<n-1; i++) { // even
        int l=i, r=i+1;
        
        while(l>=0 && r<n) {
            if(str[l] == str[r]) {
                l--;
                r++;
            }
            else 
                break;
        }
        
        int curr = r - l - 1;
        if(max_len < curr) {
            max_len = curr;
            st = l + 1;
        }
    }
    
    return str.substr(st, max_len);
}
