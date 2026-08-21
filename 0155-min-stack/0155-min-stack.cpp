class MinStack {
public:
    stack<int> st1;
    stack<int> minst;

    MinStack() {
    }

    void push(int val) {

        st1.push(val);

        if (minst.empty() || val <= minst.top()) {
            minst.push(val);
        }
    }

    void pop() {

        if (st1.top() == minst.top()) {
            minst.pop();
        }

        st1.pop();
    }

    int top() {
        return st1.top();
    }

    int getMin() {
        return minst.top();
    }
};