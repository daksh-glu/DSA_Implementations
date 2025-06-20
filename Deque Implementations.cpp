/*
A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends.

Given a deque and q queries. The task is to perform some operation on dequeue according to the queries as given below:
1. pb: query to push back the element x.
2. pf: query to push element x(given with query) to the front of the deque.
3. pp_b(): query to delete element from the back of the deque.
4. f: query to return a front element from the deque.
  
  */

class Solution {
public:
 
    void pb(deque<int>& dq, int x) {
        dq.push_back(x);
    }


    void pf(deque<int>& dq, int x) {
        dq.push_front(x);
    }


    void ppb(deque<int>& dq) {
        if (!dq.empty()) {
            dq.pop_back();
        }
    }

 
    int front_dq(deque<int>& dq) {
        if (!dq.empty()) {
            return dq.front();
        }
        return -1; 
    }
};
