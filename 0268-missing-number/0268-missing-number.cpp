class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int cnt1=0;
        for(int i=0;i<=n;i++)
        {
            cnt=cnt+i;
        }
        for(int i=0;i<n;i++)
        {
           cnt1=cnt1+nums[i]; 
        }
        return cnt-cnt1;
        
    }
};