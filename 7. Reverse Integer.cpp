class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start=0;
        for(auto i:nums)
            if(i!=val) nums[start++]=i;
        
        return start;
    }
};