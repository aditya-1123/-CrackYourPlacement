void gcd_lcm(int n1, int n2) {
    int o1 = n1;
    int o2 = n2;
    
    while((n1 % n2) != 0) {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    
    int gcd = n2;
    int lcm = (o1 * o2) / gcd;
    
    cout<<"lcm: "<<lcm<<endl;
    cout<<"gcd: "<<gcd<<endl;
}
