#include <iostream>
#include <stack>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        mystack.push(x);
        if(minstack.empty())
            minstack.push(x);
        else
        {
            if(x>minstack.top())
                x = minstack.top();
            minstack.push(x);
        }

    }

    void pop() {
        mystack.pop();
        minstack.pop();

    }

    int top() {
        int x = mystack.top();
        return x;


    }

    int getMin() {
        return minstack.top();

    }

private:
    stack<int> mystack;
    stack<int> minstack;

};


int main() {
    MinStack minstack;
    minstack.push(-2);
    cout<<"top="<<minstack.top()<<endl;
    cout<<"min="<<minstack.getMin()<<endl;
    minstack.push(0);
    cout<<"top="<<minstack.top()<<endl;
    cout<<"min="<<minstack.getMin()<<endl;
    minstack.push(-5);
    cout<<"top="<<minstack.top()<<endl;
    cout<<"min="<<minstack.getMin()<<endl;
    minstack.pop();
    cout<<"top="<<minstack.top()<<endl;
    cout<<"min="<<minstack.getMin()<<endl;


    return 0;
}