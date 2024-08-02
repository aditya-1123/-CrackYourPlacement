// i/p : { 7, 10, 4, 3, 6, 5, 2 } 
// o/p : 10 6 5 2  

1)  void printLeaders(int arr[], int size) // O(n^2)
    {
        for (int i = 0; i < size; i++) {
            bool flag = true;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] <= arr[j]) {
                    flag = false;
                }
                    
            }
            if (flag) 
                cout << arr[i] << " ";
        }
    }

2) void printLeaders(int arr[], int size) // O(n) buts prints in reverse array 
  {
      int ldr = arr[size-1];
      cout<<ldr<<" ";
      
      for(int i=size-2; i>=0; i--) {
          if(ldr < arr[i]) {
              ldr = arr[i];
              cout<<arr[i]<<" ";
          }
      }
  }
  
  int main()
  {
      int arr[] = {16, 17, 4, 3, 5, 2};
      int n = sizeof(arr) / sizeof(arr[0]);
      printLeaders(arr, n);
      return 0;
  }
