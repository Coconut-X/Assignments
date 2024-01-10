class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
      long int a=x, b=0;
        while(x!=0)
        {
            int rem=x%10;
            b=(b*10)+rem;
            x/=10;
        }
        return (b == a) ? true : false;
    }
};
