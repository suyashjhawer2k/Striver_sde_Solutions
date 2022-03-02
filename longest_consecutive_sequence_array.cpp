int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0 ;
        set<int> s ;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(s.find(nums[i])==s.end())
            {
                s.insert(nums[i]) ;
            }
            else
            {
                continue ;
            }
        }
        int count = 1 ;
        int lcs = 1 ;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            count=1 ;
            if(s.find(nums[i]-1)==s.end())
            {
                
                int cur = nums[i] ;
                while(s.find(cur+1)!=s.end())
                {
                    cur = cur+1 ;
                    count++ ;
                }
            }
            lcs=max(count , lcs) ;
        }
        return lcs ;
    }
