class Solution
{
public:
    /**
     * @param s: A string
	 * @return: whether the string is a valid parentheses
	 */
	bool isValidParentheses(string &s) 
	{
	    // write your code here
	    stack<char> st;
	    for(int i = 0; i < s.size(); ++i)
	    {
	    	if(s[i] == '(' || s[i] == '[' || s[i] == '{')
	    	{
	    		st.push(s[i]);
	    	}
	    	if(s[i] == ')')
	    	{
	    		if(st.size() == 0) return false;
	    		if(st.top()  != '(') return false;
	    		st.pop();
	    	}
	    	if(s[i] == ']')
	    	{
	    		if(st.size() == 0) return false;
	    		if(st.top()  != '[') return false;
	    		st.pop();
	    	}
	    	if(s[i] == '}')
	    	{
	    		if(st.size() == 0) return false;
	    		if(st.top() != '{') return false;
	    		st.pop();
	    	}
	    }
	    return st.size() == 0;
	}
};