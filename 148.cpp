//   计数排序
class Solution {
public:
    /**
     * @param nums: A list of integer which is 0, 1 or 2 
     * @return: nothing
     */
    void sortColors(vector<int> &nums) {
        // write your code here
        vector<int> count(3, 0);
        for(int i = 0; i < nums.size(); i++) {
            count[nums[i]] ++;
        }
        int index = 0;
        for(int i = 0; i< count[0]; i++)
            nums[index++] = 0;
        for(int i = 0; i < count[1]; i++)
            nums[index++] = 1;
        for(int i = 0; i < count[2]; i++)
            nums[index++] = 2;
    }
};

//  三路快排
class Solution {
public:
    /**
     * @param nums: A list of integer which is 0, 1 or 2 
     * @return: nothing
     */
    void sortColors(vector<int> &nums) {
        // write your code here
        int zero = -1;
        int two = nums.size();
        for(int i = 0; i < two; ) {
            if(nums[i] == 1)
                i++;
            else if(nums[i] == 2)
                swap(nums[i], nums[--two]);
            else {
                swap(nums[++zero], nums[i++]);
            } 
        }
    }
};