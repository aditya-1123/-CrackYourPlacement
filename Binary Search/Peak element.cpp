int findPeak(int arr[], int n) {
    
    if(arr[n-1] > arr[n-2]) 
        return arr[n-1];
    if(arr[0] > arr[1]) 
        return arr[0];
        
    // int l=1, h=n-2;
    // while(l<=h) {
    //     int mid = l + (h-l)/2;
        
    //     if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1] ) 
    //         return arr[mid];
            
    //     if(arr[mid] > arr[mid - 1]) 
    //         l = mid + 1;
    //     else 
    //         h = mid - 1;
            
    // }

    // OR 
    
    for(int i=1; i<n-1; i++) {
        if(arr[i] > arr[i+1]) 
            return arr[i];
    }
    return -1;
}

int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is " << findPeak(arr, N);
    return 0;
}
