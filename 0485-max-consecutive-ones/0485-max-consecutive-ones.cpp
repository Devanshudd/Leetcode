class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
    int j=0;
    int count=0;
    int count1=0;
    int max=0;
        int num=nums[0];
    if(nums.size()==1 && num==0)
        return 0;
     if(nums.size()==1 && num==1)
        return 1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            count1++;
            
        }
        if(nums[i]==1)
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else
        {
            count=0;
        }
    }
    if(count1==nums.size())
    {
        return 0;
    }
     return max;   
    }
};