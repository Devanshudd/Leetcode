class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n=nums.size();
    int cnt=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            cnt++;
        }
        if(nums[i]==1)
        {
            cnt1++;
        }
        if(nums[i]==2)
        {
            cnt2++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        while(cnt!=0)
        {
            nums[i]=0;
            cnt--;
            i++;
        }
        while(cnt1!=0)
        {
            nums[i]=1;
            cnt1--;
            i++;
        }
        while(cnt2!=0)
        {
            nums[i]=2;
            cnt2--;
            i++;
        }
    }
    
    }
};