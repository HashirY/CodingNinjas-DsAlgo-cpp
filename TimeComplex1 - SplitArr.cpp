bool splitArrayHelper(int *input , int size, int i , int lsum , int rsum){
    
    if(size == i){
        return lsum == rsum;
    }
    
    if(input[i] % 3 == 0){
        lsum += input[i];
    }
    else if(input[i] % 5 == 0){
        rsum += input[i];
    }
    
    else{
        return splitArrayHelper(input , size , i+1 , lsum+input[i] , rsum) || splitArrayHelper(input , size , i+1 , lsum , rsum+input[i]);
    }
    
    return splitArrayHelper(input , size , i+1 , lsum , rsum);
}


bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return splitArrayHelper(input , size , 0, 0 , 0);
    
}
