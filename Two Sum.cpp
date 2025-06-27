/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n  = nums.size();
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j< n; j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;

                }
            }
        }
        return ans;

        
    }
