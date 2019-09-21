#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Rails
{
public:
    bool check_valid_order(queue<int>order)
    {
        int n = order.size();
        for(auto i=1; i <= n; i++)
        {
            _stack.push(i);
            while(_stack.top()==order.front() && !_stack.empty())
            {
                _stack.pop();
                order.pop();
            }
        }
        if(_stack.empty())
            return true;
        else
            return false;

    }

private:
    stack<int> _stack;

};



int main() {
    queue<int> s;
    s.push(3);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    Rails solution;

    bool res = solution.check_valid_order(s);
    if(res==true)
        cout<<"序列合法"<<endl;
    else
        cout<<"序列不合法"<<endl;
    return 0;
}