// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between maximum chocolates and minimum chocolates is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.

long long findMinDiff(vector<long long> a, long long n, long long m){
        
        if(m>n)
            return -1;
            
        sort(a.begin(), a.end());
        
        long long res = INT_MAX;
        
        for(int i=0; i< n-m+1; i++)
        {
            res = min(res, (a[i+m-1] - a[i]));
        }
        
        return res;
    }   
