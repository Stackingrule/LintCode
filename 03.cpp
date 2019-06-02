class Solution {
    /*
     * param k : As description.
     * param n : As description.
     * return: An integer denote the count of digit k in 1..n
     */
    public: int digitCounts(int k, int n) {
        // write your code here
        int num=0;
        for(int i=0; i <= n; i++)
        {
            num += CountOfDigit(k, i);
        }
        return num;
    }
    public:
        int CountOfDigit(int k, int n)
        {
            int uint=0, ten=0;
                if(n%10 == k) uint++;
                if(n/10/k == k) ten++;
            return uint + ten;
        }
};