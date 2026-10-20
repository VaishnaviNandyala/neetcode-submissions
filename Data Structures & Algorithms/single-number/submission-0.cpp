class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int result = 0;
        while(i<n){
            result ^= nums[i];
            i++;
        }
        return result;
    }
};
