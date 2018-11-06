int hammingDistance(int x, int y) {
    
    int exor_soln = x ^ y;
    int ham_dist = 0;
    
    while(exor_soln != 0)
    {
        if(1 & exor_soln)
        {
            ham_dist++;
        }
        exor_soln = exor_soln >> 1;
    }
    
    return ham_dist;
    
}
