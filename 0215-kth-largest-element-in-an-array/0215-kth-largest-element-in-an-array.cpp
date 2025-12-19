class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(pq.size()<k){
                pq.push(x);
            }
            else if(x>pq.top()){
                pq.pop();
pq.push(x);

            }
        }
        return pq.top();
    }
};