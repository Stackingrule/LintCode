class Solution {
public:
    /*
     * @param nums: An ineger array
     * @return: An integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int len = nums.size();
        if(len == 0) return 0;
        int i = 0, j = 0;
        while(++j < len) {
            if(nums[i] != nums[j])
            nums[++i] = nums[j];
        }
        return i+1;
    }
};