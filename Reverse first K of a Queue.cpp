//Reverse first K of a Queue
queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if (q.empty() || k <= 0 || k > q.size()) return q;

        stack<int> s;

        for (int i = 0; i < k; i++) {
            s.push(q.front());
            q.pop();
        }

       
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }

        
        int remaining = q.size() - k;
        for (int i = 0; i < remaining; i++) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
