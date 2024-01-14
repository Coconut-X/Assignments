//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
public:
    int climbStairs(int n) {
        int f=0,s=1,next;
        for(int i=1;i<=n;i++)
        {
            next=f+s;
            f=s;
            s=next;
        }
        return next;
    }
};
