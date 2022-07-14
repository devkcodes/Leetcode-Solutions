class Solution {
public:
    int helper(int n)
    {
        int sum = 0;
        while(n>0)
        {
            int rem=n%10;
            sum+=rem*rem;
            n=n/10;
        }
        
        return sum;
    }
    bool isHappy(int n) {
         while (n != 1 && n != 4) {
            n = helper(n);
        }
        return n == 1;
        
    }
};