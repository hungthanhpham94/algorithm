class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;
        
        while (!(n & 1)) {
            n = n >> 1;
        }
        return (n == 1);
    }
};
