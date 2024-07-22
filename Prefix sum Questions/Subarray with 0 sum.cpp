// https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

1) bool subArrayExists(int arr[], int n) // O(n2)
    {
        for (int i = 0; i < n; i++) {
            int currentSum = arr[i];
            if (currentSum == 0) {
                return true;
            }
            else {
            // Try all subarrays starting with 'i'
                for (int j = i + 1; j < n; j++) {
                    currentSum += arr[j];
 
                    if (currentSum == 0) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

2)  bool subArrayExists(int arr[], int n) // O(n)
    {
        unordered_set<int>h;
        int pre_sum =0;
        
        for(int i=0; i<n; i++) {
            pre_sum += arr[i];
        
            if(h.find(pre_sum) != h.end()) 
                return true;
        
            if(pre_sum == 0) 
                return true;
        
            h.insert(pre_sum);
        }
        return false;
    }
