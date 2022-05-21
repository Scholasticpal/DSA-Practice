//https://practice.geeksforgeeks.org/problems/confused-pappu5749/1#

//User function Template for Java
class Solution 
{ 
    long findDiff(long amount) 
    {
        String am = "";
        String s = String.valueOf(amount);
        for(int i = 0; i<s.length(); i++){
            if(s.charAt(i) =='6'){
                am += '9';
            }
            else{
                am += s.charAt(i);
            }
        }
        long num = Integer.parseInt(am);
        long diff = 0;
        diff = Math.abs(amount - num);
        return diff;
    }
} 
