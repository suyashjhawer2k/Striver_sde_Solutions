int maxSubArray(vector<int>& nums) {
        int a=0 , sum=INT_MIN ; 
        for(int i=0 ; i<nums.size() ; i++)
        {
            a=a+nums[i] ;
            sum = max(a , sum) ;
            if(a<0)
                a=0 ;
        }
        return sum ;
    }
