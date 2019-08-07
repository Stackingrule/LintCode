class Solution {
public:
    /**
     * @param str: str: the given string
     * @return: char: the first unique character in a given string
     */
    char firstUniqChar(string &str) {
        // Write your code here
        vector<int> freq(26, 0);
        for(int i = 0; i < str.length(); i++) {
            freq[str[i] - 'a']++;
        }
        for(int i = 0; i < str.length(); i++) {
            if(freq[str[i] - 'a'] == 1)
            return str[i];
        }
        
    }
};