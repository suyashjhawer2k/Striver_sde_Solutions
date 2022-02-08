 void nextPermutation(vector<int>& nums) {
        
        int n = nums.size() ;
        int p1=-1 ;
         
        for(int i=n-2 ; i>=0 ; i--)
        {
            if(nums[i]<nums[i+1])
            {
                p1=i ;
                break ;
            }
            
        }
        if(p1==-1)
        {
            reverse(nums.begin() , nums.end()) ;
            return ;
        }
        int g1 ;
        for(int i=n-1 ; i>p1 ;i--)
        {
            if(nums[i]>nums[p1])
            {
                g1=i ;
                break ;
            }
        }
        swap(nums[p1],nums[g1]);
            reverse(nums.begin()+p1+1,nums.end());
    }
