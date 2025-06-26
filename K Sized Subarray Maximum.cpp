/*
Given an array arr[] of integers and an integer k, your task is to find the maximum value for each contiguous subarray of size k. The output should be an array of maximum values corresponding to each contiguous subarray.
*/
vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque<int> dq;        
        vector<int> result;
    
        for (int i = 0; i < arr.size(); i++) {

            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
    
            while (!dq.empty() && arr[dq.back()] < arr[i]) {
                dq.pop_back();
            }
    
            dq.push_back(i);
    
            if (i >= k - 1) {
                result.push_back(arr[dq.front()]);
            }
        }
    
        return result;
        
    }
