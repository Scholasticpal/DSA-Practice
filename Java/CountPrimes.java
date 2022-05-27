// https://leetcode.com/problems/count-primes/

class Solution {
    public int countPrimes(int n) {
        boolean prime[] = new boolean[n+1];
        int count = 0;
        
        for(int i = 0; i<=n; i++){
            prime[i] = true;
            if( i == 0 || i == 1 ){
                prime[i] = false;
            }
        }
        for(int p = 2; p*p < n; p++){
            if(prime[p] == true){
                for(int i = p*p; i < n; i += p){
                    prime[i] = false;
                }
            }
        }
        for(int i = 0; i< n; i++){
            if(prime[i] == true){
                count++;
            }
        }
        return count;
    }
}
