/*
Given an array arr[] containing non-negative integers. You need to insert all elements of the array to deque and return it.
*/
deque<int> dqInsertion(const vector<int>& arr) {
        // code here
        deque<int> q;
        for(int i = 0; i < arr.size(); i++){
            q.push_back(arr[i]);
        }
        return q;
    }
