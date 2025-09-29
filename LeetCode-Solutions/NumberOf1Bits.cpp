//Problem : https://leetcode.com/problems/number-of-1-bits/description/

class Solution {
public:
    int hammingWeight(int n) {
        //Brian Kernighan’s Algorithm
        int count = 0;
        while(n)
        {
            n = n & (n-1);
            count++;
        }
        return count;
    }
};