// n = 8
// n = 8
// arr[] = 5  15 10 8  6  12 9  18
// o/p  =  15 18 12 12 12 18 18 -1

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, int arr[]) {
    vector<int>v;
    stack<int>s;
    s.push(arr[n-1]);
    v.push_back(-1);
    
    for(int i=n-2; i>=0; i--) {
        
        while(!s.empty() && s.top() <= arr[i]) 
            s.pop();
            
        int ng = s.empty() ? -1 : s.top();
        v.push_back(ng);
        
        s.push(arr[i]);
    }
    
    reverse(v.begin(), v.end()); 
    return v;
}

int main()  
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<int>v = solve(n, arr);
    for(auto it: v) cout<<it<<" ";

    return 0;
}
