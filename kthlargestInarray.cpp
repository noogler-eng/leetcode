class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // min heap as largest and k
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> s;
        for(int i=0; i<n; i++){
            s.push(nums[i]);
            if(s.size() > k){
                s.pop();
            }
        }
        return s.top();
    }
};