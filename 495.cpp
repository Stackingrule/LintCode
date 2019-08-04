class Stack {
private:
    std::queue<int> _data;
public:
    /*
     * @param x: An integer
     * @return: nothing
     */
    void push(int x) {
        // write your code here
        std::queue<int> temp_queue;
        temp_queue.push(x);
        while(!_data.empty()) {
            temp_queue.push(_data.front());
            _data.pop();
        }
        while(!temp_queue.empty()) {
            _data.push(temp_queue.front());
            temp_queue.pop();
        }
    }

    /*
     * @return: nothing
     */
    void pop() {
        // write your code here
        _data.pop();
    }

    /*
     * @return: An integer
     */
    int top() {
        // write your code here
        return _data.front();
    }

    /*
     * @return: True if the stack is empty
     */
    bool isEmpty() {
        // write your code here
        return _data.empty();
    }
};