int majorityElement(vector<int>& nums) {
        int ele =0 ;
        int cn =0 ;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(cn==0)
                ele=nums[i] ;
            
           if(ele==nums[i])
                cn++ ;
            
            else
                cn-- ;
        }
        return ele ;
    }
