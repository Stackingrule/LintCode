class Solution {
public:
    /**
     * @param num: a positive number
     * @return: true if it's a palindrome or false
     */
    bool isPalindrome(int num) {
        // write your code here
        int origin = num;
        int sum = 0;
        while(num) {
            int temp = num % 10;
            sum = sum*10 + temp;
            num /= 10;
        }
        if(sum == origin) return true;
        else return false;
    }
};