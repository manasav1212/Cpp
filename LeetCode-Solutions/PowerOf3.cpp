//https://leetcode.com/problems/power-of-three/description/?envType=problem-list-v2&envId=recursion

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0)
            return false;
        double x = log(n)/log(3);
        if(pow(3,round(x)) == n)
            return true;
        else
            return false;
    }
};