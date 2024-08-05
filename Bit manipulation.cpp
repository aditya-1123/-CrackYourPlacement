// given N rearrange the bits to group all set bits and form the minimum possible number.

int solve(int n) {
    int cnt = 0;
    
    while(n) { // COUNT SET BITS 
        cnt += n & 1;
        n = n>>1;
    }
    
    int res = pow(2, cnt) - 1; // SET THE COUNT BITS FROM RIGHT SIDE (IT FORMS GP WITH CR 2)
                                                    // i.e .....8, 4, 2, 1 formula = 2^n - 1
    return res;
}
