#include <iostream>
#include <queue>
using namespace std;



class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {

    }

    void addNum(int num) {
        if(big_queue.empty())
        {
            big_queue.push(num);
            return;
        }
        if (big_queue.size()==small_queue.size())
        {
            if (num<big_queue.top())
                big_queue.push(num);
            else
                small_queue.push(num);
        }
        else if(big_queue.size()>small_queue.size())
        {
            if (big_queue.top()<num)
            {
                small_queue.push(num);
            }
            else
            {
                small_queue.push(big_queue.top());
                big_queue.pop();
                big_queue.push(num);
            }
        }
        else if(big_queue.size()<small_queue.size())
        {
            if (small_queue.top()<num)
            {
                big_queue.push(small_queue.top());
                small_queue.pop();
                small_queue.push(num);
            }
            else
                big_queue.push(num);
        }

    }

    double findMedian() {
        if (big_queue.size()==small_queue.size())
            return (big_queue.top()+small_queue.top())/2;
        else if(big_queue.size()>small_queue.size())
            return big_queue.top();
        return small_queue.top();

    }

private:
    priority_queue<float,vector<float>,greater<float>> small_queue;
    priority_queue<float> big_queue;

};
int main() {
    MedianFinder M;
//    int test[] = {6,10,1,7,99,4,33};
//    for (int i=0;i<7;i++)
//    {
//        M.addNum(test[i]);;
//        cout<<M.findMedian()<<endl;
//    }
    M.addNum(1);
    M.addNum(2);
    cout<<M.findMedian()<<endl;
    M.addNum(3);
    cout<<M.findMedian()<<endl;

    return 0;
}