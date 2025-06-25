/*
Given a queue of integers and Q queries. The task is to perform operations on queue according to the query. 

Queries are as:

    i x : (adds element x in the queue from rear).

    r : (Removes the front element of queue).

    h : (Returns the front element).

    f y : (check if the element y is present or not in the queue). Return "Yes" if present, else "No".

*/

class Solution {
public:
    // Function to push an element in queue.
    void enqueue(queue<int>& q, int x) {
        q.push(x);  
    }

    // Function to remove front element from queue.
    void dequeue(queue<int>& q) {
        if (!q.empty()) {
            q.pop(); 
        }
    }

    // Function to find the front element of queue.
    int front(queue<int>& q) {
        if (!q.empty()) {
            return q.front(); 
        }
        return -1;  
    }

    // Function to find an element in the queue.
    string find(queue<int> q, int x) {
        // Traverse the queue to find x
        while (!q.empty()) {
            if (q.front() == x) {
                return "Yes";
            }
            q.pop();
        }
        return "No";
    }
};
