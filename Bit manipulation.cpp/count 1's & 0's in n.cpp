void solve(int n) {
    int c0 = 0, c1 = 0;
    
    while(n) {
        if(n & 1) {
            c1++;
        }
        else {
            c0++;
        }
        
        n = n >> 1;
    }
    
    cout<<"1: "<<c1;
    cout<<"\n0: "<<c0;
}
