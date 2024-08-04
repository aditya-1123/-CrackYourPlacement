// i/p : arr[] = {10, 12, 16, 20, 32, 15}, K = 4  
// o/p : 4 
// The Longest subsequence in which the absolute difference of each pair divisible by K (= 4) are {12, 26, 20, 32}.

// i/p : arr[] = {1, 1, 2}, k=3
// o/p : 2

// 1) using hashing 
int maxLenSub(int arr[], int N, int K)
{
	int hash[K];

	memset(hash, 0, sizeof(hash));

	for (int i = 0; i < N; i++) 
		hash[arr[i] % K]++;

	int LenSub = 0;

	for (int i = 0; i < K; i++)  // Find the maximum element in hash[] array
		LenSub = max(LenSub, hash[i]);
        
    return LenSub;
}

int main()
{
	int arr[] = { 12, 3, 13, 5, 21, 11 };
	int K = 3;
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << maxLenSub(arr, N, K);
}

// 2) using recursion 
int maxi = 0; // global space;

void solve(int idx, vector<int>&arr, vector<int>aux, int k) {
    
    if(idx == arr.size()) //edgs case  
    {
        if(maxi < aux.size()) 
            maxi = aux.size();
        return;
    }
    
    if(aux.size()==0 || abs(arr[idx] - aux[aux.size()-1])%k==0) // pick  
    {
        aux.push_back(arr[idx]);
        solve(idx+1, arr, aux, k);
        aux.pop_back();
    }
    
    solve(idx+1, arr, aux, k); // not pick will alaways 
}
