/*
Given an array arr[] , enqueue the elements of the array into a queue and then dequeue them.
*/
queue<int> fillQ(const vector<int>& arr) {
        // code here
        queue<int> q; 
        for(int i = 0; i < arr.size(); i++) {
            q.push(arr[i]); 
        }
        return q;
    }

    void emptyQ(queue<int>& q) {

        
        // code here
        while(!q.empty()) {
            cout << q.front() << " "; 
            q.pop(); 
        }
        cout<<endl;
    }
