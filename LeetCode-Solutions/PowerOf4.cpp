//https://leetcode.com/problems/power-of-four/?envType=problem-list-v2&envId=recursion

class Solution {
public:
    bool isPowerOfFour(int n) {
      if(n <= 0)
            return false;
        double x = log(n)/log(4);
        if(pow(4,round(x)) == n)
            return true;
        else
            return false;       
    }
};