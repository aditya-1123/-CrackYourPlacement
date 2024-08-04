/* You are given an array of size N, you have to find the length of longest subsequence 
such that each element in subsequence is triple of previous

i/p : arr[] = { 2, 3, 6, 18 }
o/p : arr[] = 3 i.e (2, 6, 18)

pick condition : 1) temp.size() == 0
                 2) temp[last] *3 == arr[idx]
*/

int maxi = 0; // global space;

void solve(int idx, vector<int>&arr, vector<int>aux) {
    
    if(idx == arr.size()) // edge case  
    {
        if(maxi < aux.size()) 
            maxi = aux.size();
        return;
    }
    
    if(aux.size()==0 || ( aux[aux.size()-1]*3 == arr[idx]) ) // pick  
    {
        aux.push_back(arr[idx]);
        solve(idx+1, arr, aux);
        aux.pop_back();
    }
    
    solve(idx+1, arr, aux); // not pick will alaways work 
}

